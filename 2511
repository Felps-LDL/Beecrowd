// beecrowd 2511 - WWW
// Felipe Lages de Lima

#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 10100
#define INTMAX 10000000000
#define pii pair<int, int>
#define ALL(x) x.begin(), x.end()

using namespace std;

long N;

int main()
{
    optimize;

    while(cin >> N)
    {
        int vizinhos[N];
        vector<int> primos;

        for (int i = 0; i < N; i++)
        {
            cin >> vizinhos[i];
        }

        for (int i = 0; i < N; i++)
        {
            if (vizinhos[i] < 2) continue;
            
            if (vizinhos[i] == 2)
            {
                primos.push_back(2);
                continue;
            }

            if (vizinhos[i] % 2 == 0) continue;

            bool primo = true;

            int raiz = round(sqrt(vizinhos[i]));

            for (int j = 3; j <= raiz; j += 2)
            {
                if (vizinhos[i] % j == 0)
                {
                    primo = false;
                    break;
                }
            }
            
            if (primo) primos.push_back(vizinhos[i]);
        }

        int tam = primos.size();

        if (tam != 0)
        {
            for (int i = 0; i < tam - 1; i++)
            {
                cout << primos[i] << " ";
            }

            cout << primos[tam - 1] << endl;
            continue;
        }

        cout << "*\n";
    }

    return 0;
}
