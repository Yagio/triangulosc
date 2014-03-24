/*

****
***
**
*

*/

#include <stdio.h>

int main(){
  int altura;
  printf("Altura del triangulo: ");
  scanf ("%d",&altura);

  for (int i = altura; i >= 1; i--){
    for (int y = 1; y <= i; y++){
      printf("*");
    }
    printf("\n");
  }
}