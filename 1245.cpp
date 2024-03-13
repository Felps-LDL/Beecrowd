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

int N, tam, cont = 0;
char pe;

int main()
{
    optimize;

    while(cin >> N)
    {
        cont = 0;
        
        vector<pair<int,int>> botas(61, {0, 0});
        while (N--)
        {
            cin >> tam >> pe;

            if (pe == 'E') botas[tam].f++;
            else botas[tam].s++;
        }
            
        for (auto par : botas) cont += min(par.f, par.s);

        cout << cont << endl;
    }
    return 0;
}
