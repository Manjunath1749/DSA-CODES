#include<stdio.h>
void sum(int *a,int *b,int *c);
int main()
{
    int a,b,c;
    printf("Enter the angles of triangles\n");
    scanf("%d%d%d",&a,&b,&c);
    sum(&a,&b,&c);

}
void sum(int *a,int *b,int *c)
{
    int total;
    total=(*a+*b+*c);
    if(total==180)
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
}
