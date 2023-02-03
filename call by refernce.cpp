#include <iostream>
using namespace std;

inline void displayNum(int num) {
    cout << num << endl;
}

int main() {
    // first function call
    displayNum(3);

    // second function call
    displayNum(4);

    // third function call
    displayNum(99);

    return 0;
}