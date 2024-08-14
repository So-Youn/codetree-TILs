#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int jumsu, a;
    cin >> jumsu;

    a = (jumsu == 100)? 0 : 1;
    
    if (a==0)
        cout << "pass";
    else
        cout << "fail";
}