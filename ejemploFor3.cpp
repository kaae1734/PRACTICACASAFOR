//Almacenar x cantidad de numero e imprimir dichos numeros

#include <iostream>
using namespace std;

#define MAX 100

int vector[MAX]; //Arreglo o Vector
int pos=0; //Posicion o Ubicacion de un elmento

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cant; //Almacenar la cantidad de elemetos
    int num;
    cout << "Dime cuantos numeros quieres almacenar";
    cin >> cant;

for (int i = 0; i < cant; i++)
{
    cout << "Dime un #: ";
    cin >> num;
    agregar(num);

}
    cout << "Mostrar numero\n";
        mostrar();

        return 0;
    
}

void agregar(int num)
{
    vector[pos]=num;
    pos++;
}

void mostrar()
{
    for (int i = 0; i < pos; i++)
    {
    cout << vector[i] << endl;
    }
    
}

