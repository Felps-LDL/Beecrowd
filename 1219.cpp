// beecrowd 1219 - Flores Coloridas
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

double a, b, c;

double triangle()
{
    double p = (a + b + c) / 2;

    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double roses()
{
    double raio = 2 * triangle() / (a + b + c);

    return M_PI * raio * raio;
}

double violets()
{
    return triangle() - roses();
}

double sunflower()
{
    double raio = a * b * c / (4 * triangle());
    return M_PI * raio * raio - triangle();
}


int main()
{
    optimize;
 
    while (cin >> a >> b >> c)
    {
        priority_queue<double> fila;
        fila.push(a);
        fila.push(b);
        fila.push(c);
        a = fila.top();
        fila.pop();
        b = fila.top();
        fila.pop();
        c = fila.top();
        fila.pop();

        cout << fixed << setprecision(4);
        cout << sunflower() << " " << violets() << " " << roses() << endl;
    }
    
    return 0;
}
