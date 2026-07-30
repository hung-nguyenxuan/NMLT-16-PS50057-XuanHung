#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//void chucnang1();
//chuc nang 2: kiem tra nam nhuan
void chucnang2();
bool kiemtraNamNhuan(int nam);
//void chucnang2(); het
int main()
{
    int chon;
    do
    {
        printf("+-----------------------------------------------+\n");
        printf("|  MENU CHUONG TRINH LAB 5.                     |\n");
        printf("+-----------------------------------------------+\n");
        printf("| 1. Ham Tim gia tri lon nhat trong 3 so        |\n");
        printf("| 2. Ham Kiem tra Nam nhuan                     |\n");
        printf("| 3. Ham Hoan vi 2 so su dung Con tro           |\n");
        printf("| 4. Ham Kiem tra & Phan loai Tam giac          |\n");
        printf("| 5. Thoat chuong trinh                         |\n");
        printf("+-----------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 5): ");
        scanf("%d",&chon);
        switch (chon)
        {
            case 1:
                printf("Ham Tim gia tri lon nhat.\n");
                break;
            case 2:
                printf("Ham Kiem tra Nam nhuan.\n");
                chucnang2();
                break;
            case 3:
                printf("Ham Hoan vi 2 so su dung Con tro.\n");
                break;
            case 4:
                printf("Ham Kiem tra & Phan loai Tam giac.\n");
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("ban hay chon 1-5.\n");
                break;
        }   
    }while (chon != 5);

    return 0;
}

//chuc nang 2: kiem tra nam nhuan
void chucnang2()
{
    int nam;
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (kiemtraNamNhuan(nam))
    {
        printf("%d la nam nhuan.\n", nam);
    }
    else
    {
        printf("%d khong phai la nam nhuan.\n", nam);
    }
}
bool kiemtraNamNhuan(int nam)
{
    if ((nam % 400 == 0 && nam % 100 != 0) || (nam % 4 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//ket thuc chuc nang 2
