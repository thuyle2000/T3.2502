#include <stdio.h>
#include <stdlib.h>

// Function prototype : ham tinh va tra ve binh phuong cua so nguyen x
long square(int x);

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Square of %d is %ld\n", n, square(n));
}

long square(int x) {
    return x * x;
}