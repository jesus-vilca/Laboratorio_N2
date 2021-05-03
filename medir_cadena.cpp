#include <iostream>
using namespace std;

string cadena = {"maria tenía corderito"};
int medir(string array);

int main(){
    cout<<medir(cadena)<<endl;
    return 0;
}
//medida
int medir(string array){
    int cont=0;
    while(cadena[cont] != '\0'){
        cont+=1;
    }
    return cont;
}
