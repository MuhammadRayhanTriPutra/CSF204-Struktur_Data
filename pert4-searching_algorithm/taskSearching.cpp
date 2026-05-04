#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    
    cout << "===== Binary Search =====" << endl;
    int sizeData, cari;
    cout << "Masukan batas data: "; cin >> sizeData;
    int data[sizeData];
    int f = 0, l = sizeData - 1, m, i = 0, flags = 0;
    
    // Pengisian array / data
    for (int i=0; i<sizeData; i++) {
        cout << "Masukan data ke-" << i << " : "; cin >> data[i];
    }
    
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
        i++;
    }

    if (flags == 1) {
        cout << "Data ditemukan! pada index: " << m << endl;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }

    return 0;
}