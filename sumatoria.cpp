#include <iostream>
#include <array>
using namespace std;

int array1[100000000]={};
void llenado(int *array,long int);
int sumatoria(int *array,long int);
void sumatoria2(int *array,long int,long int,long int *sum);
void mostrar(int *array,long int);
long long sumaRecursiva(int* arr,long int);
long long sumaIterativa(int* arr,long int);
long int sum=0;

int main(){
    llenado(array1,100000000);
    //mostrar(array1,1000000);
    cout<<sumatoria(array1,100000000)<<endl;
    cout<<sumaRecursiva(array1,100000000)<<endl;
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
//suma Marko
long long sumaRecursiva(int* arr,long int tam){
    suma:
        if(tam == 1) return *arr;
        *(arr + tam - 2) += *(arr + tam - 1);
        tam--;
        goto suma;
}

long long sumaIterativa(int* arr,long int tam){
    long long suma = 0;
    for(int i = 0; i < tam; i++){
        suma += *(arr + i);
    }
    return suma;
}
