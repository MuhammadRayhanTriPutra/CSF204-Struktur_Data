// Task : make a for loop on inputing struct data and output
#include <iostream>
#include <string>
using namespace std;

struct Penduduk {
    char NIK[16];
    char Nama[50];
    string Alamat;
    string noHP;
    int umur;
};

int main() {
    // system("cls");
    
    int size;
    cout << "Masukan Batas Data: "; cin >> size;
    Penduduk pdd[size];

    for (int i=0; i < size; i++) {
        cout << "===== Isi Data Penduduk ke-" << i+1 << " =====" << endl;
        cout << "Nama   : "; cin >> pdd[i].Nama;
        cout << "NIK    : "; cin >> pdd[i].NIK;
        cout << "Alamat : "; cin >> pdd[i].Alamat;
        cout << "noHP   : "; cin >> pdd[i].noHP;
        cout << "Umur   : "; cin >> pdd[i].umur;
        cout << endl;
    }

    for (int i=0; i < size; i++) {
        cout << "===== Isi Data Penduduk ke-" << i+1 << " =====" << endl;
        cout << "Nama    : " << pdd[i].Nama << endl;
        cout << "NIK     : " << pdd[i].NIK << endl;
        cout << "Alamat  : " << pdd[i].Alamat << endl;
        cout << "noHP    : " <<  pdd[i].noHP << endl;
        cout << "Umur    : " <<  pdd[i].umur << endl;
        cout << endl;
    }
    
    return 0;
}

// The main script above is not edited pure from the time that the assignment / task given, and im sure there's a better way to do it