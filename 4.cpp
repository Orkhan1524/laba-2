#include <iostream>
using namespace std;
int main()
{
    int a, y = 1,p,b;
    long long k = 1,w = 1,i = 1;
    cin >> a >> b;
    for (p = 8;p < 16;p++) {
        y = y * p;
    }
    cout << "1)" << y << endl;
    int a1 = a;
    while (a <= 20) {
        k = k * a;
        a = a + 1;
    }
    cout << "2)" << k << endl;
    for (p = 1;p <= b;p++) {
        w = w * p;
    }
    cout << "3)" << w << endl;
    for (k = a1;k <= b;k++) {
        i = i * k;
    }
    cout << "4)" << i;
}
