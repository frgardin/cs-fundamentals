#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void print(vector<int> v)
{
    cout << "(";
    for (int i = 0; i < v.size()-1;i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size()-1]<< ")" << endl;
} 


void combinations(vector<int> &v, int pos, int n, int m)
{
    if (pos == m) 
    {
        print(v);
        return;    
    }

    for (int i  = 0; i < n; i++) 
    {
        v[pos] = i;
        combinations(v, pos+1, n, m);
    }

}


int main()
{
    int n, m;
    cout << "Digite o tamanho do espaco amostral: ";
    cin >> n;
    cout << "Digite o tamanho da lista: ";
    cin >> m;

    cout << "As quantidade de combinacoes eh: " << pow(n, m) << endl;

    cout << "As combinacoes sao: " << endl; 
    
    vector<int> v(m);
    combinations(v, 0, n, m);
}
