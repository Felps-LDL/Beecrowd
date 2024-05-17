#include <bits/stdc++.h>
#define optimize                                                               \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int>
#define piii pair<pair<int, int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 1000

using namespace std;

int R, C, u, v, p;

vector<pii> grafos[MAXN];
vector<int> vertices;
vector<bool> visitados(MAXN, false);

int menor_caminho(int u)
{
    vertices.push_back(u);
    visitados[1] = true;
    int soma = 0;
  
    while(vertices.size() != R)
    {
        priority_queue<pii, vector<pii>, greater<pii>> fila;
      
        for (auto vertice : vertices)
        {
            for (auto vizinho : grafos[vertice]) 
            {
              if (!visitados[vizinho.f]) fila.push({vizinho.s, vizinho.f});
            }
        }

        vertices.push_back(fila.top().s);
        visitados[fila.top().s] = true;
        soma += fila.top().f;
    }

    return soma;
}

int main() 
{
    optimize;

    cin >> R >> C;
  
    while (C--) 
    {
        cin >> u >> v >> p;
  
        grafos[u].push_back({v, p});
        grafos[v].push_back({u, p});
    }
  
    cout << menor_caminho(1) << endl;
  
    return 0;
}
