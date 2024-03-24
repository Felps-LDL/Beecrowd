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

int T, N, idade = -INF;

int main()
{
    optimize;

    cin >> T;

    for (int j = 0; j < T; j++)
    {
        idade = -INF;
        cin >> N;
        priority_queue<int> fila;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            fila.push(x);
        }

        while(fila.size() != N / 2) 
        {
            idade = fila.top();
            fila.pop();
        }

        cout << "Case " << j + 1 << ": " << idade << endl;
    }

    return 0;
}
