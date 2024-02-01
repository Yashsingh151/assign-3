#include <stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("enter x1,y1,x2,y2,x3,y3");
    scanf("%d %d %d %d %d %d ",&x1,&y1,&x2,&y2,&x3,&y3);
    if ((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2))
    printf("given points are collinear");
    else
    printf("given points are not collinear");
    return 0;
}