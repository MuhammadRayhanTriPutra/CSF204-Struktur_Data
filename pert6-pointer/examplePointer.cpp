#include <iostream>
using namespace std;

int main() {
    system("clear");

    // Pointer for Normal variable
    int x = 7;
    int *a;
    a = &x;

    cout << "Memory location of *a: " << a << endl;
    cout << "Memory location of x: " << &x << endl;
    cout << endl;
    cout << "Value of *a: " << *a << endl;
    cout << "Value of x: " << x << endl;
    cout << endl;
    
    // Pointer for Array
    int data[5] = {10, 13, 20, 30, 55}; // 1D Array
    int *d = data;
    
    cout << "Isi array: ";
    for (int i=0; i<5; i++) {
        cout << *(d+i) << " ";
    }
    cout << endl;
    
    int data2[3][2] {{1, 2}, {10, 20}, {340, 212}}; // 2D Array
    int (*d2)[2] = data2;

    cout << "Isi array: ";
    for (int i=0; i<3; i++) {
        for (int j=0; j<2; i++) {
            cout << "idk" << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}