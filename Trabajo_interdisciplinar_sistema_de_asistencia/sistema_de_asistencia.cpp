#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// PERSONA
class Persona{
protected:
    string nombre;
    int cui;
public:
    Persona(string, int);
    void mostrar();
};

Persona::Persona(string n,int e){
    nombre=n;
    cui=e;
}

// ALUMNO
class Alumno:public Persona{
protected:
    string especialidad;
public:
    Alumno(string,int,string);
    string getNombre() { return nombre ;}
    int getEdad() { return cui ;}
    string getEspecialidad() { return especialidad ;}
};

Alumno::Alumno(string n,int e,string esp):Persona(n,e){
    especialidad=esp;
}

// PROFESOR


// ADMINISTRATIVO


//////////////////////////////////////////////////////////////////////////////////
int main(){
    Alumno *ListaAlumnos[10];
    int opc, cont1 = 0, cont2 = 0, cont3 = 0;

    do{
        cout<<"\n 1 >> Aparatos Vendidos \n";
        cout<<" 2 >> Ver lista de Aparatos \n";
        cout<<" 3 >> SALIR >> \n";
        cout<<"\n\n  OPCION: "; cin>>opc;
        if(opc==1){
            string nom, especialidad;
            int edad;
            cout<<"\n Aparato >> "<<endl;
            cout<<"   > Nombre:       ";cin>>nom;
            cout<<"   > Costo:         ";cin>>edad;
            cout<<"   > Fecha de factura: ";cin>>especialidad;
            cout<<endl;
            ListaAlumnos[cont1]=new Alumno(nom, edad , especialidad);
            cont1++;
        }else if(opc==2){
            cout<<"\n LISTA DE APARATOS >>>>>>>>>>>>>>>>>>>>>>>>> \n";
            for(int j=0; j<cont1; j++){
                cout<<"\n   APARATO "<<j+1<<" >> "<<endl;
                cout<<"     > Nombre:         "<<ListaAlumnos[j]->getNombre()<<endl;
                cout<<"     > Costo:           "<<ListaAlumnos[j]->getEdad()<<endl;
                cout<<"     > Fecha de factura:   "<<ListaAlumnos[j]->getEspecialidad()<<endl;
                cout<<endl;
            }

        }

    }while(opc!=3);

    return 0;
}

