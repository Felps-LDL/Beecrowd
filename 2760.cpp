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
 
string A, B, C;

void imprime(string t)
{
    for (int i = 0; i < 10 && i < t.size(); i++) cout << t[i];
}

int main()
{
    optimize;
 
    getline(cin, A);
    getline(cin, B);
    getline(cin, C);
 
    cout << A << B << C << endl;
    cout << B << C << A << endl;
    cout << C << A << B << endl;

    imprime(A);
    imprime(B);
    imprime(C);
    cout << endl;


    return 0;
}
