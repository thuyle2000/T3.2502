#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");  // clear screen

    int a=10, b=3, c=1500;
    float f=3.141516;
    char ch='A';
    char str[]="Hello, world!";

    printf("a=%d \n", a);
    printf("b=%d \n", c);
    printf("c=%d \n\n", b);

    printf("a=[%6d] \n", a);
    printf("b=[%6d] \n", c);
    printf("c=[%6d] \n\n", b);

    printf("a=[%06d] \n", a);
    printf("b=[%06d] \n", c);
    printf("c=[%06d] \n\n", b);

    printf("a=[%-6d] \n", a);
    printf("b=[%-6d] \n", c);
    printf("c=[%-6d] \n\n", b);

    printf("f=%.2f \n", f);
    printf("ch=%c \n", ch);
    printf("str=%s \n", str);

}