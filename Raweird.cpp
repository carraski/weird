#include <iostream>
using namespace std;
int main(){
//mirar el ejercicio en CSES - weird Algorithm
//si un numero n es par lo divide entre dos
//si ese numero n es impar lo multiplica x3 y le suma 1
//se tiene que repetir la secuencia hasta que se llegue a 1
int n;
    cout << "Dime que numero quieres convertir en 1 ";
   
    cin >> n;
    // 0 es un numero par
// 1 es para un numero impar
do{
if (n%2 == 0){
    //los dos = es para que sea una comparacion
n= n/2 ;
cout << "el numero ahora es " <<n<< "\n";
}
else {
n=n*3;
n=n+1;
cout << "el numero ahora es " <<n<< "\n";
}
}
while (n != 1);
//n! sirve para decir que algo no es igual
}