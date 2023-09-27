// beecrowd 3053 - Jogo Dos Copos
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

int N;
bool matriz[3];
char inicial;

int main()
{
    optimize;

    matriz[0] = false;
    matriz[1] = false;
    matriz[2] = false;
    
    cin >> N >> inicial;

    matriz[inicial - 'A'] = true;

    while (N--)
    {
        int mov;
        cin >> mov;

        if (mov == 1)
        {
            bool temp = matriz[0];
            matriz[0] = matriz[1];
            matriz[1] = temp;
        }
        else if (mov == 2)
        {
            bool temp = matriz[1];
            matriz[1] = matriz[2];
            matriz[2] = temp;
        }
        else
        {
            bool temp = matriz[0];
            matriz[0] = matriz[2];
            matriz[2] = temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (matriz[i]) cout << char('A' + i) << endl;
    }

    return 0;
}
