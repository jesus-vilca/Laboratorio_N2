#include <iostream>
using namespace std;

void llenado(char *array,int);
void mostrar(char *array,int);
void strcat(char*,char*);
char cat1[8] = "";
char cat2[12] = "";
int tam1 = sizeof(cat1)/sizeof(cat1[0]);
int tam2 = sizeof(cat2)/sizeof(cat2[0]);

int main(){
    llenado(cat1,8);
    llenado(cat2,4);
    mostrar(cat1,8);
    mostrar(cat2,12);
    strcat(cat1,cat2);
    mostrar(cat2,12);
    return 0;
}

//llenado e impresión
void llenado(char *array,int tam){
    for(int i=0;i<tam;i++){
        array[i]='a'+rand()%26;
    }
}
void mostrar(char *array,int tam){
    for(int i=0;i<tam;i++){
        cout<<array[i]<<", ";
    }
    cout<<endl;
}

//función concatenar
void strcat(char* array1,char* array2){
    int dif = tam2 - tam1;
    cout<<tam1<<", "<<tam2<<", "<<dif<<endl;
    for(int i=dif;i<tam2;i++){
        array2[i] = array1[i-dif];
    }
}