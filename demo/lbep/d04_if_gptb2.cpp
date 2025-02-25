#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//tinh nghiem cua phuong trinh bac 2: ax^2 + bx + c = 0
int main(){
    system("cls");
    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0\n");

    int a,b,c;
    printf("Nhap a: ");     scanf("%d", &a);
    printf("Nhap b: ");     scanf("%d", &b);
    printf("Nhap c: ");     scanf("%d", &c);

    double delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        double x = -b/(2.0*a);
        printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x);
    } else {
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}
