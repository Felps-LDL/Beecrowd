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

int N, C;
vector<int> dias;

int solution()
{
    int ant = 0, soma = 0;

    for (auto custo : dias)
    {
        if (ant < 0) ant = custo;
        else ant += custo;

        if (soma < ant) soma = ant;
    }

    return soma;
}

int main()
{
    optimize;

    while (cin >> N)
    {
        dias.resize(N);

        cin >> C;

        for (int &x : dias) 
        {
            cin >> x;
            x -= C;
        }

        cout << solution() << endl;
    }

    return 0;
}
