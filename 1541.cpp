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

double A, B, C, area;

int main()
{
    optimize;

    while(cin >> A)
    {
        if (A == 0) return 0;

        cin >> B >> C;

        area = A * B / (C / 100);

        cout << trunc(sqrt(area)) << endl;
    }

    return 0;
}
