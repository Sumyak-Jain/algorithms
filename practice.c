//program for even and odd
#include <stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");

    }
    return 0;
}
//program for largest of three
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("%d is largest",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("%d is largest",b);

    }
    else if((c>a)&&(c>b))
    {
        printf("%d is largest",c);

    }
     else
    {
        printf("all are equal");

    }
    return 0;
}

