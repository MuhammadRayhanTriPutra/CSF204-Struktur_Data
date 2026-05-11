#include <iostream>
using namespace std;

struct mahasiswa{
    int NIM;
    string NAMA;
    float IPK;
};

mahasiswa mhs[3];
mahasiswa *p = mhs;

int main() {
    system("clear");
    
    cout << "===== PENGISIAN DATA =====" << endl;
    for(int i=0; i<3; i++) {
        cout << "Masukan data mahasiswa ke-" << i+1 << endl;
        cout << "NIM: "; cin >> mhs[i].NIM;
        cout << "NAMA: "; cin >> mhs[i].NAMA;
        cout << "IPK: "; cin >> mhs[i].IPK;
        cout << endl;
    }
    (p+0)->NIM = 12345;
    (p+0)->NAMA = "Agus";
    (p+0)->IPK = 3.3;

    (p+1)->NIM = 23456;
    (p+1)->NAMA = "Dadang";
    (p+1)->IPK = 4.0;

    cout << "===== PEMAPARAN DATA =====" << endl;
    for (int i=0; i<3; i++) {
        cout << "Data mahasiswa ke-" << i+1 << endl;
        cout << "NIM: " << mhs[i].NIM << endl;
        cout << "NAMA: " << mhs[i].NAMA << endl;
        cout << "IPK: " << mhs[i].IPK << endl;
        cout << endl;
    }

    // int var = 10;
    // int *ptr;
    // ptr = &var;

    // *ptr = 92;

    // cout << "Nilai variabel var: " << var << endl;
    // cout << "Alamat variabel var: " << &var << endl;
    // cout << endl;
    // cout << "Nilai variabel *ptr: " << *ptr << endl;
    // cout << "Alamat variabel ptr: " << &ptr << endl;
    // cout << "Alamat variabel yang disimpan oleh ptr " << ptr << endl;

    return 0;
}