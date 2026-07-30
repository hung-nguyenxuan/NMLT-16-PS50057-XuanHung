#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//void chucnang1();
void chucnang2();
int main()
{
    int chon;
    do
    {
        printf("+-----------------------------------------------+\n");
        printf("|  MENU CHUONG TRINH LAB 5.                     |\n");
        printf("+-----------------------------------------------+\n");
        printf("| 1. Hàm Tìm giá trị lớn nhất trong 3 số        |\n");
        printf("| 2. Hàm Kiểm tra Năm nhuận                     |\n");
        printf("| 3. Hàm Hoán vị 2 số sử dụng Con trỏ           |\n");
        printf("| 4. Hàm Kiểm tra & Phân loại Tam giác          |\n");
        printf("| 5. Thoát chương trình                         |\n");
        printf("+-----------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 5): ");
        scanf("%d",&chon);
        switch (chon)
        {
            case 1:
                printf("Hàm Tìm giá trị lớn nhất.\n");
                break;
            case 2:
                printf("Hàm Kiểm tra Năm nhuận.\n");
                chucnang2();
                break;
            case 3:
                printf("Hàm Hoán vị 2 số sử dụng Con trỏ.\n");
                break;
            case 4:
                printf("Hàm Kiểm tra & Phân loại Tam giác.\n");
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

//chức năng 2: kiểm tra năm nhuậnq
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
//kết thức chức năng 2


