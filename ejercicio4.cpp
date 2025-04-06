#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if(n < 0) {
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
    }
    else if(n > 14) {
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
    }
    else {
        int F = 1;
        for(int i = 1; i <= n; i++) 
        {
            F *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}
