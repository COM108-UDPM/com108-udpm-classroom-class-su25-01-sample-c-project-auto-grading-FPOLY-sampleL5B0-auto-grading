#include <stdio.h>


int main() {
    int so1, so2;
    int Tong;

    // Nhập vào 2 số từ người dùng
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap vao so thu hai: ");
    scanf("%d", &so2);

    Tong = so1 + so2;

    // Hiển thị kết quả
    printf("Tong hai so la: %d\n", Tong);

    return 0;
}
