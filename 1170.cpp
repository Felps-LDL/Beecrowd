// beecrowd 1170 - Blobs
// Felipe Lages de Lima
// Felps-LDL
 
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 10100
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
 
using namespace std;
 
int N;
double C;
 
int main()
{
    optimize;
 
    cin >> N;
 
    while(N--)
    {
        cin >> C;
 
        int dias = 0;
 
        while (C > 1)
        {
            dias++;
            C /= 2;
        }
 
        cout << dias << " dias\n";
    }
 
    return 0;
}
