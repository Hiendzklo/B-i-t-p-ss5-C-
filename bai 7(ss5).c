#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd;

    do {
        printf("Nhap so nguyen duong thu nhat: ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("So phai la so nguyen duong. Vui long nhap lai!\n");
        }
    } while (a <= 0);
    do {
        printf("Nhap so nguyen duong thu hai: ");
        scanf("%d", &b);
        if (b <= 0) {
            printf("So phai la so nguyen duong. Vui long nhap lai!\n");
        }
    } while (b <= 0);
    tempA = a;
    tempB = b;
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;
    }
    gcd = a; 
    printf("Uoc chung lon nhat cua %d và %d la: %d\n", tempA, tempB, gcd);
}

