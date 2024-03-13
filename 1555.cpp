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
 
int N, r, b, c, temp, u, v;

void soma(int x, int y)
{
    r = pow(3 * x, 2) + pow(y, 2);
    b = 2 * pow(x, 2) + pow(5 * y, 2);
    c = -100 * x + pow(y, 3);
}

int main()
{
    optimize;
 
    cin >> N;

    while (N--)
    {
        cin >> u >> v;

        soma(u, v);

        temp = max(r, max(b, c));

        if (temp == r) cout << "Rafael ganhou\n";
        else if (temp == b) cout << "Beto ganhou\n";
        else cout << "Carlos ganhou\n";
    }

    return 0;
}
