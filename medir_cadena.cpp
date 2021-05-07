#include <iostream>
using namespace std;

string cadena = {"maria tenía corderito "};
int cont=0;
int medir(string array);
void medir_recursiva(string array);

int main(){
    cout<<medir(cadena)<<endl;
    medir_recursiva(cadena);
    return 0;
}
//medida iterativa
int medir(string array){
    int cont=0;
    while(array[cont] != '\0'){
        cont++;
    }
    return cont;
}

//medir recursiva
void medir_recursiva(string array){
    cont++;
    if(array[cont] == '\0'){
        cout<<cont<<endl;
    }else{
        medir_recursiva(array);
    }
}