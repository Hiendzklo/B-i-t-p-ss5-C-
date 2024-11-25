#include <stdio.h>

int main() {
    int target = 42;  
    int userInput;

    printf("Hay doan so nguyen (gia tri nam trong khoang 0 den 100):\n");
    do {
        printf("Nhap mot so: ");
        scanf("%d", &userInput);
        if (userInput < target) {
            printf("So ban nhap nho hon so can tim. Thu lai!\n");
        } else if (userInput > target) {
            printf("So ban nhap lon hon so can tim. Thu lai!\n");
        }
    } while (userInput != target); 
    printf("Chuc mung! Ban da doan dung so can tim la %d.\n", target);
}

