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

int N, E, X, Y, H, K;
vector<pii> grafos[600];  
vector<bool> visitados(600);

void limpar_grafo()
{
  for (int i = 0; i < 600; i++) grafos[i].clear();
}

void limpar_visitados()
{
  for (int i = 0; i < 600; i++) visitados[i] = false;
}

void DFS(int u)
{
  visitados[u] = true;

  for (auto vizinho : grafos[u])
  {
    if (!visitados[vizinho.f]) DFS(vizinho.f);
  }
}

int Dijkstra(int u, int dest)
{
  vector<int> dist(N + 10, INF);
  vector<bool> visits(N + 10, false);

  dist[u] = 0;
  priority_queue<pii, vector<pii>, greater<pii>> fila;
  fila.push({0, u});

  while(!fila.empty())
  {
    int atual = fila.top().s, caminho = fila.top().f;
    fila.pop();

    if (visits[atual]) continue;

    visits[atual] = true;
    
    for (auto vizinho : grafos[atual])
    {
      int vertice_visitar = vizinho.f, custo = vizinho.s;

      if (!visits[vertice_visitar])
      {
        if (caminho + custo < dist[vertice_visitar])
        {
          dist[vertice_visitar] = caminho + custo;
          fila.push({caminho + custo, vertice_visitar});
        }
      }
    }
  }

  return dist[dest];
}

int main()
{
    optimize;

    while(true)
    { 
      cin >> N >> E;
      if (N == 0 && E == 0) return 0;
      
      limpar_grafo();
    
      for (int i = 0; i < E; i++)
      {
        cin >> X >> Y >> H;
        DFS(Y);

        if (visitados[X])
        {
          grafos[X].push_back({Y, 0});
          grafos[Y].push_back({X, 0});
        }
        else grafos[X].push_back({Y, H});

        
        limpar_visitados();
      }

      cin >> K;

      for (int i = 0; i < K; i++)
      {
        cin >> X >> Y;

        int sol = Dijkstra(X, Y);
        
        (sol != INF)? cout << sol << endl : cout << "Nao e possivel entregar a carta\n";
      }

      cout << endl;
    }
    return 0;
}
