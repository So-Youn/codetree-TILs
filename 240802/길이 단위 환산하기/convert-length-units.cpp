#include <iostream>
using namespace std;

int main() {
    double n;
    double ft = 30.48;
    cin >> n;
    cout << fixed;
    cout.precision(1);
    cout << ft*n;
    return 0;
}