// Study case: input the struct data manually and then print it using for loop
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    char NIM[11];
    string nama;
    float IPK;
};

int main() {
    system("cls");

    Mahasiswa mhs[3];
    
    cout << "Isi Data Mahasiswa ke-1." << endl;
    cout << "Masukan NIM Mahasiswa  : "; cin >> mhs[0].NIM;
    cout << "Masukan Nama Mahasiswa : "; cin >> mhs[0].nama;
    cout << "Masukan IPK Mahasiswa  : "; cin >> mhs[0].IPK;
    cout << endl;
    cout << "Isi Data Mahasiswa ke-2." << endl;
    cout << "Masukan NIM Mahasiswa  : "; cin >> mhs[1].NIM;
    cout << "Masukan Nama Mahasiswa : "; cin >> mhs[1].nama;
    cout << "Masukan IPK Mahasiswa  : "; cin >> mhs[1].IPK;
    cout << endl;
    cout << "Isi Data Mahasiswa ke-3." << endl;
    cout << "Masukan NIM Mahasiswa  : "; cin >> mhs[2].NIM;
    cout << "Masukan Nama Mahasiswa : "; cin >> mhs[2].nama;
    cout << "Masukan IPK Mahasiswa  : "; cin >> mhs[2].IPK;

    cout << endl << endl;

    for (int i=0; i < 3; i++) {
        cout << "===== Data Mahasiswa ke-" << i+1 << " =====" << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "NIM    : " << mhs[i].NIM << endl;
        cout << "IPK    : " << mhs[i].IPK << endl;
        cout << endl;
    }

    return 0;
}