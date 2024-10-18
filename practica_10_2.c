
  #include <stdio.h>
  int main ()
  {
  int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; // Se declara e inicializa el arreglo
  int x = 0;
  int y=0;
  printf("\tarreglo\n");
  while (x<3) 
  {
    printf("\n");
    while (y<3)
      {
        printf("\t %d ", arr[x][y]);
        y=y+1;
      }
    x=x+1;
  }
  return 0;
  }
