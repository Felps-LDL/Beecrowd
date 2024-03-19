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

ll N;
vector<ll> v;

ll ordena()
{
    ll swap = 0;

    while(true)
    {
        bool ok = true;

        for (int i = 1; i <= N; i++)
        {
            if (v[i] != i)
            {
                ok = false;
                int temp = v[i];
                v[i] = v[v[i]];
                v[temp] = temp;
                swap++;
                break;
            }
        }
        
        if (ok) return swap;
    }

    return swap;
}

int main()
{
    optimize;

    while(cin >> N)
    {   
        if (N == 0) return 0;

        v.resize(N + 1);

        for (int i = 1; i <= N; i++) cin >> v[i];

        (ordena() % 2 == 0)? cout << "Carlos\n" : cout << "Marcelo\n";
    }

    return 0;
}
