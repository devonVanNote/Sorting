#ifndef sort_h
#define sort_h
#include <vector>
#include <iostream>  
#include <stdio.h>
#include <math.h> 

using std::vector;

void bubbleSort(vector<int>& v) {
	for (auto i = 0U; i < v.size(); i++) {
		for (auto j = 0U; j < v.size() - i - 1; j++) {
			if (v[j] > v[j + 1]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}

#endif