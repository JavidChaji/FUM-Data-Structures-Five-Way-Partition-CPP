
/* Copyright (C) Fateme Chaji, Ferdowsi Univerity of Mashhad
* 25 Esfand 1396(Hijri shamsi)
* 16 March 2018
* Author: Fateme Chaji
*/

#pragma once
using namespace std;
template <class T>
class FiveWayPartition {

public:
	void Partition(T* A, T pivot1, T pivot2, int p, int r, int& q1, int& q2, int& q3, int& q4) {

		//Write your code here
		int i = p, j = p, k = p, l = r + 1, m = r + 1;
		if (p < r) {
			while (j < l) {
				if (A[j] < pivot1) {
					T temp = A[j];
					A[j] = A[k];
					A[k] = A[i];
					A[i] = temp;
					i++;
					j++;
					k++;
				}
				else if (A[j] == pivot1) {
					T temp = A[j];
					A[j] = A[k];
					A[k] = temp;
					j++;
					k++;
				}
				else if (A[j] > pivot1 && A[j] < pivot2) {
					j++;
				}
				else if (A[j] == pivot2) {
					T temp = A[j];
					A[j] = A[l - 1];
					A[l - 1] = temp;
					l--;
				}
				else if (A[j] > pivot2) {
					T temp = A[j];
					A[j] = A[l - 1];
					A[l - 1] = A[m - 1];
					A[m - 1] = temp;
					m--;
					l--;
				}
			}


			q1 = i;
			q2 = k;
			q3 = l;
			q4 = m;

		}
	}
};
