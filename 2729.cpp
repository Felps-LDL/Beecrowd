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

int N;
string texto, palavra = "";

int main()
{
    optimize;

    cin >> N;
    cin.ignore();

    while(N--)
    {
        set<string> sett;
        set<string> :: iterator it;
        getline(cin, texto);

        for (char letra : texto)
        {
            if (letra == ' ') 
            {
                sett.insert(palavra);
                palavra = "";
            }
            else palavra += letra;
        }

        sett.insert(palavra);
        palavra = "";

        cout << *sett.begin();
        
        for (it = sett.begin(); it != sett.end(); it++)
        {
            if (it == sett.begin()) continue;
            cout << " " << *it;
        }

        cout << endl;
    }

    return 0;
}
