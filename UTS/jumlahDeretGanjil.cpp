#include <iostream>
using namespace std;

int jumlahGanjil(int x, int n) {
    // parameter x = variabel iterasi, jadi karena instruksi soal mulai output dari 1 hingga angka input (n), maka saya membuat fungsi rekrusif ini meminta 2 parameter.

    // parameter n = variabel angka akhir deret GANJIL / variabel batas, di instruksi soal variabel n adalah angka terakhir dari deret ganjil.
    if (n == 1) { // Jika user menginput n = 1, langsung saja output dan return hasil yaitu 1.
        cout << x << " = ";
        return 1;
    } else if (x == n) { // Ini adalah base / stop condition, jika variabel iterasi (x) sudah mencapai angka inputan (n), maka fungsi rekursif berhenti, dan lanjut mengkalkulasi.
        cout << x << " = ";
        return x;
    }
    cout << x << " + "; // outputan dari 1 hingga (n).
    return x + jumlahGanjil(x+2, n); // karena kita menghitung deret ganjil, maka variabel iterasi (x) akan bertambah 2 hingga base / stop condition, variabel inputan (n) tidak berubah karena dia adalah batas untuk base / stop condition.
}

int main() {
    system("clear");
    
    int batas, x=1; // variabel batas dan variabel iterasi.
    cout << "===== MENGHITUNG DERET GANJIL =====" << endl;
    cout << "Masukan batas akhir deret GANJIL: "; cin >> batas; // meminta user untuk memasukan angka ganjil.

    if (batas % 2 == 1) { // Jika angka yang dimasukan user adalah ganjil maka pemanggilan fungsi reksursif, jika tidak, maka program akan meminta user untuk "Masukan angka GANJIL".
        cout << jumlahGanjil(x, batas); // pemanggilan fungsi rekursif.
    } else {
        cout << "Masukan angka GANJIL !" << endl;
    }
    
    cout << endl;
    return 0;
}