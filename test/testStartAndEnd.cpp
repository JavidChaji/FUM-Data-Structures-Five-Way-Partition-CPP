/* Copyright (C) Fateme Chaji, Ferdowsi Univerity of Mashhad
* 25 Esfand 1396(Hijri shamsi)
* 16 March 2018
* Author: Fateme Chaji
*/

#include "../src/FiveWayPartition.h"
#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int n = 20;
	int pivot1, pivot2;
	int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
	int *A;

	FiveWayPartition<int>* fwp = new FiveWayPartition<int>();
	A = new int[n];

	srand(time(NULL));
	
	pivot1 = rand() % 8;
	pivot2 = rand() % 8;
	
	if (pivot1 > pivot2)
		swap(pivot1, pivot2);

	if (pivot1 == pivot2)
	{
		pivot2++;
	}

	cout << "Initial Array:" << endl;
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 6;
		cout << A[i] << ", ";
	}	

	fwp->Partition(A, pivot1, pivot2, 5, 15, q1, q2, q3, q4);

	cout << "\n\nLess than " << pivot1 << ":" << endl;
	for (int i = 5; i < q1; i++){
		cout << A[i] << ", ";
	}

	cout << "\n\nEquals to " << pivot1 << ":" << endl;
	for (int i = q1; i < q2; i++) {
		cout << A[i] << ", ";
	}

	cout << "\n\nLess than " << pivot2 << " and greater than "<<  pivot1 << ":" << endl;
	for (int i = q2; i < q3; i++){
		cout << A[i] << ", ";
	}

	cout << "\n\nEquals to " << pivot2 << ":" << endl;
	for (int i = q3; i < q4; i++) {
		cout << A[i] << ", ";
	}

	cout << "\n\nGreater than " << pivot2 << ":" << endl;
	for (int i = q4; i < 16; i++) {
		cout << A[i] << ", ";
	}

	int d;
	cin >> d;
}


