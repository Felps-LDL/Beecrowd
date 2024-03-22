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

int N;

int main()
{
    optimize;

    while(cin >> N)
    {
        priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int, string>>> fila;

        for (int i = 0; i < N; i++)
        {
            int preco;
            string nome;

            cin >> nome >> preco;

            fila.push({preco, nome});
        }

        while(fila.size() > 1)
        {
            cout << fila.top().s << " ";
            fila.pop();
        }

        cout << fila.top().s << endl;
    }


    return 0;
}
