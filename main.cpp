#include <iostream>
using namespace std;
int suma(int, int );
void procedimiento1();
int variableGlobal;
const string SECCION="A";

int main() {
    procedimiento1();
    cout<<"Ingrese el primer numero";
    int primerNumero, segundoNumero;
    cin>>primerNumero;
    cout<<"Ingrese el segundo numero";
    cin>>segundoNumero;

    suma(primerNumero,segundoNumero);
    //int resultado=suma(4,5);
    //cout<<"el resultado es : "<< resultado<<endl;
    cout<<variableGlobal;
    procedimiento1();
    return 0;
}

int suma(int primerNumero, int segundoNumero){
    //int resultado= primerNumero+segundoNumero; variable local
    //return primerNumero+segundoNumero;
    variableGlobal= primerNumero+segundoNumero;//variable global
    return variableGlobal;
}

void procedimiento1(){
    cout<<" Hola, se ejecuta el procedimiento  "<< "Progra con C++ primer ciclo seccion " <<SECCION<< endl;
}


