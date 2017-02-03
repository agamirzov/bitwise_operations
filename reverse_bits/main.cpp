#include <iostream>
#include <climits>

#define NUM_BITS sizeof(unsigned int) * CHAR_BIT

using namespace std;

void print_binary(unsigned int v) {
    string bits;
    for (unsigned int i = 0; i < NUM_BITS; i++) {
        bits.insert(0, to_string((v & 1) ? (1) : (0)));
        v >>= 1;
    }
    cout << bits << endl;
}

int main() {
    unsigned int n, r, num_bits;
    cout << "n = ";
    cin >> n;
    r = n;
    num_bits = NUM_BITS;

    // Print input binary representation
    cout << "initial = ";
    print_binary(n);

    while (n > 0) {
        r <<= 1;
        r |= n & 1; // Insert last bit of n at the end of r
        n >>= 1;    // Go to next bit of n
        num_bits--; // Adjusting final shift when n's highest bits are zero
    }

    // Final shift and print result
    r <<= num_bits;
    cout << "reverse = ";
    print_binary(r);
    return 0;
}
