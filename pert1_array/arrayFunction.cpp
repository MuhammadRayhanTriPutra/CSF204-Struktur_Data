// Implements Array as a Function

// Study case : the average count of an array
#include <iostream>
using namespace std;

const int sizes = 3;
double Average(int nums[sizes]) { // int nums = pointer = variables that stores the memory address of another variable, rather than a direct value (basically like a placeholder ?!)

    double average = 0;
    for (int i=0; i<sizes; ++i) {
        average += nums[i]; // assign the value of average to nums-i overtime
    }

    return average/sizes;
}

int main() {
    // system("cls");

    int n[3];
    n[0] = 10;
    n[1] = 20;
    n[2] = 30;

    cout << "The average of: " << Average(n) << endl;

    return 0;
}