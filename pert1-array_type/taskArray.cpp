// Task : make the user be-able to assign the size and the value of the arrays
#include <iostream>
using namespace std;

void printArray(int arg[], int length) {
    for (int i=0; i<length; i++) {
        cout << arg[i]<< " ";
    }
}

int main() {
    // system("cls");
    
    int nilaiFirstArray;
    int nilaiSecArray;
    
    cout << "Masukan nilai first Array: ";
    cin >> nilaiFirstArray;
    
    cout << "Masukan nilai second Array: ";
    cin >> nilaiSecArray;
    cout << endl;
    
    int firstArray[nilaiFirstArray];
    int secArray[nilaiSecArray];
    
    for (int i=0; i<nilaiFirstArray; i++) {
        int smth;
        cout << "Masukan nilai firstArray" << "[" << i << "]: ";
        cin >> firstArray[i];
        
    }
    
    cout << endl;
    
    for (int i=0; i<nilaiSecArray; i++) {
        int smth1;
        cout << "Masukan nilai secondArray" << "[" << i << "]: ";
        cin >> secArray[i];
        
    }

    cout << endl;
    
    cout << "First Array: ";
    printArray(firstArray, nilaiFirstArray);
    
    cout << endl;
    
    cout << "Second Array: ";
    printArray(secArray, nilaiSecArray);

    return 0;
}

// The main script above is not edited pure from the time that the assignment / task given, and im sure there's a better way to do it