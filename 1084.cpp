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

int N, M;
string num;

int main()
{
    optimize;

    while (cin >> N >> M)
    {
        if (N == 0 && M == 0) return 0;

        cin >> num;

        stack<char> pilha;
        pilha.push(num[0]);

        for (int i = 1; i < N; i++)
        {
            while(!pilha.empty())
            {
                if (num[i] > pilha.top() && N - i + pilha.size() - 1 >= N - M) pilha.pop();
                else break;
            }
            
            if (pilha.size() < N - M) pilha.push(num[i]);
        }

        string x = "";

        while (!pilha.empty()) 
        {
            x += pilha.top();
            pilha.pop();
        }

        int tam = x.size();

        for (int i = tam - 1; i >= 0; i--) cout << x[i];
        cout << endl;
    }

    return 0;
}
