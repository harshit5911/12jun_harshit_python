#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("1.addition,\n2.subtraction,\n3.multiplication,\n4.divison,\n5.modulo");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
        printf("enter the value of addition %d",a+b);
        break;
        case 2:
        printf("enter the value of subtraction %d",a-b);
        break;
        case 3:
        printf("enter the value of multiplication %d",a*b);
        break;
        case 4:
        printf("enter the value of divison %d",a/b);
        break;
        case 5:
        printf("enter the number of modulo %d",a%b);
        break;
    }
}
