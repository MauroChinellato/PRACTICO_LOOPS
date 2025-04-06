#include <iostream>
using namespace std;

int main() {
    int torta;       
    int visitas = 0; 
    
    while (visitas < 10 && cin >> torta) 
    {
        if (torta == 1) 
        {
            cout << "Om-nom-nom :P" << endl;
        } 
        else if (torta == 0) 
        {
            cout << "Sin pastel :(" << endl;
            break;
        }
        visitas++;
    }
    return 0;
}
