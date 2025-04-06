#include <iostream>
#include <string>

    using namespace std;

int main() {
    string linea;
    getline(cin, linea); 

    int index = 0; 

    for (size_t i = 0; i < linea.length(); ++i) {
        if (linea[i] == ' ') {
            cout << i  << endl; 
        }
    }

   
    cout << linea.length()  << endl;

    return 0;
}
