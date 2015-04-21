/*
	Follow up for "Remove Duplicates": What if duplicates are allowed at most twice?

	For example, Given sorted array A = [1,1,1,2,2,3],

	Your function should return length = 5, and A is now [1,1,2,2,3].
 */

#include <iostream>
using namespace std;

class Solution{
public:
	int remove_duplication_2(int A[], int n){
		int j = 0;
		int occur = 1;
		for (int i = 1; i < n; ++i)
		{
			if (A[j] == A[i])
			{
				if (occur == 2)
				{
					continue;
				}
				occur++;
			}
			else
			{
				occur = 1;
			}
			j++;
			A[j] = A[i];
		}

		return j+1;
	}
};

void print(int A[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

int main()
{
	int A[] = {1,1,1,2,2,2,3,3,3,3,4,5};
	Solution sol;
	int length = sol.remove_duplication_2(A, 12);
	printf("The new length is %d\n", length);
	printf("The new array is \n");
	print(A, 12);
	return 0;
}