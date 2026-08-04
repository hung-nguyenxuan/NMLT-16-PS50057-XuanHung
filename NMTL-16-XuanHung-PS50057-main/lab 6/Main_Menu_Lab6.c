#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void chucnang1();

float tinhTrungBinh(int a[], int n){
    int tong = 0;
    int sodem = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            tong += a[i];
            sodem++;
        }
    }
    if(sodem == 0)
    {
        return -__FLT_MAX__; // số nhỏ nhất kiểu float
    }
    else
    {
        return (float)tong / sodem;
    }
}

int main()
{
    int chon;
    do
    {
        printf("+-------------------------------------------------------+\n");
        printf("|  MENU CHUONG TRINH LAB 6.                             |\n");
        printf("+-------------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong so chia het cho 3 va 5        |\n");
        printf("| 2. Tim gia tri lon nhat va nho nhat trong mang        |\n");
        printf("| 3. Sap xep mang theo thu tu giam dan                  |\n");
        printf("| 4. Ma tran binh phuong (mang 2 chieu)                 |\n");
        printf("| 5. Loc va xuat vi tri cac so le trong ma tran         |\n");
        printf("| 6. Thoat chuong trinh                                 |\n");
        printf("+-------------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 6): ");
        scanf("%d", &chon);

        switch (chon)
        {
            case 1:
                printf("Tinh trung binh tong so chia het cho 3 va 5.\n");
                chucnang1();
                break;
            case 2:
                printf("Tim gia tri lon nhat va nho nhat trong mang.\n");
                break;
            case 3:
                printf("Sap xep mang theo thu tu giam dan.\n");
                break;
            case 4:
                printf("Ma tran binh phuong (mang 2 chieu).\n");
                break;
            case 5:
                printf("Loc va xuat vi tri cac so le trong ma tran.\n");
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Loi: Chuc nang khong hop le.\n");
                printf("Ban hay chon tu 1 - 6.\n");
                break;
        }
    }
    while (chon != 6);

    return 0;
}

void chucnang1()
{
    int n = 5;
    int a[10];
    printf("Nhap 5 so nguyen:\n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    float trungBinh = tinhTrungBinh(a, n);
    if(trungBinh == -__FLT_MAX__)
    {
        printf("Khong co so nao chia het cho 3 va 5 trong mang.\n");
    }
    else
    {
        printf("Trung binh tong cac so chia het cho 3 va 5 trong mang la: %.2f\n", trungBinh);
    }
}

