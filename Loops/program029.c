#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if(( iNo % iCnt) == 0)
        {
        
            break;
        }
    }                       // bFlag n use karta ha program type kela ahe tyat prime  number ahe ka nay te sangt 
    if( iCnt> (iNo/2))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}