#include <iostream>
#include <iomanip>
using namespace std;
struct nodo{
	int var;
	struct nodo*ptr;

};


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
