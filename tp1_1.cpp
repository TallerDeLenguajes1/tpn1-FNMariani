#include <stdio.h>

int main()
{
    int variable = 11;
    int *p_variable = &variable;
    
    //a)El contenido del puntero
    printf("Contenido del puntero: %d \n", *p_variable);
    
    //b)La direcci�n de memoria almacenada por el puntero. 
    printf("Direccion de memoria almacenada por el puntero: %p \n", p_variable);
    
    //c)la direcci�n de memoria de la variable.
    printf("Direccion de memoria de la variable: %p \n", &variable);
    
    //d)la direcci�n de de memoria del puntero.
    printf("Direccion de de memoria del puntero: %p \n", &p_variable);
    
    //e)el tama�o de memoria utilizado por esa variable usando la funci�n sizeof()
    printf("Tamanio de memoria de la variable: %d \n", sizeof(p_variable) );
    
    getchar();
    return 0;
}
