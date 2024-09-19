#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int count = 0;  // To keep track of how many liked numbers we have found
        int num = 0;    // To iterate through all numbers

        // Loop until we find the k-th liked number
        while (count < k) {
            num++;
            // Directly check if the number is not divisible by 3 and does not end with 3
            if (num % 3 != 0 && num % 10 != 3) {
                count++;  // Increment count if this number is liked by Polycarp
            }
        }

        // Output the k-th liked number
        cout << num << endl;
    }

    return 0;
}

