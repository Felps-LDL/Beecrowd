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

using namespace std; 

int N, M;
vector<int> v;

int ordena()
{
    int swap = 0;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                swap++;
            }
        }
    }

    return swap;
}

int main()
{
    optimize;

    cin >> N;

    while(N--)
    {   
        cin >> M;
        
        v.resize(M);
        for (int &x : v) cin >> x;

        cout << "Optimal train swapping takes " << ordena() << " swaps.\n";
    }

    return 0;
}
