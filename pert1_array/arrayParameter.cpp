// Implements Array as a Parameters

// Study case : print an array with a boundary of how many value should be printed
#include <iostream>
using namespace std;

void printArray(int arg[], int length) {
    for(int i=0; i<length; ++i) {
        cout << arg[i] << " ";
    }
}

int main() {
    // system("cls");

    int firstArray[] = {5, 10, 15};
    int secArray[] = {5, 10, 15, 20, 25};
    
    cout << "Value of First Array: ";
    printArray(firstArray, 3);
    cout << endl;
    cout << "Value of Second Array: ";
    printArray(secArray, 5);

    return 0;
}

// notes :
// Parameter = boundary that defines how a system process, or project operates