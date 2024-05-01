//Mostrar los numeros del 1 al 9

#include <iostream> //Es una libreria de entrada y salida

 using namespace std;

void imprimirNum();
 
 int main(int argc, char const *argv[])
{
    /* code */
    imprimirNum();
    return 0;
}

void imprimirNum(){
    for (int i = 0; i <=9; i++)
    {
        cout << i << endl;
    }
    
}