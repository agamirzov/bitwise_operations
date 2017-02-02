#include <iostream>

using namespace std;

/*
Given an integer n count how many x satisfy the following conditions:
0 <= x <= n
n + x = n ^ x
*/

int main() {
    long n;
    cout << "n = ";
    cin >> n;

    /*
    The expression n + x = n ^ x holds iff set bits of x and n are not overlapping i.e.
    when xor operation does not flip bits of individual integers. Thus, all possible values of x
    satisfying the initial condition fit in unset bits of n.
    */

    // Count the number of unset bits of n
    int unset_bits = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            ++unset_bits;
        }
        n >>= 1;
    }

    // Within unset bits of n there are 2^unset_bits combinations i.e. values of x
    cout << "num_x = " << (1L << unset_bits) << endl;
    return 0;
}
