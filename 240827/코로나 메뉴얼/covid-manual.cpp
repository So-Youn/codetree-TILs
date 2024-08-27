#include <iostream>
using namespace std;

int main() {
    char A_stat, B_stat, C_stat;
    int A_temp, B_temp, C_temp;

    cin >> A_stat >> A_temp;
    cin >> B_stat >> B_temp;
    cin >> C_stat >> C_temp;

    if (A_stat =='Y' && A_temp >= 37)
        if ((B_stat == 'Y' && B_temp >=37) || (C_stat =='Y' && C_temp >=37))
            cout << "E";
        else 
            cout << "N";
    else
        if ((B_stat == 'Y' && B_temp >=37) && (C_stat =='Y' && C_temp >=37))
            cout << "E";
        else
            cout << "N";


    return 0;
}