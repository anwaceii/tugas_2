#include <iostream>
using namespace std;

int main() {
    int firstValue = 10;
    int secondValue = 8;

    // Menukar nilai tanpa variabel tambahan menggunakan operasi XOR
    firstValue = firstValue ^ secondValue;
    secondValue = firstValue ^ secondValue;
    firstValue = firstValue ^ secondValue;

    cout << "Setelah ditukar:" << endl;
    cout << "firstValue = " << firstValue << endl;
    cout << "secondValue = " << secondValue << endl;

    return 0;
}
