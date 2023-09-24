// beecrowd 1221 - Primo Rápido
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
 
int N, num;
bool prime = true;
 
int main()
{
    optimize;
 
    cin >> N;
 
    while(N--)
    {
        prime = true;
        cin >> num;
 
        if (num < 2) 
        {
            cout << "Not Prime\n";
            continue;
        }
        if (num == 2)
        {
            cout << "Prime\n";
            continue;
        }
 
        if (num % 2 == 0) 
        {
            cout << "Not Prime\n";
            continue;
        }
        
        double raiz = round(sqrt(num));
    
        for (int i = 3; i <= raiz; i += 2)
        {
            if (num % i == 0)
            {
                cout << "Not Prime\n";
                prime = false;
                break;
            }
        }
 
        if (prime) cout << "Prime\n";
    }
 
    return 0;
}
