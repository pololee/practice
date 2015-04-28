/*
Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int> &digits) {
		vector<int> result(digits.size(), 0);
		int one = 9;
		int sum = 0;
		for(int i = digits.size() - 1; i >= 0; i--) {
			sum = one + digits[i];
			one = sum / 10;
			result[i] = sum % 10;
		}
		if (one > 0) {
			result.insert(digits.begin(), one);
		}

		return result;
	}
};

int convertToNumber(vector<int> digits) {
	int sum = 0;
	for (int i = 0; i < digits.size(); ++i) {
		sum += digits[i] * pow(10.0, digits.size() - i - 1);
    printf("sum is %d\n", sum);
	}
	return sum;
}

int main() {
	vector<int> digits = {1, 9, 9, 5};
	int number = convertToNumber(digits);
	printf("Before plus one, the number is %d\n", number);
	Solution sol;
	vector<int> result = sol.plusOne(digits);
	number = convertToNumber(result);
	printf("After plus one, the number is %d\n", number);
	return 0;
}
