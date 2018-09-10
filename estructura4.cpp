#include <iostream>
#include <conio.h>
using namespace std;
int aceptacion=1;
int salir=0;
int i=0;
struct Persona {
char nombre [30];
int edad;

}persona, *puntero_persona=&persona;
void pedirDatos();
void mostrarDatos(Persona *);
int main() {
pedirDatos();
mostrarDatos(puntero_persona);
getch();
return 0;
}
void pedirDatos(){
{


cout<<"Digite su nombre: ";
cin.getline(puntero_persona->nombre,30,'\n');
cout<<"Digite su edad: ";
cin>>puntero_persona->edad;
cout<<"SALIR OPRIME 0"<<endl;
cin>>i;
}while (salir!=0);
}
void mostrarDatos(Persona *puntero_persona){
    cout<<"\n su nombre _"<<puntero_persona->nombre<<endl;
    cout<<"Su edad es : "<<puntero_persona->edad<<endl;

}
