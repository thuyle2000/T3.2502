#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    float breath, height, area, perimeter;
    printf("Enter the breath of the rectangle: ");
    scanf("%f", &breath);
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    area = breath * height;
    perimeter = 2 * (breath + height);
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
}