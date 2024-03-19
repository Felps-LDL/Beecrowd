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

ll N, tam = 0, apagados = 0;

int main()
{
    optimize;

    while(cin >> N)
    {   
        priority_queue<string, vector<string>, greater<string>> fila;

        for (int i = 0; i < N; i++)
        {
            string x;
            cin >> x;
            fila.push(x);
        }

        string topo = fila.top();
        fila.pop();
        tam = topo.size();
        apagados = 0;

        for (int i = 1; i < N; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                if (topo[j] != fila.top()[j]) break;
                apagados++;
            }
            
            topo = fila.top();
            fila.pop();
        }

        cout << apagados << endl;
    }

    return 0;
}
