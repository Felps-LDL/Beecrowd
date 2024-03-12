#include <bits/stdc++.h>
#define optmize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

int main()
{
    optmize;

    int M;

    while (cin >> M)
    {
        vector<int> vet(M);
        int N, soma = 0, primo = 0;

        for (auto &x : vet)
        {
            cin >> x;
        }

        cin >> N;
        
        for (int i = M - 1; i >= 0; i -= N)
        {
            soma += vet[i];
            if (N == 0)
                break;
        }
        
        if (soma == 1) 
        {
            cout << "Bad boy! I’ll hit you.\n";
            continue;
        }

        for (int i = 2; i < soma; i++)
        {
            if (soma % i == 0)
            {
                cout << "Bad boy! I’ll hit you.\n";
                primo = 1;
                break;
            }
        }
        
        if (primo == 0)
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";

        return 0;
    }
}
