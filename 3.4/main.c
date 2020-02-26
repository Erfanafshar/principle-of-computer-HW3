#include <stdio.h>
int main (void){
    int n , a1 , a2 , a3 , a4 , a5;
    scanf("%d",&n);
    a1=n%10;
    n=(n-a1)/10;
    a2=n%10;
    n=(n-a2)/10;
    a3=n%10;
    n=(n-a3)/10;
    a4=n%10;
    n=(n-a4)/10;
    a5=n%10;
    if (n>9 || n==0)
        printf("Error");
    else
        if (a1==a5 && a2==a4)
            printf("True");
        else
            printf("False");
   return 0;
}
