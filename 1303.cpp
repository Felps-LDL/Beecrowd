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

int N, linhas, C, cont = 1;
int x, y, z, w;

int main()
{
    optimize;

    while(true)
    {
        cin >> N;
        if (N == 0) return 0;
        if (cont > 1) cout << endl;

        linhas = N * (N - 1) / 2;

        vector<int> gols_marcados(N + 1, 0), gols_tomados(N + 1, 0), pontos(N + 1, 0);

        priority_queue<pair<int, int>> fila_pontos;
        priority_queue<pair<double, pair<int, int>>> fila_av;
        priority_queue<pair<int, int>> fila_marcados;
        priority_queue<int, vector<int>, greater<int>> fila_indice;

        vector<int> v;

        for (int i = 0; i < linhas; i++)
        {
            cin >> x >> y >> z >> w;
            gols_marcados[x] += y;
            gols_marcados[z] += w;
            gols_tomados[x] += w;
            gols_tomados[z] += y;

            if (y == max(y, w))
            {
                pontos[x] += 2;
                pontos[z] += 1;
            }
            else
            {
                pontos[z] += 2;
                pontos[x] += 1;
            }
        }

        for (int i = 1; i <= N; i++) fila_pontos.push({pontos[i], i});

        while(!fila_pontos.empty())
        {
            int pontos = fila_pontos.top().f;
            if (gols_tomados[fila_pontos.top().s] == 0) gols_tomados[fila_pontos.top().s] = 1;
            fila_av.push({gols_marcados[fila_pontos.top().s] * 1.0 / gols_tomados[fila_pontos.top().s], {gols_marcados[fila_pontos.top().s], fila_pontos.top().s}});
            fila_pontos.pop();

            if (!fila_pontos.empty())
            {
                while(fila_pontos.top().f == pontos)
                {
                    if (gols_tomados[fila_pontos.top().s] == 0) gols_tomados[fila_pontos.top().s] = 1;
                    fila_av.push({gols_marcados[fila_pontos.top().s] * 1.0 / gols_tomados[fila_pontos.top().s], {gols_marcados[fila_pontos.top().s], fila_pontos.top().s}});
                    fila_pontos.pop();
                    if (fila_pontos.empty())break;
                }
            }

            while(!fila_av.empty())
            {
                double valor = fila_av.top().f;
                fila_marcados.push({fila_av.top().s.f, fila_av.top().s.s});
                fila_av.pop();

                if (!fila_av.empty())
                {
                    while(fila_av.top().f == valor)
                    {
                        fila_marcados.push({fila_av.top().s.f, fila_av.top().s.s});
                        fila_av.pop();
                        if (fila_av.empty())break;
                    }
                }

                while(!fila_marcados.empty())
                {
                    int gols = fila_marcados.top().f;
                    fila_indice.push(fila_marcados.top().s);
                    fila_marcados.pop();

                    if (!fila_marcados.empty())
                    {
                        while(fila_marcados.top().f == gols)
                        {
                            fila_indice.push(fila_marcados.top().s);
                            fila_marcados.pop();
                            if (fila_marcados.empty())break;
                        }
                    }

                    while(!fila_indice.empty()) 
                    {
                        v.push_back(fila_indice.top());
                        fila_indice.pop();
                    }
                }
            }
        }

        cout << "Instancia " << cont << endl;
        cont++;

        for (int i = 0; i < N - 1; i++) cout << v[i] << " ";
        cout << v[N - 1] << endl;
    }

    return 0;
}
