#include <iostream>

using namespace std;

int recursion(int x) {
    if(x == 0) {
        return 0;
    }
    else if(x == 1) {
        return 1;
    }
    else {
        int result = x * recursion(x - 1);
        return result;
    }
}

int main() {
    int number;
    
    cout << "Enter a number: " << endl;
    cin >> number;
    
    cout << number << "! is " << recursion(number) << endl;

  return 0;
}
