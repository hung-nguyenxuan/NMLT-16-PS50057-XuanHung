#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Struct quan ly sinh vien
struct SinhVien {
    char ten[50];
    float diem;
    char hocLuc[20];
};

//khai báo các hàm chức năng
void kiemTraSoNguyen();
void timUocChungBoiChung();
void tinhTienKaraoke();
void tinhTienDien();
void chucNangDoiTien();
void tinhLaiSuatNganHang();
void vayTienMuaXe();
void sapXepThongTinSinhVien();
void xayDungGameFPOLYLOTT();

int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH ASM 2               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Kiem tra so nguyen                             |\n");
        printf("| 2. Tim uoc chung va boi chung cua 2 so            |\n");
        printf("| 3. Chuong trinh tinh tien karaoke                 |\n");
        printf("| 4. Tinh tien dien                                 |\n");
        printf("| 5. Chuc nang doi tien                             |\n");
        printf("| 6. Tinh lai suat ngan hang                        |\n");
        printf("| 7. Chuong trinh vay tien mua xe                   |\n");
        printf("| 8. Sap xep thong tin sinh vien                    |\n");
        printf("| 9. Xay dung game FPOLY-LOTT                       |\n");
        printf("| 10. Thoat chuong trinh                            |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-10): ");
        scanf("%d", &chon);
        
        // Loai bo ky tu xuong dong sau khi dung scanf
        while(getchar() != '\n');

        switch (chon)
        {
            case 1:
                printf("Kiem tra so nguyen.\n");
                kiemTraSoNguyen();
                break;
            case 2:
                printf("Tim uoc chung va boi chung cua 2 so.\n");
                timUocChungBoiChung();
                break;
            case 3:
                printf("Chuong trinh tinh tien karaoke.\n");
                tinhTienKaraoke();
                break;
            case 4:
                printf("Tinh tien dien.\n");
                tinhTienDien();
                break;
            case 5:
                printf("Chuc nang doi tien.\n");
                chucNangDoiTien();
                break;
            case 6:
                printf("Tinh lai suat ngan hang.\n");
                tinhLaiSuatNganHang();
                break;
            case 7:
                printf("Chuong trinh vay tien mua xe.\n");
                vayTienMuaXe();
                break;
            case 8:
                printf("Sap xep thong tin sinh vien.\n");
                sapXepThongTinSinhVien();
                break;
            case 9:
                printf("Xay dung game FPOLY-LOTT.\n");
                xayDungGameFPOLYLOTT();
                break;
            case 10:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Loi: Chuc nang khong hop le.\n");
                printf("Ban hay chon tu 1 - 10.\n");
                break;
        }
    }
    while (chon != 10);

    return 0;
}

//chức năng và hàm 

// chức năng 1
void kiemTraSoNguyen()
{
    float x;
    printf("Nhap vao mot so bat ky: ");
    scanf("%f", &x);
    while(getchar() != '\n');

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
    } else {
        printf("\n=> %g khong phai la so nguyen.\n", x);
    }
}
// xg chức năng 1

// chức năng 2
void timUocChungBoiChung()
{
    int a, b;
    printf("Nhap vao so thu nhat (nguyen duong): ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai (nguyen duong): ");
    scanf("%d", &b);
    while(getchar() != '\n');
    
    if(a <= 0 || b <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return;
    }
    
    int a1 = a, b1 = b;
    while (a1 != b1) {
        if (a1 > b1) a1 -= b1;
        else b1 -= a1;
    }
    int ucln = a1;
    int bcnn = (a * b) / ucln;
    printf("\n=> Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    printf("=> Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);
}
// xog chức năng 2

// chức năng 3
void tinhTienKaraoke()
{
    int gioBatDau, gioKetThuc;
    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &gioKetThuc);
    while(getchar() != '\n');
    
    if (gioBatDau < 12 || gioBatDau > 23 || gioKetThuc < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc) {
        printf("\n=> Gio nhap khong hop le! Vui long nhap gio trong khoang 12 den 23 va gio bat dau < gio ket thuc.\n");
        return;
    }
    
    int soGio = gioKetThuc - gioBatDau;
    float tongTien = 0;
    int giaGioDau = 150000;
    
    if (soGio <= 3) {
        tongTien = soGio * giaGioDau;
    } else {
        tongTien = 3 * giaGioDau + (soGio - 3) * giaGioDau * 0.7;
    }
    
    // Giam gia 10% neu bat dau vao khung gio 14h - 17h
    if (gioBatDau >= 14 && gioBatDau <= 17) {
        tongTien = tongTien * 0.9;
        printf("\n(Quy khach duoc giam 10%% vi bat dau vao Khung gio vang!)\n");
    }
    
    printf("\n=> Tong thoi gian hat: %d gio\n", soGio);
    printf("=> So tien khach phai tra la: %.0f VNĐ\n", tongTien);
}
// xog chức năng 3

// chức năng 4
void tinhTienDien()
{
    float kwh;
    printf("Nhap vao so dien (kWh) da tieu thu: ");
    scanf("%f", &kwh);
    while(getchar() != '\n');
    
    if (kwh < 0) {
        printf("\n=> So dien khong hop le!\n");
        return;
    }
    
    float tienDien = 0;
    if (kwh <= 50) {
        tienDien = kwh * 1678;
    } else if (kwh <= 100) {
        tienDien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tienDien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }
    
    printf("\n=> So dien tieu thu: %.0f kWh\n", kwh);
    printf("=> So tien dien (chua VAT): %.0f VNĐ\n", tienDien);
    printf("=> Tong tien phai tra (gom 8%% VAT): %.0f VNĐ\n", tienDien * 1.08);
}
// xog chức năng 4

// chức năng 5
void chucNangDoiTien()
{
    int soTien;
    printf("Nhap so tien can doi (don vi: VNĐ): ");
    scanf("%d", &soTien);
    while(getchar() != '\n');
    
    if(soTien < 1000) {
        printf("\n=> So tien phai tu 1000 VNĐ tro len.\n");
        return;
    }
    
    int menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int soTo[9] = {0};
    
    printf("\n=== KET QUA DOI TIEN ===\n");
    for (int i = 0; i < 9; i++) {
        soTo[i] = soTien / menhGia[i];
        if (soTo[i] > 0) {
            printf("- %d to %d VNĐ\n", soTo[i], menhGia[i]);
        }
        soTien = soTien % menhGia[i];
    }
    
    if (soTien > 0) {
        printf("- Con du %d VNĐ le khong the doi do khong co menh gia phu hop!\n", soTien);
    }
}
// xog chức năng 5

// chức năng 6
void tinhLaiSuatNganHang()
{
    float tienVay;
    printf("Nhap so tien muon vay (VNĐ): ");
    scanf("%f", &tienVay);
    while(getchar() != '\n');
    
    if (tienVay <= 0) {
        printf("\n=> So tien vay khong hop le.\n");
        return;
    }
    
    float tienGocTraHangThang = tienVay / 12;
    float tienLai, tienPhaiTraHangThang;
    
    printf("\n=== CHI TIET TRA NO TRONG 12 THANG (LAI SUAT 5%%) ===\n");
    printf("Ky han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
    printf("--------------------------------------------------------------------------------------\n");
    
    for (int i = 1; i <= 12; i++) {
        tienLai = tienVay * 0.05; 
        tienPhaiTraHangThang = tienGocTraHangThang + tienLai;
        tienVay -= tienGocTraHangThang;
        if (tienVay < 1) tienVay = 0;
        
        printf("%d\t%.0f\t\t%.0f\t\t%.0f\t\t\t%.0f\n", 
            i, tienLai, tienGocTraHangThang, tienPhaiTraHangThang, tienVay);
    }
}
// xog chức năng 6

// chức năng 7
void vayTienMuaXe()
{
    float giaXe = 50000000;
    float phanTramTraTruoc;
    
    printf("\n=== CHUONG TRINH VAY MUA XE TRA GOP ===\n");
    printf("Gia tri xe mac dinh: %.0f VNĐ\n", giaXe);
    printf("Ban co the tra truoc bao nhieu phan tram (0-100)?: ");
    scanf("%f", &phanTramTraTruoc);
    while(getchar() != '\n');
    
    if (phanTramTraTruoc < 0 || phanTramTraTruoc > 100) {
        printf("\n=> Phan tram khong hop le!\n");
        return;
    }
    
    float soTienTraTruoc = giaXe * (phanTramTraTruoc / 100);
    float tienVay = giaXe - soTienTraTruoc;
    
    float tienGocHangThang = tienVay / 24;
    float laiSuatHangThang = 0.072 / 12; // 7.2% một năm cố định
    
    printf("\n=> So tien ban tra truoc la: %.0f VNĐ\n", soTienTraTruoc);
    printf("=> So tien can vay lai la: %.0f VNĐ\n", tienVay);
    
    if (tienVay == 0) {
        printf("\n=> Ban da tra du tien, khong can vay them!\n");
        return;
    }
    
    printf("\n=== CHI TIET TRA NO TRONG 24 THANG (LAI SUAT 7.2%%/NAM) ===\n");
    printf("Ky han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");
    printf("--------------------------------------------------------------------------------------\n");
    
    for (int i = 1; i <= 24; i++) {
        float tienLai = tienVay * laiSuatHangThang;
        float tienPhaiTra = tienGocHangThang + tienLai;
        tienVay -= tienGocHangThang;
        if (tienVay < 1) tienVay = 0;
        
        printf("%d\t%.0f\t\t%.0f\t\t%.0f\t\t\t%.0f\n", 
            i, tienLai, tienGocHangThang, tienPhaiTra, tienVay);
    }
}
// xog chức năng 7

// chức năng 8
void sapXepThongTinSinhVien()
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    while(getchar() != '\n');
    
    if(n <= 0) {
        printf("\n=> So luong sinh vien khong hop le!\n");
        return;
    }
    
    struct SinhVien sv[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ten sinh vien: ");
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';
        
        printf("Diem sinh vien: ");
        scanf("%f", &sv[i].diem);
        while(getchar() != '\n');
        
        // Phan loai hoc luc
        if (sv[i].diem >= 9) strcpy(sv[i].hocLuc, "Xuat sac");
        else if (sv[i].diem >= 8) strcpy(sv[i].hocLuc, "Gioi");
        else if (sv[i].diem >= 6.5) strcpy(sv[i].hocLuc, "Kha");
        else if (sv[i].diem >= 5) strcpy(sv[i].hocLuc, "Trung binh");
        else strcpy(sv[i].hocLuc, "Yeu");
    }
    
    // Sap xep giam dan theo diem (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                struct SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
    
    printf("\n=== DANH SACH SINH VIEN SAU KHI SAP XEP GIAM DAN ===\n");
    for (int i = 0; i < n; i++) {
        printf("Ten: %-20s | Diem: %-5.1f | Hoc luc: %s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
    }
}
// xog chức năng 8

// chức năng 9
void xayDungGameFPOLYLOTT()
{
    int so1, so2;
    printf("\n=== CHAO MUNG DEN VOI FPOLY-LOTT ===\n");
    printf("Nhap vao so thu nhat (1-15): ");
    scanf("%d", &so1);
    printf("Nhap vao so thu hai (1-15): ");
    scanf("%d", &so2);
    while(getchar() != '\n');
    
    if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15) {
        printf("\n=> So ban nhap khong nam trong khoang 1-15!\n");
        return;
    }
    
    // Khoi tao seed cho random
    srand(time(NULL));
    int kq1 = 1 + rand() % 15;
    int kq2 = 1 + rand() % 15;
    
    printf("\n=> Ket qua quay so hom nay la: %d va %d\n", kq1, kq2);
    
    int count = 0;
    // Kiem tra tung so nguoi choi nhap voi ket qua
    if (so1 == kq1 || so1 == kq2) count++;
    if (so2 == kq1 || so2 == kq2) count++;
    
    // Truong hop nguoi dung nhap 2 so giong nhau va ket qua ve 2 so giong nhau
    if (so1 == so2 && kq1 != kq2) {
        count = (so1 == kq1 || so1 == kq2) ? 1 : 0;
    }
    
    if (count == 2) {
        printf("\n=> Xin chuc mung! Ban da trung Giai Nhat!\n");
    } else if (count == 1) {
        printf("\n=> Xin chuc mung! Ban da trung Giai Nhi!\n");
    } else {
        printf("\n=> Rat tiec, ban da khong trung thuong. Chuc ban may man lan sau!\n");
    }
}
// xog chức năng 9