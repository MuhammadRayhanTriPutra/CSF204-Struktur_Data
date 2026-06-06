#include <iostream>
using namespace std;

int pangkat(int angka, int pangkatnya){
    if (pangkatnya == 0) { // jika angka dengan pangkatnya 0, maka return 1, semua angka di pangkatkan dengan 0 adalah 1
        return 1;
    }
    if (pangkatnya == 1) { // base / stop condition
        cout << angka << " = ";
        return angka;
    }
    cout << angka << " x "; // output step-step perpangkatan
    return angka * pangkat(angka, pangkatnya-1); // fungsi rekursif untuk perhitungan pangkat, manggil hingga base / stop condition.
}

int main() {
    system("clear");
    
    int batas; // variabel batas untuk size array (berapa kali program akan berjalan)

    cout << "===== PANGKAT DENGAN ARRAY DINAMIS =====" << endl;
    cout << "Masukan batas array : "; cin >> batas; // user diminta untuk memasukan batas
    cout << endl;

    // array dinamis (batas / sizenya di masukan sendiri oleh user)
    int angka[batas];
    int pangkatnya[batas];

    for (int i=0;i<batas;i++) { // perulangan untuk input data angka dan pangkat ke dalam array
       cout << "Masukan angka ke-" << i+1 << " : "; cin >> angka[i];
       cout << "Masukan pangkatnya ke-" << i+1 << " : "; cin >> pangkatnya[i];
       cout << endl;
    }
    for (int i=0;i<batas;i++) { // perulangan untuk pemanggilan fungsi rekursif (kalkulasi), dan untuk melihat isi array
        if (pangkatnya[i] < 0) { // jika pangkatnya dibawah 0, yaitu -1 hingga -n, maka program akan memberitahu user untuk tidak boleh memasukan pangkat minus
            cout << "Pangkat tidak boleh minus (-)" << endl;
        } else {
            cout << angka[i] << "^" << pangkatnya[i] << " : " << pangkat(angka[i], pangkatnya[i]) << endl;
        }
    }
    
    cout << endl;
    return 0;
}