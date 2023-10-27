// beecrowd 1213 - Ones
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

long N, temp = 1, cont = 1;

int main()
{
    optimize;

    while (cin >> N) 
    {
        while (temp % N != 0)
        {
            temp = (temp * 10 + 1) % N;
            cont++;
        }

        cout << cont << endl;
        temp = 1;
        cont = 1;
    }

    return 0;
}
