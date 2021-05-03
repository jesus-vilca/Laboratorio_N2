#include <iostream>
#include <array>
using namespace std;

int array1[1000000]={};
void llenado(int *array,long int);
int sumatoria(int *array,long int);
void sumatoria2(int *array,long int,long int,long int *sum);
void mostrar(int *array,long int);
long int sum=0;

int main(){
    llenado(array1,1000000);
    mostrar(array1,1000000);
    cout<<sumatoria(array1,1000000)<<endl;
    sumatoria2(array1,0,1000000,&sum);
    cout<<sum<<endl;
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
}
//sumatoria iterativa
int sumatoria(int *array,long int m){
    int suma=0;
    for(long int i=0;i<m;i++){
        suma += array[i];
    }
    return suma;
}
//sumatoria recursiva
void sumatoria2(int *array,long int indice,long int m, long int *sum){      //solo funciona hasta 10000
    if(indice < m){
        *sum += array[indice];
        indice ++;
        sumatoria2(array,indice,m,sum);
    }
}
