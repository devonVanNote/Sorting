#include "sort.h"
#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;
using std::vector;

void runTheSortGauntlet();
void generateRandomVectorValues(vector<int>& v);
void printVector(vector<int>& v, string status);
void bubble();
void merge();

int main() {
	runTheSortGauntlet();
	return 0;
}

void runTheSortGauntlet() {
	bubble();
	merge();
}

void merge() {
	vector<int> v;

	generateRandomVectorValues(v);

	printVector(v, "Before Merge Sort");

	//mergeSort(v);

	printVector(v, "\nAfter Merge Sort");
}

void bubble() {
	vector<int> v;

	generateRandomVectorValues(v);

	printVector(v, "Before Bubble Sort");

	bubbleSort(v);

	printVector(v, "\nAfter Bubble Sort");
}

void generateRandomVectorValues(vector<int>& v) {
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++) {
		v.push_back(rand() % 1000 + 1);
	}
}

void printVector(vector<int>& v, string status) {
	cout << status << "\n";
	
	for (auto i = v.begin(); i != v.end(); ++i) {
		cout << *i << " ";
	}
	
	cout << "\n";
}