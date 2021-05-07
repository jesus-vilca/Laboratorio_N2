#include <iostream>
#include <array>
using namespace std;

int array1[1000000]={};
void llenado(int *array,long int);
void ordenar_arreglo(int *array,int,int);
int ordenar_arreglo2(int *array,long int,long int);
void mostrar(int *array,long int);
long int sum=0;
int arrayprueba[10] ={};

int main(){
    llenado(arrayprueba,10);
    mostrar(arrayprueba,10);
    ordenar_arreglo(arrayprueba,0,9);
    mostrar(arrayprueba,10);    
    /*llenado(array1,1000000);
    mostrar(array1,1000000);
    cout<<ordenar_arreglo(array1,1000000)<<endl;
    cout<<ordenar_arreglo(arrayprueba,100000)<<endl;
    cout<<ordenar_arreglo2(array1,1000000)<<endl;*/
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
//ordenar_arreglo iterativa
void ordenar_arreglo(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        ordenar_arreglo(array, low, j);
    if (i < high)
        ordenar_arreglo(array, i, high);
}
