#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");  // clear screen
    
    // 1. Declare a variable to store the input integer
    int n1, n2;

    // 2. Ask user to input the first integer
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &n1);

    // 3. Ask user to input the second integer
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &n2);

    // 4. Print the result of bitwise AND operation
    printf("Ket qua cua phep AND: %d\n", n1 & n2);

    // 5. Print the result of bitwise OR operation
    printf("Ket qua cua phep OR: %d\n", n1 | n2);

    // 6. Print the result of bitwise XOR operation
    printf("Ket qua cua phep XOR: %d\n", n1 ^ n2);
}