#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a non-negative integer: ";
    if (!(cin >> n)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    if (n < 0) {
        cerr << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    unsigned long long result = 1;
    for (long long i = 2; i <= n; ++i) {
        result *= static_cast<unsigned long long>(i);
    }

    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}
