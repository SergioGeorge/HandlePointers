#include <stdio.h>
#define SIZE 6

int array[SIZE] = {4,7,9,2,11,8};
int *p = NULL;
int i;

int main(){
    p = array;
    
    /*La forma que YO ocupo para recorrer un puntero*/
    printf("Método que YO ocupo para reccorrer un puntero que apunta a un array\n");
    for(i=0;i<SIZE;i++){
        printf("p[%d]: %d\n", i, p[i]);
    }
    printf("Método -> (*p)+1\n");
    //for(i=0;i<SIZE;i++){
        printf("p[0]: %d\n", (*p)+1);
    //}

    printf("Método -> *p++\n");
    printf("p[0]: %d\n", *p++);
    printf("p[0]: %d\n", *p++);
    printf("p[0]: %d\n", *p++);
    printf("p[0]: %d\n", *p++);

    p = NULL;
    p = array;
    printf("Método -> *(p+1)\n");
    printf("p[0]: %d\n", *(p+1));
    printf("p[0]: %d\n", *(p+2));
    printf("p[0]: %d\n", *(p+3));

    p = NULL;
    p = array;
    printf("Método -> (*p)++\n");
    printf("p[0]: %d\n", (*p)++);
    printf("p[0]: %d\n", (*p)++);
    printf("p[0]: %d\n", (*p)++);


    return 0;
}