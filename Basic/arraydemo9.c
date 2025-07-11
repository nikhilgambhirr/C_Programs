#include<stdio.h>
int main()
{

  int arr[3]={10,20,30};
  double brr[3]={10.0000,20.0000,30.0000};
 
  printf("%d \n",arr);
  printf("%d \n",&arr);
  
  printf("%d bytes \n",sizeof(&arr));
  printf("%d bytes \n",sizeof(arr));
 
  printf("%d \n",brr);
  printf("%d \n",&brr);

  printf("%d bytes \n",sizeof(&brr));  //8bytes
  printf("%d bytes \n",sizeof(brr));   //24byte

  return 0;

}