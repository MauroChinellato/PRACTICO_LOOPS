#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int suma = 0;
    while (n > 0) 
    {
        suma += n % 10; // Se suma el último dígito
        n /= 10;        // Se elimina el último dígito
    }
    cout << suma << endl;
    return 0;
}
