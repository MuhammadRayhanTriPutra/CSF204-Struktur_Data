#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");

    int arr[5] = {124, 44, 81, 21, 1};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    bool ditemukan;
    int diindex;
    int cari;

    cin >> cari;
    
    for (int i=0; i<sizeArr; i++) {
        if (arr[i] == cari) {
            ditemukan = true;
            diindex = i;
            break;
        }
    }

    if (ditemukan) {
        cout << "Data yang anda cari ditemukan pada index: " << diindex << endl;
    } else {
        cout << "Data yang anda cari tidak ditemukan dalam database !" << endl;
    }

    
    return 0;
}