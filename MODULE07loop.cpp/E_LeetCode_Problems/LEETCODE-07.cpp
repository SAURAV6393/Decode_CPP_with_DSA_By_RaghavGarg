/*
LEETCODE #7: Reverse Integer
PROBLEM: Reverse digits of a 32-bit signed integer
CONSTRAINTS: Handle integer overflow (return 0 if overflow)
RANGE: -2^31 to 2^31-1
COMPLEXITY: O(log n) time, O(1) space
EXAMPLE: 123→321, -123→-321, 0→0, 1534236469→0 (overflow)
*/
#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while (n != 0) {
            int digit = n % 10;                         // Extract last digit
            
            // Check overflow BEFORE multiplication
            // If rev > INT_MAX/10, next operation rev*10 will overflow
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0;                               // Overflow detected
            }
            rev = (rev * 10) + digit;                   // Append digit to reversed
            n /= 10;                                    // Remove processed digit
        }
        return rev;                                     // Return reversed number
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << sol.reverse(n) << endl;
    return 0;
}
