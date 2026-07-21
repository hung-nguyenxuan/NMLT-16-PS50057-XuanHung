#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("+-------------------------------+\n");
        printf("|  MENU CHUONG TRINH LAB 3.     |\n");
        printf("+-------------------------------+\n");
        printf("| 0. Thoat chuong trinh.        |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 3): ");
        scanf("%d",&chon);
        switch (chon)
        {
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            case 1:
                printf("Tinh hoc luc sinh vien.\n");
                break;
            case 2:
                printf("Giai phuong trinh bac 2.\n");
                break;
            case 3:
                printf("Tinh tien dien.\n");
                break;
            default:
                printf("ban hay chon 0-3.\n");
                break;
        }
    } while (chon != 0);
    return 0;
}