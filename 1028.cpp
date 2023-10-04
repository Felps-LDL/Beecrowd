// beecrowd 1028 - Figurinhas
// Felipe Lages de Lima
// Felps-LDL
 
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 10100
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
 
using namespace std;
 
int N, F1, F2;
 
int mdc(int num1, int num2)
{
    int resto = -1;
    while(resto != 0)
    {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    
    return num1;
}
 
int main()
{
    optimize;
 
    cin >> N;
 
    while (N--)
    {
        cin >> F1 >> F2;
 
        cout << mdc(F1,F2) << endl;
    }
    
 
    return 0;
}
