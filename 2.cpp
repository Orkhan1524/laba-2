#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    using byte = unsigned char;
    pair<byte, byte>positionA;
    pair<byte, byte>positionB;
    cin >> positionA.first >> positionA.second;
    cin >> positionB.first >> positionB.second;
    if ((positionA.first == positionB.first) or (positionA.second == positionB.second)) {
        cout << "1)" << "Ладья попедила";
    }
    else {
        cout << "1)" << "Ладья проиграла";
    }
    if (abs(positionB.first - positionA.first) == abs(positionB.second - positionA.second)) {
        cout << "2" << "Слон побеждает" << endl;
    }
    else {
        cout << "2" << "Слон проигрывает" << endl;
    }
    if (abs(positionA.first - positionB.first) <= 1 or abs(positionA.second - positionB.second) <= 1) {
        cout << "3)" << "Король побеждает" << endl;
    }
    else {
        cout << "3)" << "Король проигрывает" << endl;
    }
    if ((positionB.first == positionA.first or positionA.second == positionB.second) or (abs(positionB.first - positionA.first) == abs(positionB.second - positionA.second))) {
        cout << "4)" << "Ферзь побеждает" << endl;
    }
    else {
        cout << "4)" << "Ферзь проигрывает" << endl;
    }
    if ((positionB.second - positionA.second == 1) or ((positionB.second - positionA.second == 1) and (abs(positionB.first - positionA.first == 1)))) {
        cout << "5)" << "Пешка побеждает" << endl;
    }
    else {
        cout << "5)" << "Пешка проигрывает" << endl;
    }

}
