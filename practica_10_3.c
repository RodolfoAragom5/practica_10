#include <stdio.h>
  int main ()
  {
  int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; // Se declara e inicializa el arreglo
  int x=0;
  int y=0;
  printf("\tarreglo\n");
  do 
  {
    int y=0;
    printf("\n");
    do
      {
        printf("\t %d ", arr[x][y]);
        y++;
      }
    while (y<3);
    x++;
    }
  while(x<3);
return 0;
}
