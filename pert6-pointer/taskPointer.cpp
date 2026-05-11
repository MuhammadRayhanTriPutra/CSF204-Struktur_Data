#include <iostream>
using namespace std;

struct mahasiswa{
    int NIM;
    string NAMA;
    float IPK;
};

int main() {
    system("clear");

    int batas;
    cout << "Masukan batasan: "; cin >> batas;

    mahasiswa mhs[batas];
    mahasiswa *p = mhs;
    
    cout << "===== PENGISIAN DATA =====" << endl;
    for(int i=0; i<batas; i++) {
        cout << "Masukan data mahasiswa ke-" << i+1 << endl;
        cout << "NIM: "; cin >> mhs[i].NIM;
        cout << "NAMA: "; cin >> mhs[i].NAMA;
        cout << "IPK: "; cin >> mhs[i].IPK;
        cout << endl;
    }

    int index;
    cout << "Data berapa yang ingin di rubah (index): "; cin >> index; 
    (p+index)->NIM = 12345;
    (p+index)->NAMA = "Agus";
    (p+index)->IPK = 3.1;

    cout << "===== PEMAPARAN DATA =====" << endl;
    for (int i=0; i<batas; i++) {
        cout << "Data mahasiswa ke-" << i+1 << endl;
        cout << "NIM: " << mhs[i].NIM << endl;
        cout << "NAMA: " << mhs[i].NAMA << endl;
        cout << "IPK: " << mhs[i].IPK << endl;
        cout << endl;
    }

    return 0;
}