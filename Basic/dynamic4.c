#include<stdio.h>
#include<stdlib.h>

struct Demo
{
    int no;
    float f;

};
int main()
{
    struct Demo  obj;   //static
    struct Demo *p = NULL;
     
    p = (struct Demo *)malloc(1 * sizeof(struct Demo));    //dynamic
    if(p == NULL)
    {
        printf("unable to allocate the memory\n");
    
         return -1;
   }
        printf("succesfully memory gets allocated");

        obj.no = 11;
        p->no = 11;

        free(P);

        return 0;
}
     