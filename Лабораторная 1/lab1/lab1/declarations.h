// Course: Programming technologies (C Plus Plus)
// Lab 1. Namespaces.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 21.02.2013 Modified: 22.02.2013
// Description: Declarations header file.

#pragma once

namespace matrix {
	const int size = 3;
	struct mtrx {
		double data[size][size];
	};
}