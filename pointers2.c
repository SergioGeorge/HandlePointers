#include <stdio.h>



int array[] = {12,19,7,20,32,1};
int *p = NULL;
int i, valor;

int main(){

    //Ejercicio 1: obten el valor 7 del array sin usar notación corchete '[]'
    p = array;
    int longitud = sizeof(array)/sizeof(int);
    printf("La logitud del array es: %d\n", longitud);

    for(i=0;i<longitud+2;i++){
        //if(*(p+i)==32)
            //valor = *(p+i);
        printf("%d\n", *p++);
    }

    //printf("El valor es: %d\n", valor);

    

    return 0;
}