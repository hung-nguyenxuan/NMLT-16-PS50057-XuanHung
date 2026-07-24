#include <stdio.h>
#include <math.h>
void KiemTraSoNguyen()
{
    float x;
}
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|           MENU CHUONG TRINH ASM.                  |\n");
        printf("+---------------------------------------------------+\n");
        printf("|           1. Kiem tra so nguyen                   |\n");
        printf("|           2. Tim uoc chung va boi chung cua 2 so  |\n");
        printf("|           3. chuong trinh tinh tien karaoke       |\n");
        printf("|           4. Tinh tien dien                       |\n");
        printf("|           5. chuc nang doi tien                   |\n");
        printf("|           6. Tinh lai suat nang hang              |\n");
        printf("|           7. Chuong trinh vay tien mua xe         |\n");
        printf("|           8. sap xep thong tin sinh vien          |\n");
        printf("|           9. Xay dung game FPOLY-LOTT             |\n");
        printf("|           10.Thoat chuong trinh                   |\n");
        printf("+---------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 10): ");
        scanf("%d",&chon);
        switch (chon)
        {
            case 1:
                printf("Kiem tra so nguyen.\n");
                KiemTraSoNguyen();
                break;
            case 2:
                printf("Tim uoc chung va boi chung cua 2 so.\n");   
                TimUocVaBoiChung();
                break;
            case 3:
                printf("chuong trinh tinh tien karaoke.\n");
                TinhTienKaraoke();
                break;
            case 4:
                printf("Tinh tien dien.\n");
                TinhTienDien();
                break;
            case 5:
                printf("chuc nang doi tien.\n");
                DoiTien();
                break;
            case 6:
                printf("Tinh lai suat nang hang.\n");
                TinhLaiSuat();
                break;
            case 7:
                printf("Chuong trinh vay tien mua xe.\n");
                VayTienMuaXe();
                break;
            case 8:
                printf("sap xep thong tin sinh vien.\n");
                SapXepThongTinSinhVien();
                break;
            case 9:
                printf("Xay dung game FPOLY-LOTT.\n");
                GameFPOLYLOTT();
                break;
            case 10:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("ban hay chon 0-10.\n");
                break;
        }
    }while (chon != 0);
    return 0;
}