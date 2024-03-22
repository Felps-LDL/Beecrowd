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

ll N, X;

int main()
{
    optimize;

    cin >> N;

    while(N--)
    {
        cin >> X;

        if (X == 0) return 0;

        cout << fixed << setprecision(0);
        cout << trunc(pow(2, X) / 12000) << " kg" << endl;
    }


    return 0;
}
