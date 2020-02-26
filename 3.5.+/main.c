#include <stdio.h>
int main (void){
    float x1,x2,x3,x4,x5,x6,x7,x8,y1,y2,y3,y4,y5,y6,y7,y8,w1,w2,h1,h2,S,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10;
    scanf ("%f%f%f%f%f%f%f%f",&x1,&y1,&w1,&h1,&x2,&y2,&w2,&h2);
    x3=x1+w1; y3=y1;
    x4=x2+w2; y4=y2;
    x5=x1+w1; y5=y1+h1;
    x6=x2+w2; y6=y2+h2;
    x7=x1; y7=y1+h1;
    x8=x2; y8=y2+h2;
    A1=(x4-x2)*(y8-y2);
    A2=(x4-x2)*(y5-y2);
    A3=(x5-x2)*(y8-y2);
    A4=(x5-x2)*(y5-y2);
    A5=(x4-x1)*(y6-y4);
    A6=(x2-x1)*(y5-y2);
    A7=(x4-x2)*(y6-y1);
    A8=(x4-x1)*(y5-y4);
    A9=(x3-x2)*(y8-y3);
    A10=(x3-x1)*(y5-y3);
    if (x1<=x2 && x2<=x3 && y1<=y2 && y2<=y7)
        if (x1<=x6 && x6<=x3)
            if (y1<=y6 && y6<=y7)
                printf("%.2f",A1);
            else
                printf("%.2f",A2);
        else
            if(y1<=y6 && y6<=y7)
                printf("%.2f",A3);
            else
                printf("%.2f",A4);
    else ;
    if (x1<=x4 && x4<=x3 && y3<=y4 && y4<=y5)
        if (x1>x8 && x8>x3)
            if (y3<=y8 && y8<=y5)
                printf("%.2f",A5);
            else
                printf("%.2f",A6);
    else ;
    if (x1<=x6 && x6<=x3 && y1<=y6 && y6<=y7)
        if (x1<=x2 && x2<=x3)
            if (y1>y2 && y2>y7)
                printf("%.2f",A7);
        else
            if (y1>y2 && y2>y7)
                printf("%.2f",A8);
    else ;
    if (x1<=x8 && x8<=x3 && y3<=y8 && y8<=y5)
        if (x1>x4 && x4>x3)
            if (y3>y4 && y4>y5)
                printf("%.2f",A9);
    else ;
    if (x2<=x1 && x1<=x4 && y4<=y1 && y1<=y6 && x2<=x5 && x5<=x4 && y4<=y5 && y5<=y6)
        printf("%.2f",A10);
    else ;
return 0;
}





