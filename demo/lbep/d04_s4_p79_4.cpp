#include <stdio.h>
#include <stdlib.h>
//tinh the tich hinh khoi tru
int main(){
    system("cls");
    float r, h, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);
    volume = 3.14 * r * r * h;
    printf("The volume of the cylinder is: %.2f\n", volume);
}