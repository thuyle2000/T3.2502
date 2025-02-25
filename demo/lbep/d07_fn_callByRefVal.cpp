#include <stdio.h>
#include <stdlib.h>

//demo call-by-value
void fn(int x, int y);

//demo call-by-reference
void fn2(int *x, int *y);

int main()
{
    system("cls");
    int x = 10, y = 20;

    printf("main(): x = %d, y=%d\n", x,y);

    fn(x,y);
    printf("after call fn(x,y): x = %d, y=%d\n", x,y);

    fn2(&x, &y);
    printf("after call fn2(&x, &y): x = %d, y=%d\n", x,y);
}

//call-by-value
void fn(int x, int y)
{
    int temp =x;
    x = y;
    y = temp;
    printf(" >> fn(): x = %d, y=%d \n", x,y);
}


//call-by-reference
void fn2(int *x, int *y)
{
    int temp =*x;
    *x = *y;
    *y = temp;
    printf(" >> fn2(): x = %d, y=%d \n", *x, *y);
}
