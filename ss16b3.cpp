#include <stdio.h>

void tinhTong(int *a, int *b, int *kq) {
    *kq = *a + *b;
}

int main() {
    int n1 = 10, n2 = 20, ketQua;

    tinhTong(&n1, &n2, &ketQua);

    printf("%d\n", ketQua);

    return 0;
}
