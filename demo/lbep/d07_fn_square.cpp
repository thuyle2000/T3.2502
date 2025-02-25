#include <stdio.h>
#include <stdlib.h>

int square(int ); // khai bao ham tinh binh phuong cua mot so nguyen`

int main()
{
    system("cls");
    int x;
    printf("Nhap so nguyen n: ");
    scanf("%d", &x);
    printf(" Binh phuong cua %d la: %d\n", x, square(x));
    printf(" Binh phuong cua %d la: %d\n", x + 2, square(x + 2));
    printf(" Binh phuong cua %d la: %d\n", 5, square(5));
}

// viet ham tinh binh phuong cua mot so nguyen
int square(int n)
{
    int r = n * n;
    return r;
}