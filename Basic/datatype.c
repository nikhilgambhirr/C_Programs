#include<stdio.h>

int main()

{

    char ch ='M';
    int no =11;
    float marks =89.90f;
    double data =98.8986657;

    printf("value of ch is:%c\n",ch);
    printf("value of no is:%d\n",no);
    printf("value of marks is:%f\n",marks);
    printf("value of data is:%f\n",data);

    printf("size of character is:%d bytes\n",sizeof(ch));
    printf("size of is:%d bytes\n",sizeof(no));
    printf("size of float is:%d bytes\n",sizeof(marks));
    printf("size of double is:%d bytes\n",sizeof(data));

    return 0;

}






