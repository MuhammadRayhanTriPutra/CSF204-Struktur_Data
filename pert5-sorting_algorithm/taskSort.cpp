#include <iostream>
#include <string>
using namespace std;

int main() {
    system("clear");

    int sizeData;
    cout << "Masukan berapa banyak data: "; cin >> sizeData;
    int data[sizeData];
    for (int i=0; i<sizeData; i++) {
        cout << "Masukan data ke-" << i+1 << ": "; cin >> data[i];
    }
    cout << endl;
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