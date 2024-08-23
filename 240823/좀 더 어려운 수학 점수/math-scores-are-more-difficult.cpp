#include <iostream>
using namespace std;

int main() {
    int A_en, A_ma, B_en, B_ma;
    cin >> A_ma >> A_en >> B_ma >> B_en;

    if (A_ma > B_ma)
        cout << "A";
    else if (B_ma > A_ma)
        cout << "B";
    else if (A_ma == B_ma && (B_en > A_en))
        cout << "B";
    else if (A_ma == B_ma && (A_en > B_en))
        cout << "A";

    return 0;
}