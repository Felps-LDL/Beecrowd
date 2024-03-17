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

int N, L;

vector<int> v, w;
ll memo[100][100];

ll bruteforce(int item, int cap)
{
    if (cap < 0) return -LINF;
    if (item == N) return 0;

    ll &p = memo[item][cap];

    if (p != -1) return p;

    return p = max(bruteforce(item + 1, cap), bruteforce(item + 1, cap - w[item]) + v[item]);
}

int main()
{
    optimize;

    while(cin >> N)
    {
        if (N == 0) return 0;

        cin >> L;

        v.resize(N), w.resize(N);

        memset(memo, -1, sizeof memo);

        for (int i = 0; i < N; i++) cin >> v[i] >> w[i];

        cout << bruteforce(0, L) << " min.\n";
    }

    return 0;
}
