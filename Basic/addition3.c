#include<stdio.h>

int addition(int A,int B)

{

    int Add=0;
    Add= A+B;
    return Add;

}

int main()

{

    int No1=10,No2=12,Ans=0;
     
    Ans=addition(No1,No2);
    
    printf("addition is:%d\n",Ans);

    return 0;
}
