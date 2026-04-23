#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void print(vector<int> v) {
    cout << "(";
    for (int i = 0; i < v.size()-1;i++) {
        cout << v[i]  << ","; 
    }
    cout << v[v.size()-1] << ")" << endl;
}

void makeCombination(vector<int> &v, int pos, int n, int m) {
    if (m == pos) {
        print(v); 
        return;
    }
    for (int i = 1; i<=n;i++) {
        v[pos] = i;
        makeCombination(v, pos+1, n, m);
    }          
}

void combinations(int n, int m) {
    vector<int> v(m);
    makeCombination(v,0, n, m);
}   


int main() {
    int m;
    cout << "Digite o tamanho da lista: ";
    cin >> m;
    int n;
    cout << "Digite quantos items tem o espaco amostral:";
    cin >> n;
    
    cout << "Numero de combinacoes: " << pow(n,m) << endl;     
    
    cout << "Aqui estao as combinacoes: " << endl;
   
    combinations(n, m);
} 
