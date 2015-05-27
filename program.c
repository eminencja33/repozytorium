#include <stdio.h>
#include <stdlib.h>

void add(int**, int, int);
// void add(int* [], int, int);

int main()
{

  int *x;
printf("pierwsza zmiana");
 
 
  x=NULL;
 
  for(i=0;i<10;i++)
  {
    add(&x,i,5);
  }
 
} 
 
void add(int** px, int n, int new_elem)
{
  int *nowa;
  nowa=(int*)malloc((n+1)*sizeof(int));
  for(j=0;j<n;j++)
  {
    nowa[j]=(*px)[j];
  }
  nowa[n]=new_elem;
 
  free(*px);
  *px=nowa;
} 
  //px to adres x z main