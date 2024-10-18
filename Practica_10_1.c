/*matriz 3*3 e imprimir los valores por medio de un for*/


  #include <stdio.h>
  int main ()
  {
  int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; // Se declara e inicializa el arreglo
  int x = 0;
  int y=0;
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
