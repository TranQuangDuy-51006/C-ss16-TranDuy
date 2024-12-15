#include <stdio.h>

void capNhatPhanTu(int *arr, int giaTriMoi, int viTri) {
    if (viTri >= 0) {
        *(arr + viTri - 1) = giaTriMoi; 
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

int main() {
    int mang[] = {5, 10, 15, 20, 25};
    int n = sizeof(mang) / sizeof(mang[0]); 

    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    int giaTriMoi;
    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTriMoi);
    int viTriCanCapNhat;
    printf("Nhap vi tri: ");
    scanf("%d", &viTriCanCapNhat);

    capNhatPhanTu(mang, giaTriMoi, viTriCanCapNhat);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

