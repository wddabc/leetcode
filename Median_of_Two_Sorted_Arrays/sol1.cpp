/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : Median_of_Two_Sorted_Arrays.cpp

* Purpose :

* Creation Date : 16-12-2013

* Last Modified : Mon Dec 16 23:57:42 2013

* Created By :  

_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
int topK(int A[], int m, int B[], int n, int k){
	if (n < m) return topK(B, n, A, m, k);
	if (m == 0) return B[k-1];
	if (k == 1) return A[0] < B[0]?A[0]:B[0];
	int diva = k/2, divb = k - diva;
	if(diva > m){
		if(B[divb-1] > A[m-1]) return topK(A+m, 0, B, n, k-m);
		if(B[divb-1] < A[m-1]) return topK(A, m, B+divb, n-divb, k-divb);
		else return topK(A+m, 0, B+divb, n-divb, k-divb-m);
	}
	else{
		if(B[divb-1] > A[diva-1]) return topK(A+diva, m-diva, B, n, k-diva);
		if(B[divb-1] < A[diva-1]) return topK(A, m, B+divb, n-divb, k-divb);
		else return A[diva-1];
	}
	return 0;
}
double findMedianSortedArrays(int A[], int m, int B[], int n) {
	int total = m+n;
	if (total%2)
	  return (double)topK(A, m, B, n, (total+1)/2);
	else
	{
	  return (double)(topK(A, m, B, n, total/2)+topK(A, m, B, n, total/2+1))/2;
	}
}
int main(int argc, const char* argv[])
{
	//int A[] = {1,1,2}, m = 3,  B[] = {1,2}, n = 2;
	int A[] = {100000}, m = 1,  B[] = {100001}, n = 1;
	cout << findMedianSortedArrays(A, m, B, n) << endl;
}
