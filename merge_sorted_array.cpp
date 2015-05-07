/*
Given two sorted integer arrays A and B, merge B into A as one sorted array.

Note: You may assume that A has enough space
(size that is greater or equal to m + n) to hold additional elements from B.
The number of elements initialized in A and B are m and n respectively.
 */

#include <iostream>
using namespace std;

class Solution{
public:
  void merge(int A[], int m, int B[], int n){
    if (n == 0) {
      printf("Array B is empty\n");
      return;
    }

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    for(; k >= 0; k--) {
      if( i < 0 || j < 0) break;
      if( B[j] >= A[i]) {
        A[k] = B[j];
        j--;
      }
      else {
        A[k] = A[i];
        i--;
      }
    }

    if( j >= 0 ) {
      for(; j >= 0 && k >= 0; j--) {
        A[k] = B[j];
        k--;
      }
    }
  }
};

int print(int A[], int m) {
  for (int i = 0; i < m; ++i) {
    printf("%d ", A[i]);
  }
  printf("\n");
  return 0;
}

int main(){
  int A[] = {1, 3, 4, 7, 0, 0, 0, 0};
  int B[] = {1, 4, 8, 9};
  Solution sol;
  sol.merge(A, 4, B, 4);
  print(A, 8);
  return 0;
}