/*

*
**
***
****

*/

#include <stdio.h>

int main(){
  int altura;
  printf("Altura del triangulo: ");
  scanf ("%d",&altura);

  for (int i = 1; i <= altura; i++){
    for (int y = 1; y <= i; y++){
      printf("*");
    }
    printf("\n");
  }
}