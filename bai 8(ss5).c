#include <stdio.h>
// H�m t�m Uoc chung lon nhat (UCLN) bang thuat to�n Euclid
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b, gcd, lcm;
    // Y�u cau nguoi dung nhap hai sa nguy�n duong
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
    // T�m UCLN
    gcd = findGCD(a, b);
    // T�nh BCNN
    lcm = (a * b) / gcd;
    printf("Boi chung nho nhat cua %d v� %d l�: %d\n", a, b, lcm);
}

