#include <iostream>
using namespace std;

int fac(int n){ 
    if (n == 0 || n == 1) {
        cout << n << " = ";
        return 1;
    }
    cout << n << " x ";
    return n * fac(n-1);
}

int fib(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return fib(n-1) + fib(n-2);
}

int jumArr(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size-1] + jumArr(arr, size-1);
}

bool palindrome(string str, int left, int right) {
    if (left >= right) return true;
    if (str[left] != str[right]) return false;
    return palindrome(str, left+1, right-1);
}

int main() {
    system("clear");

    int pilihan;
    int sizeData;
    int data[sizeData];
    int angkaFac;
    int angkaFib;
    string kata;

    while (true) {
        cout << "===== MENU STUDI KASUS =====" << endl;
        cout << "[1] Faktorial" << endl;
        cout << "[2] Fibonacci" << endl;
        cout << "[3] Jumlah Array" << endl;
        cout << "[4] Palindrome" << endl;
        cout << "Pilih menu : "; cin >> pilihan;
    
        if (pilihan == 1) {
            cout << "Masukan angka yang ingin di faktorkan : "; cin >> angkaFac;
            cout << angkaFac << " adalah: " << fac(angkaFac) << endl;
        } else if (pilihan == 2) {
            cout << "Masukan urutan fibonacci keberapa : "; cin >> angkaFib;
            cout << angkaFib << " adalah: " << fib(angkaFib) << endl;
        } else if (pilihan == 3) {
            cout << "Masukan jumlah data: "; cin >> sizeData;
            for (int i = 0; i < sizeData; i++) {
                cout << "Masukan data ke-" << i+1 << " "; cin >> data[i];
            }
            cout << "Total nilai dari di data : " << jumArr(data, sizeData);
        } else if (pilihan == 4) {
            cout << "Masukan kata: "; cin >> kata;
            if (palindrome(kata, 0, kata.length()-1)) {
                cout << kata << " adalah palindrome" << endl;
            } else {
                cout << kata << " bukan palindrome" << endl;
            }
        }
        cout << endl;
    }

    return 0;
}