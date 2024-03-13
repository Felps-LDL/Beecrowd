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
 
double N, M;

int main()
{
    optimize;
 
    cin >> N >> M;
    cout << fixed << setprecision(2);
    cout << 100 * (M / N - 1) << "%\n";

    return 0;
}
