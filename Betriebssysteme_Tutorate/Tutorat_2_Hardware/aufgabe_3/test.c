#include <stdio.h>
int main(void)
{
  int value;
  FILE *fptr = fopen("myfile.txt","w");
  for(int i = 0; i < 2500; i++)
  {
    fprintf(fptr,"%d ",i);
  }
  fclose(fptr);
  fptr = fopen("myfile.txt", "r");
  for(int j = 0; j < 2500; j++)
  {
    fscanf(fptr, "%d ", &value);
  }
  fclose(fptr);
  return 42;
}
