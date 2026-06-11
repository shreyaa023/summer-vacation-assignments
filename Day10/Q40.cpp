#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print increasing characters
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j);
        }

        // Print decreasing characters
        for (int j = i - 1; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}
