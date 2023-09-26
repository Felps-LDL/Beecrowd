// beecrowd 1171 - Frequência de Números
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
#define ll long long

using namespace std;

int N;
int X[2100];

int main()
{
    optimize;
    cin >> N;

    while(N--)
    {
        int x;
        cin >> x;

        if (X[x] == NULL)X[x] = 1;
        else X[x]++;
    }

    for (int i = 0; i <= 2000; i++)
    {
        if (X[i] != NULL)
        {
            cout << i << " aparece " << X[i] << " vez(es)\n";  
        }
    }
    
    return 0;
}
