#include <iostream>
using namespace std;

int main() {
    int n;
    int sum1 = 0;
    int sum2 = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        cout << "Is a positive number" << endl;
        for (int i = 0; i <= n; i++) {
            sum1 += i;
        }
        cout << "The sum of positive numbers: " << sum1 << endl;
    } else if (n < 0) {
        cout << "Is a negative number" << endl;
        for (int j = 0; j <= -n; j++) {
            sum2 -= j;
        }
        cout << "The sum of negative numbers: " << sum2 << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
