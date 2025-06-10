#include <iostream>
using namespace std;

int main() {
    int a=1, b=2, c=3;

    int largest;

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}