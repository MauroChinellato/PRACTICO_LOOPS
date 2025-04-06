#include <iostream>
#include <string>

    using namespace std;
    
int main() {
    
    string linea;
    getline(cin, linea); 
    string palabra; 
    
    for (int i = 0; i < linea.size(); ++i) 
    {
        if (linea[i - 1] == ' ') 
        {
            i + 1;
            cout << "[" << palabra << "]"  << endl;
            palabra = "";
        }
        
        palabra = palabra + linea[i];
    }
    
    cout << "[" << palabra << "]"  << endl;
    return 0;
}
