#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

struct SinhVien mangSV[100];
int n = 0;

//khai báo các hàm chức năng
void chucnang1();
void chucnang2();
void chucnang3();
void chucnang4();

void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);

int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("| HỆ THỐNG QUẢN LÝ SINH VIÊN (LAB 8)                |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhập và Xuất danh sách sinh viên               |\n");
        printf("| 2. Sắp xếp sinh viên theo điểm TB tăng dần        |\n");
        printf("| 3. Tìm kiếm sinh viên theo Mã số sinh viên (MSSV) |\n");
        printf("| 4. Xuất danh sách sinh viên đạt Học bổng (>= 8.0) |\n");
        printf("| 5. Thoát chương trình                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin mời chọn chức năng (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
            case 1:
                printf("Nhap va Xuat danh sach sinh vien.\n");
                chucnang1();
                break;
            case 2:
                printf("Sap xep sinh vien theo diem TB tang dan.\n");
                chucnang2();
                break;
            case 3:
                printf("Tim kiem sinh vien theo Ma so sinh vien (MSSV).\n");
                chucnang3();
                break;
            case 4:
                printf("Xuat danh sach sinh vien dat Hoc bong (>= 8.0).\n");
                chucnang4();
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Loi: Chuc nang khong hop le.\n");
                printf("Ban hay chon tu 1 - 5.\n");
                break;
        }
    }
    while (chon != 5);

    return 0;
}

//chức năng và hàm 
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n)
{
    printf("Nhap so luong sinh vien n: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ma so sinh vien (MSSV): ");
        scanf("%s", mangSV[i].mssv);
        
        getchar(); // clear newline left by scanf
        printf("Ho va ten (tenSV): ");
        fgets(mangSV[i].tenSV, 50, stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = 0; // xoa ky tu newline

        printf("Nganh hoc (nganhHoc): ");
        fgets(mangSV[i].nganhHoc, 50, stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = 0;
        
        printf("Diem trung binh (diemTB): ");
        scanf("%f", &mangSV[i].diemTB);
    }

    printf("\n--- Danh sach sinh vien ---\n");
    printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for(int i = 0; i < *n; i++)
    {
        printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void chucnang1()
{
    nhapXuatSinhVien(mangSV, &n);
}

// xg chức năng 1

void sapXepSinhVien(struct SinhVien mangSV[], int n)
{
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(mangSV[i].diemTB > mangSV[j].diemTB)
            {
                struct SinhVien temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }

    printf("\n--- Danh sach sinh vien sau khi sap xep diem TB tang dan ---\n");
    printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for(int i = 0; i < n; i++)
    {
        printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void chucnang2()
{
    if (n == 0) {
        printf("Danh sach trong! Vui long nhap danh sach o chuc nang 1.\n");
        return;
    }
    sapXepSinhVien(mangSV, n);
}
//xog chức năng 2

//chức năng 3
void timKiemSinhVien(struct SinhVien mangSV[], int n)
{
    char mssvTim[50];
    int found = 0;
    printf("Nhap ma so sinh vien (MSSV) can tim: ");
    scanf("%s", mssvTim);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(mangSV[i].mssv, mssvTim) == 0)
        {
            if (found == 0) {
                printf("\n--- Thong tin sinh vien tim thay ---\n");
            }
            printf("MSSV: %s\n", mangSV[i].mssv);
            printf("Ho va Ten: %s\n", mangSV[i].tenSV);
            printf("Nganh Hoc: %s\n", mangSV[i].nganhHoc);
            printf("Diem TB: %.2f\n", mangSV[i].diemTB);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Khong tim thay sinh vien co MSSV nay!\n");
    }
}

void chucnang3()
{
    if (n == 0) {
        printf("Danh sach trong! Vui long nhap danh sach o chuc nang 1.\n");
        return;
    }
    timKiemSinhVien(mangSV, n);
}
// xog chức năng 3

//chuc năng 4
void xuatHocBong(struct SinhVien mangSV[], int n)
{
    int found = 0;
    printf("\n--- Danh sach sinh vien dat Hoc bong (Diem TB >= 8.0) ---\n");
    printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va Ten", "Nganh Hoc", "Diem TB");
    for(int i = 0; i < n; i++)
    {
        if(mangSV[i].diemTB >= 8.0)
        {
            printf("%-15s %-25s %-20s %-10.2f\n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Khong co sinh vien nao dat diem >= 8.0 de nhan hoc bong.\n");
    }
}

void chucnang4()
{
    if (n == 0) {
        printf("Danh sach trong! Vui long nhap danh sach o chuc nang 1.\n");
        return;
    }
    xuatHocBong(mangSV, n);
}
//xog chức năng 4
