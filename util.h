#pragma once
#include <iostream>
#include <algorithm>
#include <cassert>
#include <ctime>

using namespace std;

namespace MyUtil {

	int *generateRandomArray(int n, int rangeL, int rangeR) {

		assert(n > 0 && rangeL <= rangeR);

		int *arr = new int[n];

		srand(time(NULL));
		for (int i = 0; i < n; i++)
			arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
		return arr;
	}

	int *generateOrderedArray(int n) {

		assert(n > 0);

		int *arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = i;
		return arr;
	}

}
