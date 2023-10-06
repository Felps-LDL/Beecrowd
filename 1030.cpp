// beecrowd 1030 - A Lenda de Flavious Josephus
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

int N, a, b, caso = 1;

int solution()
{
    // quantidade de saltos = quantidade de pessoas - 1
    // bool das pessoas mortas

    bool mortos[a + 1];
    int pos = b;
    if (pos > a) pos %= a;

    for (int i = 1; i <= a; i++) mortos[i] = false;
    mortos[pos] = true;

    // a - 2 casos
    for (int i = 0; i < a - 2; i++)
    {
        int cont = 0;

        while (cont != b)
        {
            pos++;
            if (pos > a) pos %= a;
            if (!mortos[pos]) cont++;
        }

        mortos[pos] = true;
    }

    for (int i = 1; i <= a; i++) if (!mortos[i]) return i;
}

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        cin >> a >> b;

        cout << "Case " << caso << ": " << solution() << endl;
        caso++;
    }
    
    return 0;
}
