#include <iostream>

using namespace std;

int main() {
    int totalBebek = 20, jumlahTeman = 13;
    int bebekPerTeman, sisaBebek;

    bebekPerTeman = totalBebek / jumlahTeman;
    sisaBebek = totalBebek % jumlahTeman;

    cout << "Setiap teman mendapat " << bebekPerTeman<< " ekor bebek." << endl;
    cout << "Sisa bebek yang tidak terbagi adalah " << sisaBebek << " ekor." << endl;

    return 0;
}
