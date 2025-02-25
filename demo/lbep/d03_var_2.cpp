#include <stdio.h>
int main() {
    int principal, period;
    float rate, si;

    printf("Enter principal: ");
    scanf("%d", &principal);

    printf("Enter period (years): ");
    scanf("%d", &period);

    printf("Enter rate: ");
    scanf("%f", &rate);

    si = principal * period * rate / 100;

    printf("=> Simple Interest: %.2f \n", si);
}