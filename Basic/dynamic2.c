#include<stdio.h>
#include<stdlib.h>


int main()
{
 double *p = NULL;
 int size = 0;
  
 printf("Enter number of element that you want to allocate:\n");
 scanf("%d",&size);

 p =(double *)malloc(size * sizeof(double));
 if(p == NULL)
 {
    printf("Unable to allocate memmory\n");
    return -1;
 }
  printf("Memory gets allocated succesfully\n");
   // use of Memory
   free(p);
   return 0;
}