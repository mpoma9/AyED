#include<iostream>
#include<iomanip>

using namespace std;

int main ()

{

int n,i,z;
float s,pi;

cout << "Ingresar un valor: ";  // Ingresar 236300
cin >> n;

s = 0;
z = 1;
i = 1;

while (i<=n) {
s = s+z*(1/(float)(2*i-1));
z = - z;
i = i+1;

}

pi = 4*s;

cout << "El valor de pi: es " << setprecision(8) << fixed << pi << endl;;

   return 0;
    }