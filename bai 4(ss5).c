#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("So nhap khong hop li. Hay nhap so tu 1 den 10!\n");
        }
    } while (n < 1 || n > 10); 
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

