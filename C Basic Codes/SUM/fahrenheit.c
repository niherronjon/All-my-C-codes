#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
if(a>b)
{
    while(a>=b)
    {
        printf("%.2f\n",a);
        a=a-2.5;
    }
}
else
{
    while(b>=a)
    {
        printf("%.2f\n",a);
        a=a+1.5;
    }
}
    return 0;

}