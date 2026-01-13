#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    cout << n;
    string str = (n % 2) ? " is odd" : " is even";
    cout << str;
    
    return 0;
}