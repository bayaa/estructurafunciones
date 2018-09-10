 #include <iostream>
using namespace std;

int main(){
int cantidad;
///DEclara como tipo punter

int *var;

cout<<"Cuantos numeros quieres\n";
cin>>cantidad;
var=new int [cantidad];
for(int i=0;i<cantidad;i++){

    cout<<"Dame cantidad"<<i<<"   >>>";
    cin>>var [i];
}
 for(int i=0;i<cantidad;i++){

    cout<<i<<">>>>"<<   var[i]<<endl;

}
 delete[]var;




return 0;
}
