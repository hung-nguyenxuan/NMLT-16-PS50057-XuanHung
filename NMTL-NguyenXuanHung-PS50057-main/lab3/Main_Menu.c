#include <stdio.h>
#include <math.h>
void GiaiPTB2()
{
    int a, b, c;
    float x1, x2, delta;
    printf("Nhap a,b,c: ");
    scanf("%d%d%d", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    if (delta==0)
    {
        x1 =(-(float)b) / (2*a);
        printf("Phuong trinh co nghiem kep x1=%g", x1);
    }
    else if (delta>0)
    {
        x1 = (-(float)b + sqrt(delta)) / (2*a);
        x2 = (-(float)b - sqrt(delta)) / (2*a);
        printf("Phuong trinh %dx^2 + %dx + %d = 0 co 2 nghiem phan biet x1=%g, x2=%g", a, b, c, x1, x2);
    }
    else
    {
        printf("Phuong trinh vo nghiem\n");
    }
}

void TinhHocLuc()
{
    float diem;
    printf("Nhap diem cua sinh vien: ");
    scanf("%f", &diem);
    if (diem < 0.0 && diem > 10.0)
    {
        printf("Diem khong hop le. Vui long nhap lai.\n");
    }
    else if (diem > 9.0)
    {
        printf("Hoc luc: Xuat sac\n");
    }
    else if (diem >= 8.0 && diem < 9.0)
    {
        printf("Hoc luc: Gioi\n");
    }
    else if (diem >= 6.5 && diem < 8.0)
    {
        printf("Hoc luc: Kha\n");
    }
    else if (diem >= 5.0 && diem < 6.5)
    {
        printf("Hoc luc: Trung binh\n");
    }
    else if (diem >= 3.5 && diem < 5.0)
    {
        printf("Hoc luc: Yeu\n");
    }
    else 
    {
        printf("Hoc luc: Kem\n");
    }
}
void TinhTienDien()
{
    float soDien;
    float tienDien;
    printf("Nhap so dien tieu thu: ");
    scanf("%f", &soDien);
    if (soDien<0)
    {
        printf("So dien khong hop le. Vui long nhap lai.\n");
    }
    else if (soDien <= 50)
    {
        tienDien = soDien * 1.678;
    }
    else if (soDien >= 51)
    {
        tienDien = soDien * 1.734;
    }
    else if (soDien >= 201)
    {
        tienDien = soDien * 2.536;
    }
    else if (soDien >= 301)
    {
        tienDien = soDien * 2.834;
    }
    else if (soDien >= 401)
    {
        tienDien = soDien * 2.927;
    }
    printf("So tien dien phai tra: %.2f VND\n", tienDien);
    
}
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
                TinhHocLuc();
                break;
            case 2:
                printf("Giai phuong trinh bac 2.\n");
                GiaiPTB2();
                break;
            case 3:
                printf("Tinh tien dien.\n");
                TinhTienDien();
                break;
            default:
                printf("ban hay chon 0-3.\n");
                break;
        }
    } while (chon != 0);
    return 0;
}