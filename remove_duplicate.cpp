/**
 * Given a sorted array, remove the duplicates in place such that > each element appear only once and return the new length.
 * Do not allocate extra space for another array, you must do this in place with constant memory.
 * For example, Given input array A = [1,1,2],
 * Your function should return length = 2, and A is now [1,2].
 */

#include <iostream>
using namespace std;

class Solution
{
public:
	int removeDuplicate(int A[], int n)
	{
		int i = 1;
		int j = 0;
		for (; i < n; ++i)
		{
			if (A[i] == A[j])
			{
				continue;
			}
			j++;
			A[j] = A[i];
		}
		return j+1;
	}
};

int print(int A[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}


int main()
{
	int A[]={1,2,2,3,3,3,4,4,5};
	Solution sol;
	int length = sol.removeDuplicate(A, 9);
	printf("The new length is %d\nand the new array is\n", length);
	print(A,9);

	return 0;
}
