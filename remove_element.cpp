/*
	Given an array and a value, remove all instances of that value in place and return the new length.

	The order of elements can be changed. It doesn't matter what you leave beyond the new length.

	Hint: double index
 */

#include <iostream>
using namespace std;

class Solution
{
public:
	int removeElement(int A[], int n, int element)
	{
		int i=0;
		int j=0;
		for (; i < n; ++i)
		{
			if (A[i] == element)
			{
				continue;
			}

			A[j] = A[i];
			j++;
		}
		return j;
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
	int A[] = {1, 2, 3, 2, 2, 3, 2, 4, 5};
	Solution sol;
	int length = sol.removeElement(A, 9, 2);
	printf("The new length is %d \n", length);
	print(A, 9);

	return 0;
}