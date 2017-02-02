#include <iostream>

using namespace std;

/*
Given two integers l and r, find the maximal value of a^b,
where a and b satisfy the following condition:
l <= a <= b <= r
*/

int main() {
    int l, r, res;

    // Read interval
    cout << "l = ";
    cin >> l;
    cout << "r = ";
    cin >> r;

    /*
    Find the xor difference to determine the maximal
    power of 2 among all the numbers in the interval
    */
    int x = l ^ r;

    // Count the number of bits to the maximal power of 2
    int count = 0;
    while (x > 0) {
        x >>= 1;
        ++count;
    }

    /*
    The result is a maximal number that is defined by
    the maximal power of 2.
    */
    cout << "res = " << (1 << count) - 1 << endl;
    return 0;
}
