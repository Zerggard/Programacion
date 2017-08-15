#include <iostream>
using namespace std;
int main()
{
    float sueldo;
    cout<<"Ingresa tu sueldo actual..: ";cin>>sueldo;
/*
Sin necesidad de usar otras variables, calcula el nuevo sueldo de acuerdo a la siguiente tabla
rango aumento
0 - 1000 18%
1001 - 1100 15%
1101 - 1200 12%
1201 - 1300 10%
mas de 1300 8%*/
    if (sueldo>=0 && sueldo<=1000)
    {
        sueldo=sueldo*0.18+sueldo;
    }
    else
        if (sueldo>1000 && sueldo<=1100)
    {
        sueldo=sueldo*0.15+sueldo;
        cout<<"\nTu nuevo sueldo es : "<<sueldo;
    }
    else
        if (sueldo>1100 && sueldo<=1200)
    {
        sueldo=sueldo*0.12+sueldo;
        cout<<"\nTu nuevo sueldo es : "<<sueldo;
    }
    else
        if (sueldo>1200 && sueldo<=1300)
    {
        sueldo=sueldo*0.10+sueldo;
        cout<<"\nTu nuevo sueldo es : "<<sueldo;
    }
    else
        if (sueldo>1300)
    {
        sueldo=sueldo*0.08+sueldo;
        cout<<"\nTu nuevo sueldo es : "<<sueldo;
    }
    else
        cout<<"La cantidad ingresada no es valida";


return 0;
}
