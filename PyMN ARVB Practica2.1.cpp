#include <stdio.h>

int numero;

int main() {
  printf("Por favor ingresa un numero entero\n");
  scanf("%d",&numero);

  if(numero%2==0){
    printf("El numero que ingresaste es par\n");
  }
  else {
    printf("El numero es impar\n");
  }

}
