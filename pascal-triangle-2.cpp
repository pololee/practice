
/*
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3, Return [1,3,3,1].
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> generate(int rowIndex) {
    vector<int> values;
    values.resize(rowIndex+1, 1);

    for (int i = 0; i < rowIndex + 1; ++i) {
      for (int j = i - 1; j > 0; --j) {
        values[j] = values[j] + values[j-1];
      }
    }

    return values;
  }
};

void print(vector<int> &values) {
  for (int i = 0; i < values.size(); ++i) {
    printf("%d  ", values[i]);
  }
  printf("\n");
}

int main() {
  int rowIndex = 5;
  Solution sol;
  vector<int> values = sol.generate(rowIndex);
  print(values);

  return 0;
}