#include <iostream>
#include <string>
using namespace std;

int main() {
    int i, a, b, c, d, e;
    cin >> i;
    e = i % 10;
    d = i % 100 / 10;
    c = i % 1000 / 100;
    b = i % 10000 / 1000;
    a = i / 10000;

    if (d == 0&&c==0&&b==0&&a==0) {
        cout << e<<endl;
        cout<<1;
    } else if (c == 0&&b==0&&a==0) {
        cout << d << " " << e<<endl;
        cout<<2;
    } else if (b == 0&&a==0) {
        cout << c << " " << d << " " << e<<endl;
        cout<<3;
    } else if (a == 0) {
        cout << b << " " << c << " " << d << " " << e<<endl;
        cout<<4;
    } else {
        cout << a << " " << b << " " << c << " " << d << " " << e<<endl;
        cout<<5;
    }

    return 0;
}