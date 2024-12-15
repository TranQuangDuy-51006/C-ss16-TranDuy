#include <stdio.h>


int timKiemPhanTu(int *arr, int n, int giaTriTimKiem) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == giaTriTimKiem) { 
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
	int mang[100];
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    int giaTriTimKiem;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &giaTriTimKiem);

    int viTri = timKiemPhanTu(mang, n, giaTriTimKiem);

    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", giaTriTimKiem, viTri);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", giaTriTimKiem);
    }

    return 0;
}

