#include <stdio.h>
  int main ()
  {
  int arr[3][3]; // Se declara e inicializa el arreglo
  int x = 0;
  int y=0;

  int i=0;
  int j=0;

  int a=0;
  int b=0;  
  
  int s[3]
    
  int sm;
    
  for (x=0; x<3; x++) 
  {
    printf("\n");
    
    for (y=0; y<3; y++)
      {
        printf("ingresa el valor del arreglo en la columna %d en la fila %d \n", x, y);
        scanf("%d", &arr[x][y]);
      }
  }
    for (i=0; i<3; i++) 
  {
    printf("\n");
    
    for (j=0; j<3; j++)
      {
        printf("ingresa el valor del arreglo en la columna %d en la fila %d \n", x, y);
        scanf("%d", &arr[i][j]);
      }
  }
    printf("arreglo\n");
  for (a=0; a<3; a++) 
  {
    printf("\n");
    for (b=0; b<3; b++)
      {
        sum=arr[x][y] + arr[i][j];
        arr[x][y]=arr[x+1][y+1];
        arr[i][j]=arr[i+1][j+1];
      }
    arr[a]=sum;
  }
  for (y=0; y<3; y++)
    {
      printf("\t %d", arr[a]);      
    }
  return 0;
  }
