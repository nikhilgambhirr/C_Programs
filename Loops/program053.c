#include<stdio.h>

int main()
{

    int Arr[5];
    int iCnt = 0;

     printf("Enter the elements : \n");
     for (iCnt = 0; iCnt < 5; iCnt++)
     {
       scanf("%d",&Arr[iCnt]);  // asl kraych nay  
     }                          // ha loop cha program ahe hard coted value cha

     

     printf(" elements form the array are : \n");

     for(iCnt= 0; iCnt<5; iCnt++)
     {
        printf("%d\n",Arr[iCnt]);
     }
       



    return 0;

    

}