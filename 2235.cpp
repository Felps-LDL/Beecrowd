#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 1000
 
using namespace std;
 
vector<int> vetor(3);

bool solution()
{
    if (vetor[0] == vetor[1] || vetor[1] == vetor[2]) return true;

    if (vetor[0] + vetor[1] == vetor[2]) return true;

    return false;
}

int main()
{
    optimize;
 
    for (int i = 0; i < 3; i++) cin >> vetor[i];
    sort(ALL(vetor));
    
    if (solution()) cout << "S\n";
    else cout << "N\n";

    return 0;
}
