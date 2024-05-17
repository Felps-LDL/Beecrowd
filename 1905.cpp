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

using namespace std;

int N, matriz[5][5];

void vai(int i, int j)
{
    if (i == 5 || j == 5 || i == -1 || j == -1) return;
    if (matriz[i][j] == 1) return;

    matriz[i][j] = 1;

    vai(i + 1, j);
    vai(i, j + 1);
    vai(i - 1, j);
    vai(i, j - 1);
}

int main()
{
    optimize;
    
    cin >> N;

    while(N--)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++) cin >> matriz[i][j];
        }

        vai(0, 0);

        if (matriz[4][4] == 1) cout << "COPS\n";
        else cout << "ROBBERS\n";
    }

    return 0;
}
