#include <iostream>
using namespace std;

int main() {
    char A_s, B_s, C_s;
    int A_temp, B_temp, C_temp, result =0;

    cin >> A_s >> A_temp;
    cin >> B_s >> B_temp;
    cin >> C_s >> C_temp;

    if ( A_s = 'Y' && A_temp >= 37)
        result +=1;
    
    if ( B_s = 'Y' && B_temp >= 37)
        result +=1;
    
    if ( C_s = 'Y' && C_temp >= 37)
        result +=1;

    if (result >=2)
        cout << 'E';
    else
        cout << 'N';
    return 0;
}