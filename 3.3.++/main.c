#include <math.h>
int main (void){
    float x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    if (sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))==sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4)) && sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))==sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1)))
        if (sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))==sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)))
            if (((x2-x1)*(x3-x2))+((y2-y1)*(y3-y2))==0)
                printf("Square: true\nRectangle: true\nParallelogram: true\nDiamond: true");
            else
                printf("Square: false\nRectangle: false\nParallelogram: true\nDiamond: true");
        else
            if (((x2-x1)*(x3-x2))+((y2-y1)*(y3-y2))==0)
                printf("Square: false\nRectangle: true\nParallelogram: true\nDiamond: false");
            else
                printf("Square: false\nRectangle: false\nParallelogram: true\nDiamond: false");
    else
        printf("Square: false\nRectangle: false\nParallelogram: false\nDiamond: false");
return 0;
}

