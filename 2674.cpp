// beecrowd 2674 - Super Primos: Ativar!
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

long N;

bool verifica_primo(long num)
{
    double raiz = sqrt(num);

    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= raiz; i++)
    {
        if (num % i == 0) return false;
    }

    return true;
}

int main()
{
    optimize;

    while (cin >> N)
    {
        bool primo = verifica_primo(N);

        if (!primo)
        {
            cout << "Nada\n";
            continue;
        }

        string numero = to_string(N);
        bool super_primo = true;

        for (char digito : numero)
        {
            if (!(verifica_primo(digito - '0')))
            {
                cout << "Primo\n";
                super_primo = false;
                break;
            }
        }

        if (super_primo) cout << "Super\n";
    }

    return 0;
}
