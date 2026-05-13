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

    int data[] = {1, 3, 7, 29, 2};
    int jumlah = sizeof(data) / sizeof(data[0]);
    int angka = 5;
    string kata = "katak";

    // Faktorial
    cout << endl;
    cout << "Hasil Faktorial: " << angka << " adalah " << fac(angka) << endl;

    // Fibonacci
    cout << endl;
    cout << "Hasil fibonacci: " << fib(4) << endl;

    // Jumlah Array
    cout << endl;
    cout << "Total nilai dari array data: " << jumArr(data, jumlah) << endl;
    
    // Palindrome
    if (palindrome(kata, 0, kata.length()-1)) {
        cout << endl;
        cout << kata << " Adalah palindrome" << endl;
    } else {
        cout << endl;
        cout << kata << " Bukan palindrome" << endl;
    }

    return 0;
}