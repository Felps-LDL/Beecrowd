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
#define MAXN 1000
 
using namespace std;
 
int N, ant = -1, temp = 0;

int main()
{
    optimize;
 
    cin >> N;

    for (int i = 0 ; i < N; i++)
    {
        cin >> temp;
        if (temp < ant)
        {
            cout << i + 1 << endl;
            return 0;
        }

        ant = temp;
    }

    cout << 0 << endl;
 
    return 0;
}
