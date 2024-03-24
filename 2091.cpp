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

int N;

int main()
{
    optimize;

    while(true)
    {
        cin >> N;

        if (N == 0) return 0;

        set<ll> numeros;

        for (int i = 0; i < N; i++)
        {
            ll x;
            cin >> x;
            if (numeros.find(x) != numeros.end()) numeros.erase(x);
            else numeros.insert(x);
        }
        
        cout << *numeros.begin() << endl;
    }

    return 0;
}
