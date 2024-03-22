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

ll N, M, K, V;

int main()
{
    optimize;

    while(cin >> N)
    {
        vector<vector<ll>> v(1000010);
        cin >> M;

        for (int i = 0; i < N; i++)
        {
            ll x;
            cin >> x;

            v[x].push_back(i + 1);
        }

        for (int j = 0; j < M; j++)
        {
            cin >> K >> V;

            K <= v[V].size()? cout << v[V][K - 1] << endl : cout << 0 << endl;
        }
    }


    return 0;
}
