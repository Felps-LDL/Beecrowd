#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<int, pair<int,int>>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 600
 
using namespace std;

int N, M;

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        int cont = 0;
        cin >> M;

        priority_queue<int> fila;
        vector<int> alunos(M);

        for (int i = 0; i < M; i++) 
        {
            cin >> alunos[i];
            fila.push(alunos[i]);
        }

        for (int i = 0; i < M; i++)
        {
            if (fila.top() == alunos[i]) cont++;

            fila.pop();
        }

        cout << cont << endl;
    }

    return 0;
}
