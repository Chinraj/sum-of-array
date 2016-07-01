#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4];
    float b;
    clrscr();
    printf("enter the numbers\n");
    scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
    b=a[1]+a[2]+a[3]+a[4];
    b=b/4;
printf("%.1f",b);
getch();
}
