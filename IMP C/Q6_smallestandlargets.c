#include<stdio.h>
#include<math.h>
int main ()
{
  int array[]={ 10,20,304,05,06};
  int size= sizeof(array) / sizeof(array[0]);

  int largest = array[0];
  int i, smallest=array[0];

  for ( i = 1; i < size; i++)
  {
    largest=fmax(largest,array[i]);
    smallest=fmin(smallest,array[i]);

  }
  
  printf("Largest is  :%d\n",largest);
  printf("smallest is :%d",smallest);

  return 0;
  
  }