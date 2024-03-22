#include <iostream>
using namespace std;

void ss(int n);

int main() {
    int n;
    cin >> n;
    ss(n);
    return 0;
}

void ss(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            int p = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    p = 1;
                    break;
                }
            }
            if (p == 0) {
                cout << i << " ";
                c++;
            }
        }
    }
    if (c == 0) {
        cout << "No Answer";
    }
}