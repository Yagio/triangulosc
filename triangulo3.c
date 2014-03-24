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

  for (int i = altura-1; i >= 0; i--){
    for (int y = 1; y <= i; y++){
      printf(" ");
    }
    for (int x = i; x < altura; x++){
      printf("*");
    }
    printf("\n");
  }
}