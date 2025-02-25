#include <stdio.h>
#include <stdlib.h>
//doi cm -> inch va feet
int main(){
    system("cls");
    float n, inches, feet;
    printf("enter a number (cm): ");
    scanf("%f", &n);
    inches = n /2.54;
    feet = inches /12;
    printf("%.2f cm is %.2f inches \n", n, inches);
    printf("%.2f cm is %.2f feet \n", n, feet);
}