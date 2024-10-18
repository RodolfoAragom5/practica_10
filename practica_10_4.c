#include <stdio.h>
  int main ()
  {
  int arr[3][3]; // Se declara e inicializa el arreglo
  int x = 0;
  int y=0;
    
  for (x=0; x<3; x++) 
  {
    printf("\n");
    
    for (y=0; y<3; y++)
      {
        printf("ingresa el valor del arreglo en la columna %d en la fila %d \n", x, y);
        scanf("%d", &arr[x][y]);
      }
  }
    printf("arreglo\n");
  for (x=0; x<3; x++) 
  {
    printf("\n");
    for (y=0; y<3; y++)
      {
        printf("\t %d", arr[x][y]);
      }
  }
  return 0;
  }
