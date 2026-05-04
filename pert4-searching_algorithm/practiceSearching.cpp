#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    
    int data[10] = {1,5,91,2,4,5,3,9,7,8};
    int sizeData = sizeof(data) / sizeof(data[0]);
    int cari, index = -1;

    cout << "===== Sequentials Search ===== " << endl;
    cout << "Masukan data yang ingin anda cari: "; cin >> cari;

    for (int i=0; i<sizeData; i++) {
        if (data[i] == cari) {
            index = i;
        }
    }

    if (index != -1) {
        cout << "Data yang anda cari berada pada index: " << index << endl;
    } else {
        cout << "Data yang anda cari tidak dapat ditemukan!" << endl;
    }
    
    return 0;
}