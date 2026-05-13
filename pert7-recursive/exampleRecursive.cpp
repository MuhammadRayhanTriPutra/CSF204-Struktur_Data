#include <iostream>
using namespace std;

int fac(int n) {
    if (n <= 1) {
        return 1;
    }
    return n*fac(n-1);
}

int main() {
    system("clear");

    int angka = 5;
    cout << angka << "! = " << fac(5) << endl;
    
    return 0;
}
