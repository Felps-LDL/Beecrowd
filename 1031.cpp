// beecrowd 1031 - Crise de Energia
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
 
int solution()
{
    int cont = 1;
    bool ligados[N];
 
    while(true)
    {
        for (int i = 0; i < N; i++) ligados[i] = true;
 
        int apagadas = 1, pos = 0, cont2 = 0;
        ligados[0] = false;
 
        while(apagadas != N - 1)
        {
            while (cont2 != cont)
            {
                pos++;
                if (pos > N - 1) pos %= N - 1;
                if (ligados[pos]) cont2++;
            }
 
            apagadas++;
            ligados[pos] = false;
 
            if (pos == 12)
            {
                cont++;
                break;
            }
 
            cont2 = 0;
        }
 
        if (ligados[12]) return cont;
    }
}
 
int main()
{
    optimize;
 
    while (true)
    {
        cin >> N;
        if (!N) break;
 
        cout << solution() << endl;
    }
    
    return 0;
}
