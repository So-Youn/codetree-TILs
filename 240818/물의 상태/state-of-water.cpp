#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int tmp;
    cin >> tmp;

    if (tmp < 0)
        cout << "ice";
    else if (tmp >= 100)
        cout << "vapor";
    else
        cout << "water";
    return 0;
}