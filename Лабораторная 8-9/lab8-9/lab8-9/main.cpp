#include <cmath>
#include <iostream>
#include <string>
#include <exception>
using namespace std;

template<typename baseType, int exp>
baseType power(const baseType baseType) {
	return pow(baseType, exp);
}

class popFromEmptyQueueException : public exception {
public:
	popFromEmptyQueueException() {
	}
	int what() {
		cout << "You tried to get something out from an empty queue. return 0.";
		return 0;
	}
};

class pushToFullQueueException : public exception {
public:
	pushToFullQueueException() {
	}
	int what() {
		cout << "You tried to add something to a full queue.";
		return 0;
	}
};

template<int N, class T> class queue {
private:
	struct data {
		T value;
		data * next;
	};
	data * last;
	data * first;
	int size;
public:
	queue() {
		last = NULL;
		first = NULL;
		size = 0;
	}
	bool isEmpty() {
		if (size == 0) return true;
		else return false;
	}
	bool isFull() {
		if (size == N) return true;
		else return false;
	}
	T Pop() {
		if (size == 0) {
			throw popFromEmptyQueueException();
		} else {
			T temp = first -> value;
			data * next = first -> next;
			delete(first); size--;
			first = next;
			return temp;
		}
	}
	void Push(const T value) {
		if (size == 0) {
			data * temp = new data;
			first = temp;
			last = temp;
			first -> value = value;
			first -> next = NULL;
			size = 1;
		} else {
			if (size == N) throw pushToFullQueueException();
			data * temp = new data;
			temp -> value = value;
			temp -> next = NULL;
			last -> next = temp;
			last = temp;
			size++;
		}
	}
};

int main() {
	cout << "2 ^ 3 = " << power<int, 3>(2) << endl;
	cout << "0.5 ^ 2 = " << power<double, 2>(0.5) << endl;
	queue<50, int> q;
	for (int i = 0; i < 51; i++) {
		try {
			q.Push(rand());
		} catch (pushToFullQueueException & e) {
			cout << e.what();
		}
	}
	for (int i = 0; i < 51; i++) {
		try {
			cout << q.Pop() << " ";
		} catch (popFromEmptyQueueException & e) {
			cout << e.what();
		}
	}
	return 0;
}