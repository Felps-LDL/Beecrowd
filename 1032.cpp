// beecrowd 1032 - O Primo de Josephus
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

int primos[3502];

bool eh_primo(int num)
{
    for (int i = 3; i <= sqrt(num); i += 2) if (num % i == 0) return false;

    return true;
}

void coloca_primos()
{
    int cont = 1;
    
    primos[0] = 2;

    for (int i = 3; i < 32650; i += 2)
    {
        if (eh_primo(i)) primos[cont++] = i;
    }
}

int solution()
{
	int valor = 0;

	for (int i = 1; i <= N; i++) valor = (valor + primos[N - i]) % i;
	return valor + 1;
}


int main()
{
    optimize;
    coloca_primos();

    while(true)
    {
        cin >> N;

        if (N == 0) return 0;

        cout << solution() << endl;
    }

    return 0;
}
