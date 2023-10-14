// beecrowd 1089 - Loop Musical
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

int N, loop[MAXN];

int picos()
{
    if (N == 2) return 2;

    int picos = 0;

    for (int i = 1; i < N - 1; i++)
    {
        if (loop[i + 1] > loop[i])
        {
            if (loop[i] < loop[i - 1]) picos++;
        }
        else
        {
            if (loop[i] > loop[i - 1]) picos++;
        }
    }

    if (loop[0] > loop[N - 1])
    {
        if (loop[N - 1] < loop[N - 2]) picos++;
    }
    else
    {
        if (loop[N - 1] > loop[N - 2]) picos++;
    }

    if (loop[1] > loop[0])
    {
        if (loop[0] < loop[N - 1]) picos++;
    }
    else
    {
        if (loop[0] > loop[N - 1]) picos++;
    }

    return picos;
}

int main()
{
    optimize;

    while (true)
    {
        cin >> N;

        if (!N) return 0;

        for (int i = 0; i < N; i++) cin >> loop[i];

        cout << picos() << endl;
    }

    return 0;
}
