#include <stdio.h>
int main(){
    int a=10, b=3;
    float c = a/b;

    printf("a/b = %f \n", c); 
    printf("%d/%d = %f \n", a, b, c);
    printf("%d/%d = %f \n", a, b, (int)c);
    printf("%d/%d = %f \n", a, b, (float)a/b);
}