/*
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5, Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int> > generate(int numRows) {
		vector<vector<int> > values;
		values.resize(numRows);

		for (int i = 0; i < numRows; ++i) {
			values[i].resize(i+1);
			values[i][0] = 1;
			values[i][i] = 1;

			for (int j = 1; j < i; ++j) {
				values[i][j] = values[i-1][j-1] + values[i-1][j];
			}
		}

		return values;
	}
};

void print(vector<vector<int> > values) {
	int numRows = values.size();

	for (int i = 0; i < numRows; ++i) {
		int row_length = values[i].size();
		for (int j = 0; j < row_length; ++j) {
			printf("%d  ", values[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int numRows = 10;
	Solution sol;

	vector<vector<int> > values = sol.generate(numRows);
	print(values);
	return 0;
}