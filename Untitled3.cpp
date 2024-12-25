#include <stdio.h>
int tinhGiaiThua(int n) {
    int giaiThua = 1;
    for (int i = 1; i <= n; ++i) {
        giaiThua *= i;
    }
    return giaiThua;
}
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    int ketQua = tinhGiaiThua(num);
    printf("Giai thua cua %d la: %d\n", num, ketQua);
    return 0;
}

