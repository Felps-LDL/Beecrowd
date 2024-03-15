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

vector<int> lados(3);

bool retangulo()
{
    if (pow(lados[0], 2) + pow(lados[1], 2) == pow(lados[2], 2)) return true;
    return false;
}

int main()
{
    optimize;

    cin >> lados[0] >> lados[1] >> lados[2];

    sort(ALL(lados));

    if (lados[0] + lados[1] <= lados[2] || lados[1] + lados[2] <= lados[0] || lados[2] + lados[0] <= lados[1]) cout << "Invalido\n";
    else
    {
        if (lados[0] == lados[2])
        {
            cout << "Valido-Equilatero\n";
            cout << "Retangulo: N\n";
        }
        else if (lados[0] == lados[1] || lados[1] == lados[2]) 
        {
            cout << "Valido-Isoceles\n";
            cout << "Retangulo: ";
            retangulo()? cout << "S\n" : cout << "N\n";
        }
        else
        {
            cout << "Valido-Escaleno\n";
            cout << "Retangulo: ";
            retangulo()? cout << "S\n" : cout << "N\n";
        }
    }


    return 0;
}
