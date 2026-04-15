// Task: make an input system for Array 2D
#include<iostream>
using namespace std;

int main() {
    // system("cls");

    int arr[2][2]; // first [] = Row, second [] = Column

    for (int i=0; i<2; i++) { // This loop will ask you to input the COLUMNS of the FIRST ROW, and after that the COLUMNS of the SECOND ROW, and so on...
        for (int j=0; j<2; j++) {
            cout << "Masukan Nilai untuk Baris ke-" << i << ", Kolom ke-" << j << ": ";
            cin >> arr[i][j];
        }
    }

    cout << endl << endl;

    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << "Nilai Baris ke-" << i << ", Kolom " << j << ": " << arr[i][j] << endl;
        }
    }

    return 0;
}

// The main script above is created on a FREE TIME