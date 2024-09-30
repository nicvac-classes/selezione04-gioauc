#include <iostream>
using namespace std;

int main() {
    string n1, n2, n3, max;
    cout << "Qual è il primo numero?";
    cin >> n1;
    cout << "Qual è il secondo numero? ";
    cin >> n2;
    cout << "Qual è il terzo numero?";
    cin >> n3;
    if (n1 > n2) 
    {
        if (n1 > n3)
        {
            max = n1;
            else
            max = n3;
        }
        if (n2 > n3)
        {
            max = n2;
            else
            max =n2;
        }
    }
    cout <<  "Il numero massimo è " & max;  
}