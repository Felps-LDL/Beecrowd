// beecrowd 1081 - DFSr - Hierarquia de Profundidade
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

int N, V, E, caso = 1;
bool ok = false;

int grafos[MAXN][MAXN];
vector<bool> visitados(MAXN, false);

void limpa()
{
    for (int i = 0; i < V; i++) visitados[i] = false;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            grafos[i][j] = 0;
        }
    }
}

void DFS(int origem, int espacos)
{
    visitados[origem] = true;
    for (int i = 0; i < V; i++)
    {
        if (grafos[origem][i])
        {
            if (!visitados[i])
            {
                ok = true;
                for (int j = 0; j < espacos; j++) cout << ' ';

                cout << origem << '-' << i << " pathR(G," << i << ")\n";
                DFS(i, espacos + 2);
            }
            else
            {
                for (int j = 0; j < espacos; j++) cout << ' ';

                cout << origem << '-' << i << endl;
            }
        }
    }
}

int main()
{
    optimize;

    cin >> N;

    while (N--)
    {
        cin >> V >> E;

        for (int i = 0; i < E; i++)
        {
            int a, b;
            cin >> a >> b;

            grafos[a][b] = 1;
        }

        cout << "Caso " << caso << ":\n";

        for (int i = 0; i < V; i++)
        {
            if (!visitados[i])
            {
                DFS(i, 2);
                if (ok) cout << endl;
                ok = false;
            }
        }

        limpa();
        caso++;
    }

    return 0;
}
