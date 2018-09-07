// Rodrigo Perez Solis
// A01411278
//06/09/2018
#include <stdio.h>

int main() {
    //Se declaran las variables con unsigned int ya que no se aceptan numeros negativos.
    unsigned int product = 1;
    unsigned int i = 1;
    int n;
// Le pedimos al usuario que introduzca un numero positivo para realizar su
    printf("Pleas enter any positive number:");
    scanf("%d", &n);
// cuando el numero sea menor a 0 se le informara al usuario
// que solo se puede sacar numero factorial de numeros positivos
    if(n < 0 ){
        printf("you can only have a factorial for positive numbers.");
// Se declara el ciclo while cuando el numero es mayor que uno y asi el loop puede comenzar.
    }else{
        while(i < n){
            product *= n;
            n--;

    }
    printf("the factorial for this number is= %d",product);
    }
    return 0;




}