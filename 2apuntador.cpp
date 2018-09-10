#include <iostream>
#include <iomanip>
using namespace std;
struct nodo{
	int var;
	struct nodo*ptr;

};
int main(){
struct nodo *inicio;
struct nodo *nodo;
nodo= new struct nodo;
inicio=nodo;
inicio->ptr=NULL;
inicio->var=10;
nodo= new struct nodo;
inicio->ptr=nodo;
inicio->ptr->ptr=NULL;
inicio ->ptr->var=20;
cout<<inicio->var<<endl;
cout<<inicio->ptr->var;
return 0;
}
/*#include <iostream>
#include <iomanip>
using namespace std;
struct nodo{
	int var;
	struct nodo*ptr;

};
///Realizar los mismo pero con varios datos
///aux =NULL; prefguntar si el valor es nul
///Insertar en nuLL lo hacemos con un while

struct nodo *inicio;
int main(){

struct nodo *nodo;
nodo= new struct nodo;
inicio=nodo;
inicio->ptr=NULL;
inicio->var=10;
nodo= new struct nodo;
inicio->ptr=nodo;
inicio->ptr->ptr=NULL;
inicio ->ptr->var=20;
cout<<inicio->var<<endl;
cout<<inicio->ptr->var;
return 0;
}
*/
