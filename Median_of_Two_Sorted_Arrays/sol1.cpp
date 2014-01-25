/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 25-01-2014
* Last Modified : Sat Jan 25 16:47:50 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
//give get the top kth number from A and B
int topK(int A[], int m, int B[], int n, int k){
	if (n < m) return topK(B, n, A, m, k); // make sure m < n
	if (m == 0) return B[k-1]; // if A is empty, just return the kth of B
	if (k == 1) return A[0] < B[0]?A[0]:B[0]; // if k == 1, just return the small one of A and B
	int diva = k/2, divb = k - diva;
	if(diva > m){ //if the half of K is biger than m 
		if(B[divb-1] > A[m-1]) return topK(A+m, 0, B, n, k-m);//all the values in A are before k
		if(B[divb-1] < A[m-1]) return topK(A, m, B+divb, n-divb, k-divb);//all the values before divb are before k
		else return topK(A+m, 0, B+divb, n-divb, k-divb-m);//all the values in A and before dive are before k
	}
	else{
		if(B[divb-1] > A[diva-1]) return topK(A+diva, m-diva, B, n, k-diva);//all the values before diva in A are before k
		if(B[divb-1] < A[diva-1]) return topK(A, m, B+divb, n-divb, k-divb);////all the values before divb in B are before k
		else return A[diva-1]; // if equal, we get the answer
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
	return 0;
}
