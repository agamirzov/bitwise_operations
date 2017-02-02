#include <iostream>

using namespace std;

/*
Louise and Richard play a game. They have a counter set to 'N'.
Louise gets the first turn and the turns alternate thereafter.
In the game, they perform the following operations.

If 'N' is not a power of 2, reduce the counter by the largest power of 2 less than 'N'.
If 'N' is a power of 2, reduce the counter by half of 'N'.
The resultant value is the new 'N' which is again used for subsequent operations.
The game ends when the counter reduces to 1, i.e., 'N == 1',
and the last person to make a valid move wins.

Given 'N', your task is to find the winner of the game.
If they set counter to 1, Richard wins, because its Louise' turn and she cannot make a move.
*/

int main() {

    // Read number of rounds
    int T;
    cin >> T;

    // Game rounds
    for (int i = 0; i < T; ++i) {

        // Read counter value
        bool louise  = false;
        unsigned long long N;
        cin >> N;
        if (N == 1) {
            cout << "Richard " << endl;
            continue;
        }

        // Play a game
        while (N != 1) {

            // Initialize
            int ones = 0, shifts = 0;
            unsigned long long mask = 1;
            unsigned long long number = N;

            // Determine the turn
            louise  = (louise ) ? (false) : (true);

            // Check if power
            while (number != 0) {
                if (number & mask)
                    ones += 1;
                number >>= 1;
                shifts +=1;
            }

            // Reduce counter
            if (ones == 1) {
                N >>= 1;
            } else {
                mask <<= shifts - 1;
                N ^= mask;
            }
        }

        // Print result
        if (louise)
            cout << "Louise"  << endl;
        else
            cout << "Richard" << endl;
    }

    return 0;
}
