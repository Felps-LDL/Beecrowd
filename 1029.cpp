// beecrowd 1029 - Fibonacci, Quantas Chamadas?
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

int N, X, cont = -1;

int fib (int x)
{
    cont++;

    if (x == 0) return 0;
    if (x == 1) return 1;

    return fib(x - 1) + fib(x - 2);
}

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        cin >> X;
        cont = -1;
        int ans = fib(X);

        cout << "fib(" << X << ") = " << cont << " calls = " << ans << endl;
    }

    return 0;
}
