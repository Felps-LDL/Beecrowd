// beecrowd 2170 - Juros do Projeto
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

int qtd = 1;
double X, Y;

int main()
{
    optimize;

    while (cin >> X >> Y)
    {
        cout << fixed << setprecision(2);
        cout << "Projeto " << qtd << ":\n";
        cout << "Percentual dos juros da aplicacao: " << 100 * ((Y - X) / X) << " %\n\n";

        qtd++;
    }

    return 0;
}
