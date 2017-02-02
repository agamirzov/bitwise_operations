#include <iostream>

using namespace std;

/*
Given two integers l and r, find the maximal value of a^b,
where a and b satisfy the following condition:
l <= a <= b <= r
*/

int max_xor(int l, int r) {
    int x = l ^ r, i = 0, m = 1;
    while (x > 0) {
        x >>= 1;
        ++i;
    }
    return (m << i) - 1;
}

int main() {
    int l, r, res;
    cout << "l = ";
    cin >> l;
    cout << "r = ";
    cin >> r;

    // Print result
    cout << "res = " << max_xor(l, r) << endl;
    return 0;
}
