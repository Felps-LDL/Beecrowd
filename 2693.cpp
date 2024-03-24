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

int N, C;
string A;
char S;

int main()
{
    optimize;

    while(cin >> N)
    {
        priority_queue<pair<int, pair<string, char>>, vector<pair<int, pair<string, char>>>, greater<pair<int, pair<string, char>>>> fila;
        priority_queue<pair<char, string>, vector<pair<char, string>>, greater<pair<char, string>>> fila_regiao;
        priority_queue<string, vector<string>, greater<string>> fila_nome;

        vector<string> v;

        for (int i = 0; i < N; i++)
        {
            cin >> A >> S >> C;
            fila.push({C, {A, S}});
        }

        while(!fila.empty())
        {
            int valor = fila.top().f;
            fila_regiao.push({fila.top().s.s, fila.top().s.f});
            fila.pop();

            if (!fila.empty())
            {
                while(fila.top().f == valor)
                {
                    fila_regiao.push({fila.top().s.s, fila.top().s.f});
                    fila.pop();
                    if (fila.empty())break;
                }
            }

            while(!fila_regiao.empty())
            {
                char reg = fila_regiao.top().f;
                fila_nome.push(fila_regiao.top().s);
                fila_regiao.pop();

                if (!fila_regiao.empty())
                {
                    while(fila_regiao.top().f == reg)
                    {
                        fila_nome.push(fila_regiao.top().s);
                        fila_regiao.pop();
                        if (fila_regiao.empty())break;
                    }
                }

                while(!fila_nome.empty()) 
                {
                    v.push_back(fila_nome.top());
                    fila_nome.pop();
                }
            }
        }

        for (int i = 0; i < N; i++) cout << v[i] << endl;
    }

    return 0;
}
