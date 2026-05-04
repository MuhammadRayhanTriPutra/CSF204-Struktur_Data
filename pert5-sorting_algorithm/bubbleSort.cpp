#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");

    int data[10] = {81, 21, 32, 77, 13, 42, 33, 45, 9, 11};
    int sizeData = sizeof(data) / sizeof(data[0]);
    int temp;

    cout << "Tampilan data sebelum di urutkan: " << endl;
    for (int i=0; i<sizeData; i++) {
        cout << data[i] << ' ';
    }
    
    cout << endl << endl;
    
    // Bubble sort algorithm
    
    for (int i=0; i<sizeData; i++) {
        cout << "Step ke-" << i+1 << ": ";
        for (int k=0; k<sizeData; k++) {
            cout << data[k] << ' ';
        }
        cout << endl;
        for (int j=0; j<sizeData-i-1; j++) {
            if (data[j] > data[j+1]) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    
    cout << endl;
    
    cout << "[ BUBBLE SORTING ]" << endl;
    cout << "Tampilan data sesudah di urutkan: "<< endl;
    for (int i=0; i<sizeData; i++) {
        cout << data[i] << ' ';
    }
    
    return 0;
}