#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b){
     printf("given sides can form a triangle");}
    else {
    printf("given sides cannot form sides of triangle");}
    return 0;
    
}