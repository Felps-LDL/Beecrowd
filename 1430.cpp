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

string musica;

int main()
{
    optimize;
    map<char, double> mapa;
    mapa['X'] = 1.0 / 64;
    mapa['T'] = 1.0/ 32;
    mapa['S'] = 1.0 / 16;
    mapa['E'] = 1.0 / 8;
    mapa['Q'] = 1.0 / 4;
    mapa['H'] = 1.0 / 2;
    mapa['W'] = 1.0;

    while(cin >> musica)
    {
        if (musica == "*") return 0;

        int total = 0;
        double valor = 0;

        for (auto som : musica) 
        {
            if (som == '/') 
            {
                 if (valor == 1) total++;
                 valor = 0;
            }
            else valor += mapa[som];
        }

        cout << total << endl;
    }
    
    return 0;
}
