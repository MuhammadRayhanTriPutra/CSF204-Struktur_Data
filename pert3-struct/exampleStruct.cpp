// How to declare Struct and Inout & Show the value of them

// Study case: Inputing students data
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int NIM;
    char nama[25];
    int age;
};

int main() {
    system("cls");
    
    const int sizeStruct = 3;
    struct Mahasiswa mhs[sizeStruct];

    for (int i=0; i<sizeStruct; i++) {
        cout << "Masukan NIM Mahasiswa ke-" << i << "   : ";
        cin >> mhs[i].NIM;
        cout << "Masukan nama Mahasiswa ke-" << i << "  : ";
        cin >> mhs[i].nama;
        cout << "Masukan umur Mahasiswa ke-" << i << "  : ";
        cin >> mhs[i].age;
        cout << endl;
    }

    for (int i=0; i<sizeStruct; i++) {
        cout << "Mahasiswa ke-" << i << ": " << endl;
        cout << "   -NIM    : " << mhs[i].NIM << endl;
        cout << "   -NAMA   : " << mhs[i].nama << endl;
        cout << "   -UMUR   : " << mhs[i].age << endl;
        cout << endl;
    }
    
    return 0;
}