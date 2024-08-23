#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mid_score, fin_score;
    cin >> mid_score >> fin_score;

    if (mid_score >= 90)
        if (fin_score >= 95 && fin_score <= 100)
            cout << "100000";
        else if ( fin_score >= 90)
            cout << "50000";
        else
            cout << 0;
    else
        cout << 0;
    return 0;
}