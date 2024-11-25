#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n=== CALCULATOR ===\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%f", &num1);
                printf("Nhap so thu hai: ");
                scanf("%f", &num2);
                result = num1 + num2;
                printf("Tong: %.2f\n", result);
                break;
            case 2:
                printf("Nhap so thu nhat: ");
                scanf("%f", &num1);
                printf("Nhap so thu hai: ");
                scanf("%f", &num2);
                result = num1 - num2;
                printf("Hieu: %.2f\n", result);
                break;
            case 3:
                printf("Nhap so thu nhat: ");
                scanf("%f", &num1);
                printf("Nhap so thu hai: ");
                scanf("%f", &num2);
                result = num1 * num2;
                printf("Tich: %.2f\n", result);
                break;
            case 4:
                printf("Nhap so thu nhat: ");
                scanf("%f", &num1);
                printf("Nhap so thu hai: ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Thuong: %.2f\n", result);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop li. Hay chon lai!\n");
                break;
        }
    } while (choice != 5); 
}

