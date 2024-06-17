//Fechha: 13/06/2024
//Autor:Jeremy Novoa

#include <iostream>
using namespace std;
//1.Diseñe la funcion que devuelva el resultado de la serie siguiente 
//1 - 2 + 3 - 4 + 5 - 6 + 7.... n
//donde n es un parametro que indica el final de la serie 
//Calcula la serie 1 - 2 + 3 - 4 + 5 - 6 + 7....n

int SumaAlterna (int n)
{
for (int k=1; k<=n; k++)
{
if (k % 2 ==0)
suma -= suma  k; // suma = suma - k;
else
suma += suma k; //suma = suma + k;

}
return suma;
}
 
int main()
{
cout<<endl<<"La sumatoria de la serie cuando el limite n es 100 es";
cout<<SumaAlterna (100);
return 0;
}
