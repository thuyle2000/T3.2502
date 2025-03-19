#include <stdio.h>
#include <stdlib.h>
/*
 Function prototype : ham tinh va tra ve
 dien tich, chu vi cua hinh tron co ban kinh r
*/
void circle(float r, float &area, float &perimeter);

int main(){
    system("cls");
    float r, a, p;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    circle(r, a, p);
    printf("Area of the circle is %.2f\n", a);
    printf("Perimeter of the circle is %.2f\n", p);
}

void circle(float r, float &area, float &perimeter) {
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
}