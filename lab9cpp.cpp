#include <iostream>
using namespace std;

void changeValue(int* ptr) {
    *ptr = 2024;
}

int main() {
    cout << "Enter number: ";
    int num;
    cin >> num;
    cout << "Number: " << num << endl;
    changeValue(&num);
    cout << "Number after changing: " << num << endl;
    return 0;
}
