#include <iostream>
#include <iomanip>   //Para setw
using namespace std;

int main() {
    
    int Dia = 0;
    int Mes = 0;
    
    cin >> Dia;
    cin >> Mes;
    
    int SRT = Dia % 7;
    
    if (Mes > 0 and Mes < 99)
    {
        int col = 1;
        while(col < SRT) 
        {
            cout << "   ";  
            col++;
        }
        for (int d = 1; d <= Mes; d++) 
        {
            cout << setw(2) << d;
            if (col < 7)
            {
               cout << " ";
            } 
            else 
            {
              cout << "\n";
              col = 0;
            }
            col++;
        }
        if (col != 1) 
        {
            cout << "\n";
        }
    }
    else 
    {
        cout << "No esta en los parametros" << endl;
    }
    
    return 0;
}
