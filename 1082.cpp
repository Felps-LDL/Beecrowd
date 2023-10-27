// beecrowd 1082 - Componentes Conexos
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

int N, V, E, caso = 1, conectados = 0;

vector<bool> visitados(30, false);
int grafos[30][30];
priority_queue<int, vector<int>, greater<int>> fila;

void limpa()
{
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++) grafos[i][j] = 0;
        visitados[i] = false;
    }
}

void busca(int origem)
{
    visitados[origem] = true;

    for (int i = 0; i < 30; i++)
    {
        if (grafos[origem][i] && !visitados[i])
        {
            fila.push(i);
            busca(i);
        }
    }
}

void solution()
{
    for (int i = 0; i < V; i++)
    {
        if (!visitados[i])
        {
            busca(i);
            fila.push(i);

            while(!fila.empty())
            {
                cout << char(fila.top() + 97) << ',';
                fila.pop(); 
            }

            conectados++;
            cout << endl;
        }
    }

    limpa();
}
int main()
{
    optimize;

    cin >> N;

    while(N--)
    {
        cin >> V >> E;

        for (int i = 0; i < E; i++)
        {
            char u, v;
            cin >> u >> v;

            grafos[u - 97][v - 97] = 1;
            grafos[v - 97][u - 97] = 1;
        }

        cout << "Case #" << caso << ":\n";

        solution();
        cout << conectados << " connected components\n\n";
        caso++;
        conectados = 0;
    }

    return 0;
}
