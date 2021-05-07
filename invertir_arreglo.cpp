#include <iostream>
#include <array>
using namespace std;

int array1[1000000]={};
void llenado(int *array,long int);
void invertir_arreglo(int*array,int);
void invertir(int*,int*);
void invertir_arreglo2(int *array,long int,long int);
void mostrar(int *array,long int);
long int sum=0;
int arrayprueba[10] ={};

int main(){
    const int tam=sizeof(arrayprueba)/sizeof(arrayprueba[0]);
    //llenado(arrayprueba,10);
    //mostrar(arrayprueba,10);    
    llenado(array1,1000000);
    mostrar(array1,10);
    invertir_arreglo(array1,1000000);
    //invertir_arreglo2(arrayprueba,0,tam-1);
    mostrar(array1,10);
    invertir_arreglo(array1,1000000);
    mostrar(array1,10);
    invertir_arreglo2(array1,0,1000000);
    mostrar(array1,10);
    invertir_arreglo2(array1,0,1000000);
    mostrar(array1,10);
    return 0;
}
//llenado e impresión
void llenado(int *array,long int tam){
    for(int i=0;i<tam;i++){
        array[i]=rand()%10;
    }
}
void mostrar(int *array,long int tam){
    for(int i=0;i<tam;i++){
        cout<<array[i]<<", ";
    }
    cout<<endl;
}
//invertir_arreglo iterativa
void invertir_arreglo(int *array, int tam){
    for(int i=0;i<tam/2;i++){
        invertir(&array[i],&array[tam-i-1]);
    }
}
void invertir(int *ini,int *fin){
    int aux=*ini;
    *ini=*fin;
    *fin=aux;
}
//invertir_arreglo recursiva
void invertir_arreglo2(int *array,long int inicio,long int fin){      
    invertir:
        if(inicio < fin){
            int aux=array[inicio];
            array[inicio]=array[fin];
            array[fin]=aux;
            inicio++;
            fin--;
        }
        goto invertir;
}