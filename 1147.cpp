#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 100
 
using namespace std;

int cl, cc, cont = 0;
string temp;
bool tabuleiro[20][20];

void seta()
{
    for (int i = 0; i <= 19; i++)
    {
        for (int j = 0; j <= 19; j++) tabuleiro[i][j] = true;
    }

    for (int i = 4; i <= 11; i++)
    {
        for (int j = 4; j <= 11; j++) tabuleiro[i][j] = false;
    }
}

void marca(int pos1, int pos2)
{
    tabuleiro[pos1 + 1][pos2 - 1] = true;
    tabuleiro[pos1 + 1][pos2 + 1] = true;
}

int moves()
{
    int movs = 0;

    if (!tabuleiro[cl - 2][cc - 1]) movs++;
    if (!tabuleiro[cl - 2][cc + 1]) movs++;
    if (!tabuleiro[cl - 1][cc + 2]) movs++;
    if (!tabuleiro[cl + 1][cc + 2]) movs++;
    if (!tabuleiro[cl + 2][cc - 1]) movs++;
    if (!tabuleiro[cl + 2][cc + 1]) movs++;
    if (!tabuleiro[cl + 1][cc - 2]) movs++;
    if (!tabuleiro[cl - 1][cc - 2]) movs++;

    return movs;
}

int main()
{
    optimize;
 
    while (1)
    {
        cont++;
        seta();
        cin >> temp;

        if (temp == "0") return 0;

        cl = 7 - (temp[0] - '1') + 4;
        cc = temp[1] - 'a' + 4;

        for (int i = 0; i < 8; i++)
        {
            cin >> temp;
            marca(7 - (temp[0] - '1') + 4, temp[1] - 'a' + 4);
        }

        cout << "Caso de Teste #" << cont << ": " << moves() << " movimento(s)." << endl;
    }

    return 0;
}
