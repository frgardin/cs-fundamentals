#include <iostream>
#include <vector>

using namespace std;

int fact(int n) 
{
    if (n <= 1) return 1;
    return fact(n-1) * n;
}

void print(vector<int> v) 
{
    cout << "(";
    for (int i  = 0;i < v.size()-1; i++)
    {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1] << ")" << endl;
}

void combinations(vector<int> v, int pos,int from, int n, int m) 
{
    if (pos == m) 
    {
        print(v);
        return;
    }
    for (int i = from; i < n; i++) 
    {
        v[pos] = i;
        combinations(v, pos+1, i+1, n, m);
    }
}

int main()
{
    int n, m;
    cout << "Digite o tamanho do espaco amostral: ";
    cin >> n;
    cout << "Digite o tamanho da lista: ";
    cin >> m;
    vector<int> v(m); 
    
    cout << "As combinacoes sao: " << endl;
    combinations(v, 0, 0, n, m);
}
