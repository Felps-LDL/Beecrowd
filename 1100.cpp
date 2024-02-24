#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 20000
#define INTMAX 10000
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long

using namespace std;

string origem, destino;
int tabuleiro[8][8];

void seta()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            tabuleiro[i][j] = INTMAX;
        }
    }
}

int solution(int x0, int y0, int x1, int y1)
{
    // 8

    seta();

    queue<piii> fila;

    tabuleiro[y0][x0] = 0;

    fila.push({{y0, x0}, 0});

    while (!fila.empty())
    {
        int temp_x = fila.front().first.second, temp_y = fila.front().first.first;
        int custo = fila.front().second;
        fila.pop();

        if (temp_y - 2 >= 0 && temp_x - 1 >= 0)
        {
            if (custo + 1 < tabuleiro[temp_y - 2][temp_x - 1])
            {
                fila.push({{temp_y - 2, temp_x - 1}, custo + 1});
                tabuleiro[temp_y - 2][temp_x - 1] = custo + 1;
            }
        }

        if (temp_y - 1 >= 0 && temp_x - 2 >= 0)
        {
            if (custo + 1 < tabuleiro[temp_y - 1][temp_x - 2])
            {
                fila.push({{temp_y - 1, temp_x - 2}, custo + 1});
                tabuleiro[temp_y - 1][temp_x - 2] = custo + 1;
            }
        }

        if (temp_y + 1 < 8 && temp_x - 2 >= 0)
        {
            if (custo + 1 < tabuleiro[temp_y + 1][temp_x - 2])
            {
                fila.push({{temp_y + 1, temp_x - 2}, custo + 1});
                tabuleiro[temp_y + 1][temp_x - 2] = custo + 1;
            }
        }

        if (temp_y + 2 < 8 && temp_x - 1 >= 0)
        {
            if (custo + 1 < tabuleiro[temp_y + 2][temp_x - 1])
            {
                fila.push({{temp_y + 2, temp_x - 1}, custo + 1});
                tabuleiro[temp_y + 2][temp_x - 1] = custo + 1;
            }
        }

        if (temp_y + 2 < 8 && temp_x + 1 < 8)
        {
            if (custo + 1 < tabuleiro[temp_y + 2][temp_x + 1])
            {
                fila.push({{temp_y + 2, temp_x + 1}, custo + 1});
                tabuleiro[temp_y + 2][temp_x + 1] = custo + 1;
            }
        }

        if (temp_y + 1 < 8 && temp_x + 2 < 8)
        {
            if (custo + 1 < tabuleiro[temp_y + 1][temp_x + 2])
            {
                fila.push({{temp_y + 1, temp_x + 2}, custo + 1});
                tabuleiro[temp_y + 1][temp_x + 2] = custo + 1;
            }
        }

        if (temp_y - 1 >= 0 && temp_x + 2 < 8)
        {
            if (custo + 1 < tabuleiro[temp_y - 1][temp_x + 2])
            {
                fila.push({{temp_y - 1, temp_x + 2}, custo + 1});
                tabuleiro[temp_y - 1][temp_x + 2] = custo + 1;
            }
        }

        if (temp_y - 2 >= 0 && temp_x + 1 < 8)
        {
            if (custo + 1 < tabuleiro[temp_y - 2][temp_x + 1])
            {
                fila.push({{temp_y - 2, temp_x + 1}, custo + 1});
                tabuleiro[temp_y - 2][temp_x + 1] = custo + 1;
            }
        }
    }


    return tabuleiro[y1][x1];
}

int main()
{
    optimize;

    while (cin >> origem >> destino)
    {
        cout << "To get from " << origem << " to " << destino << " takes " << 
        solution(origem[0] - 'a', origem[1] - '0' - 1, destino[0] - 'a', destino[1] - '0' - 1) <<
        " knight moves.\n";
    }

    return 0;
}
