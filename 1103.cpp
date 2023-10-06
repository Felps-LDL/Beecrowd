// beecrowd 1103 - Alarme Despertador
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

int H1, M1, H2, M2, diff;

int main()
{
    optimize;

    while (true)
    {
        cin >> H1 >> M1 >> H2 >> M2;
        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) return 0;

        if (H2 < H1) diff = (24 + H2) * 60 + M2 - (M1 + 60 * H1);
        else if (H2 == H1)
        {
            if (M2 <= M1) diff = (24 + H2) * 60 + M2 - (M1 + 60 * H1);
            else diff = M2 - M1;
        }
        else diff = H2 * 60 + M2 - (M1 + 60 * H1);

        cout << diff << endl;
    }

    return 0;
}
