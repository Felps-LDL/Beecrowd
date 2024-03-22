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

ll N, M;

ll carry()
{
    ll ant = 0, carries = 0;

    while(max(N, M))
    {
        int temp1 = N % 10, temp2 = M % 10;
        N = N / 10;
        M = M / 10;

        if (ant + temp1 + temp2 > 9)
        {
            carries++;
            ant = 1;
        }
        else ant = 0;
    }

    return carries;
}

int main()
{
    optimize;

    while(true)
    {
        cin >> N >> M;
        if (N == 0 && M == 0) break;

        ll carries = carry();
        if (carries == 0) cout << "No carry operation.\n";
        else if (carries == 1) cout << carries << " carry operation.\n";
        else cout << carries << " carry operations.\n";
    }


    return 0;
}
