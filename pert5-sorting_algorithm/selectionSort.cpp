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

    // Selection sort algorithm
    for (int i=0; i<sizeData-1; i++) {
        cout << "Step ke-" << i+1 << ": ";
        for (int k=0; k<sizeData; k++) {
            cout << data[k] << ' ';
        }
        cout << endl;
        int minIndex = i;
        for (int j=i+1; j<sizeData; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = data[i];
            data[i] = data[minIndex];
            data[minIndex] = temp;
        }
    }

    cout << endl;

    cout << "[ SELECTION SORT ]" << endl;
    cout << "Tampilan data sesudah di urutkan: " << endl;
    for (int i=0; i<sizeData; i++) {
        cout << data[i] << ' ';
    }
    
    
    return 0;
}