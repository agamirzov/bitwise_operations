#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

/*
Given an integer 'n' count how many 'x' satisfy the following conditions:
0 <= x <= n
n + x = n ^ x
*/

int main() {
    long n;
    int num_zeros = 0;
    cin >> n;
    while (n > 0) {
        if ((n & 1) == 0) {
            ++num_zeros;
        }
        n >>= 1;
    }
    cout << "num_zeros = " << num_zeros << endl;
    cout << "num_x = " << (1L << num_zeros) << endl;
    return 0;
}
