#include <stdio.h>
#include <math.h>
// Tính trung bình tổng các số chia hết cho 2 trong khoảng từ min đến max
void TinhTrungBinh()
{
    int min, max;
    printf("nhap min: ");
    scanf("%d", &min);
    printf("nhap max: ");
    scanf("%d", &max);
    if (min > max)
    {
        printf("min phai nho hon max.\n");
        return;
    }
    int tong = 0, biendem = 0;
    for(int i = min; i<=max; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
            biendem++;
        }
    }
    if (biendem == 0)
    {
        printf("Khong co so nao chia het cho 2 trong khoang [%d, %d].\n", min, max);
    }
    else
    {
        float trungbinh = (float)tong / biendem;
        printf("Trung binh tong cac so chia het cho 2 la: %.2f\n", trungbinh);
    }

}
//kiểm tra số nguyên tố
void KiemTraSoNguyenTo()
{
    float x;
    printf("Nhap vao mot so bat ky: ");
    scanf("%f", &x);

    if (x == (int)x) {
        printf("\n=> %g la so nguyen.\n", x);
        int n = (int)x;

        int isPrime = 1; 
        if (n < 2) {
            isPrime = 0; 
        } else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }
        
        if (isPrime == 1) {
            printf("=> %d la so nguyen to.\n", n);
        } 
        else {
            printf("=> %d khong phai la so nguyen to.\n", n);
        }
    }
}
//số chính phương
void kiemTraSoChinhPhuong() {
    int n;
    printf("--- KIEM TRA SO CHINH PHUONG ---\n");
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("=> %d khong phai la so chinh phuong.\n", n);
        return; 
    }

    int sqr = sqrt(n);

    if (sqr * sqr == n) {
        printf("=> %d la so chinh phuong.\n", n);
    } else {
        printf("=> %d khong phai la so chinh phuong.\n", n);
    }
}
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|            MENU CHUONG TRINH LAB 4.               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 4): ");
        scanf("%d",&chon);
        switch (chon)
        {
            case 1:
                printf("Tinh trung binh tong cac so chia het cho 2.\n");
                TinhTrungBinh();
                break;
            case 2:
                printf("Kiem tra so nguyen to.\n");
                KiemTraSoNguyenTo();
                break;
            case 3:
                printf("Kiem tra so chinh phuong.\n");
                kiemTraSoChinhPhuong();
                break;
            case 4:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("ban hay chon 1-4.\n");
                break;
        }
    }while (chon != 0);
}