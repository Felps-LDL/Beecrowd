// beecrowd 3096 - Overflow
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
 
ll N;
 
ll digitos()
{
    // Fórmula de Kamenetsky
    if (N == 1) return 1;
    return floor((N * log10(N / M_E) + log10(2 * M_PI * N) / 2.0)) + 1;
}
 
int main()
{
    optimize;
 
    cin >> N;
 
    cout << digitos() << endl;
 
    return 0;
}
