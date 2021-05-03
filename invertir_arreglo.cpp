#include <iostream>
#include <array>
using namespace std;

int array1[1000000]={};
void llenado(int *array,long int);
int invertir_arreglo(int *array,long int);
int invertir_arreglo2(int *array,long int,long int);
void mostrar(int *array,long int);
long int sum=0;
int arrayprueba[10] ={};

int main(){
    llenado(arrayprueba,10);
    mostrar(arrayprueba,10);
    invertir_arreglo2(arrayprueba,0,10);
    mostrar(arrayprueba,10);    
    /*llenado(array1,1000000);
    mostrar(array1,1000000);
    cout<<invertir_arreglo(array1,1000000)<<endl;
    cout<<invertir_arreglo(arrayprueba,100000)<<endl;
    cout<<invertir_arreglo2(array1,1000000)<<endl;*/
    return 0;
}
//llenado e impresión
void llenado(int *array,long int m){
    for(int i=0;i<m;i++){
        array[i]=rand()%10;
    }
}
void mostrar(int *array,long int m){
    for(int i=0;i<m;i++){
        cout<<array[i]<<", ";
    }
    cout<<endl;
}
//invertir_arreglo iterativa
int invertir_arreglo(int *array,long int m){
    int aux[m]={};
    for(long int i=0;i<m;i++){
        aux[i]=array[i];
    }
    for(long int i=0;i<m;i++){
        array[m-i-1]=aux[i];
    }
    return *array;
}
//invertir_arreglo recursiva
int invertir_arreglo2(int *array,long int indice,long int m){      
    if(indice != m/2 || indice != m/2+1){
        if(array[indice] != array[m-1]){
            int aux=array[indice];
            array[indice]=array[m-1];
            array[m-1]=aux;
        }
        invertir_arreglo2(array,indice+1,m-1);
    }else{
        return *array;
    }

}