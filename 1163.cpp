// beecrowd 2511 - WWW
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

double h, X, g = 9.80665, pi = 3.14159, alpha, v;
double angulo, vx, vy, tempo_metade, Hmax, tempo_restante, queda; 
int p1, p2, n;

int main()
{
    optimize;

    // X -> DUCK acertou
    // X -> NUCK errou
    
    while(cin >> h >> p1 >> p2 >> n)
    {
        while(n--)
        {
            cin >> alpha >> v;
            
            angulo = alpha * pi / 180;

            // Coeficientes da velocidade
            vx = v * cos(angulo), vy = v * sin(angulo);

            // Calculando tempo total
            tempo_metade = vy / g;

            Hmax = pow(vy, 2) / (2 * g) + h;

            tempo_restante = sqrt(Hmax * 2 / g);

            // Calculando onde vai cair
            queda = vx * (tempo_metade + tempo_restante);

            cout << fixed << setprecision(5);

            if (queda >= p1 && queda <= p2) cout << queda << " -> DUCK\n";
            else cout << queda << " -> NUCK\n";
        }
    }

    return 0;
}
