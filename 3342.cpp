// beecrowd 3342 - Keanu
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

int n, brancas, pretas;

void casas()
{
    // se for par é só pegar metade do tabuleiro pra cada
    // se for ímpar metade do tabueleiro + 1 é branca
    pretas = n * n / 2;

    if (n % 2 == 0) brancas = n * n / 2; 
    else brancas = n * n / 2 + 1;
}

int main()
{
    optimize;

    cin >> n;

    casas();

    cout << brancas << " casas brancas e " << pretas << " casas pretas\n"; 
    
    return 0;
}
