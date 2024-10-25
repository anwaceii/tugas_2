#include <iostream>

using namespace std;

int main() {
    int firstValue = 10, secondValue = 8, temp;

    cout << "Sebelum ditukar: firstValue = " << firstValue << ", secondValue = " << secondValue << endl;

    // Menggunakan variabel sementara (temp)
    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "Setelah ditukar: firstValue = " << firstValue << ", secondValue = " << secondValue << endl;

    return 0;
}
