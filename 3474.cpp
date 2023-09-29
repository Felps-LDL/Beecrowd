// beecrowd 3474 - Boa divisão
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
#define ll long long

using namespace std;

double a, b;

int main()
{
    optimize;

    cin >> a >> b;

    cout << fixed << setprecision(2);
    cout << a / b << endl;

    return 0;
}
