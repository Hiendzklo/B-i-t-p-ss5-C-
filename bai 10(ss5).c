#include <stdio.h>

int main() {
    int number, temp, digit;
    
    // B1:Yêu cau nguoi dung nhap so nguyên
    printf("Nhap mot so nguyen bat ki: ");
    scanf("%d", &number);
    // Xu ly truong hop so âm
    if (number < 0) {
        printf("So ban nhap la so am. Chuyen thanh so duong de xu ly.\n");
        number = -number;
    }
    // B2:Ðao nguoc so de in theo thu tu
    temp = number;
    int reversed = 0;
    while (temp > 0) {
        digit = temp % 10; // Lay chu so cuoi
        reversed = reversed * 10 + digit; // Tao so nguoc
        temp /= 10; // Bo chu so cuoi
    }
    //B3: In ra tung chu so tu so da dao nguoc
    printf("Cac chu so trong so da nhap: ");
    while (reversed > 0) {
        digit = reversed % 10; // Lay chu so cuoi
        printf("%d ", digit);
        reversed /= 10; // Bo chu so cuoi
    }
    printf("\n");

}

