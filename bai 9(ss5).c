#include <stdio.h>

int main() {
    int choice;
    float num1 = 0, num2 = 0, num3 = 0;
    int numbersEntered = 0; // Co kiem tra xem da nhap so chua
    
    do {
        // Hien thi menu
        printf("\n===== MENU =====\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%f", &num1);
                printf("Nhap so thu hai: ");
                scanf("%f", &num2);
                printf("Nhap so thu ba: ");
                scanf("%f", &num3);
                numbersEntered = 1; // Ðanh dau da nhap so
                printf("Ban da nhap: %.2f, %.2f, %.2f\n", num1, num2, num3);
                break;
            case 2:
                if (numbersEntered) {
                    float sum = num1 + num2 + num3;
                    printf("Tong 3 so la: %.2f\n", sum);
                } else {
                    printf("Ban chua nhap so. Vui long chon muc 1 de nhap so.\n");
                }
                break;
            case 3:
                if (numbersEntered) {
                    float average = (num1 + num2 + num3) / 3;
                    printf("Trung binh cong 3 so la: %.2f\n", average);
                } else {
                    printf("Ban chua nhap so. Vui long chon muc 1 de nhap so.\n");
                }
                break;
            case 4:
                if (numbersEntered) {
                    float min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
                    printf("So nho nhat la: %.2f\n", min);
                } else {
                    printf("Ban chua nhap so. Vui long chon muc 1 de nhap so.\n");
                }
                break;
            case 5:
                if (numbersEntered) {
                    float max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
                    printf("So lon nhat la: %.2f\n", max);
                } else {
                    printf("Ban chua nhap so. Vui long chon muc 1 de nhap so.\n");
                }
                break;
            case 6:
                printf("Chuong trinh ket thuc. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6); // Lap lai cho den khi chon thoát
}

