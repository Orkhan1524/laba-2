#include <iostream>
using namespace std;
int main()
{
    int a, i, b;
    cin >> a;
    for (i = 1;i < 10;i++) {
        b = i * a;
        cout << i << " x " << "N = " << b << endl;
    }
}
