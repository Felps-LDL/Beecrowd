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
        vector<vector<string>> vetor(60);
        palavra = "";

        getline(cin, texto);

        int tam = texto.size(), menor = 55;

        for (int i = 0; i < tam; i++)
        {
            if (texto[i] == ' ') 
            {
                if (palavra.size() < menor) menor = palavra.size();
                vetor[palavra.size()].push_back(palavra);
                palavra = "";
            }
            else palavra += texto[i];
        }

        if (palavra.size() < menor) menor = palavra.size();
        vetor[palavra.size()].push_back(palavra);

        for (int i = 50; i > menor; i--)
        {
            int tam2 = vetor[i].size();
            for (int j = 0; j < tam2; j++) cout << vetor[i][j] << " ";
        }

        int tam2 = vetor[menor].size();
        for (int i = 0; i < tam2 - 1; i++) cout << vetor[menor][i] << " ";
        cout << vetor[menor][tam2 - 1] << endl;
    }

    return 0;
}
