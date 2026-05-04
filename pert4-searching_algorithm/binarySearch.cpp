#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    
    int data[10] = {10,20,30,40,50,60,77,80,90,100};
    int sizeData = sizeof(data) / sizeof(data[0]), cari;
    int f = 0, l = sizeData - 1, m, i, flags = 0;
    
    cout << "===== Binary Search =====" << endl;
    cout << "Masukan data yang di ingin cari: "; cin >> cari;

    // Binary Algorithm
    while (f <= l && flags == 0) {
        m = (f+l) / 2;
        if (data[m] == cari) {
            flags = 1;
        } else {
            if (cari <= data[m]) {
                l = m-1;
            } else {
                f = m+1;
            }
        }
    }

    if (flags == 1) {
        cout << "Data ditemukan!" << endl;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }

    return 0;
}