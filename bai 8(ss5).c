#include <stdio.h>
// Hàm tìm Uoc chung lon nhat (UCLN) bang thuat toán Euclid
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
    // Yêu cau nguoi dung nhap hai sa nguyên duong
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
    // Tìm UCLN
    gcd = findGCD(a, b);
    // Tính BCNN
    lcm = (a * b) / gcd;
    printf("Boi chung nho nhat cua %d và %d là: %d\n", a, b, lcm);
}

