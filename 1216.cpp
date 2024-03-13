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
#define MAXN 100
 
using namespace std;

ll soma = 0, cont = 0;
string temp;

int main()
{
    optimize;
 
    while(getline(cin, temp))
    {
        ll x;
        cin >> x;
        soma += x;
        cont++;
        cin.ignore();
    }

    cout << fixed << setprecision(1);
    cout << soma * 1.0 / cont << endl;
    
    return 0;
}
