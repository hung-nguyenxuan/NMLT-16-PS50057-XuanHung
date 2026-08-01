#include <stdio.h>
#include <math.h>

//chuc nang 1: tim gia tri lon nhat trong 3 so
void chucnang1();
int findMax(int a, int b, int c);
//ket thuc chuc nang 1

//chuc nang 2: kiem tra nam nhuan
void chucnang2();
int checkYear(int year);
//ket thuc chuc nang 2

//chuc nang 3: hoan vi 2 so su dung con tro
void chucnang3();
void swap(int *a, int *b);
//ket thuc chuc nang 3

//chuc nang 4: kiem tra va phan loai tam giac
void chucnang4();
void checkTriangle(float a, float b, float c);
//ket thuc chuc nang 4

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
        scanf("%d", &chon);

        switch (chon)
        {
            case 1:
                printf("Ham Tim gia tri lon nhat.\n");
                chucnang1();
                break;
            case 2:
                printf("Ham Kiem tra Nam nhuan.\n");
                chucnang2();
                break;
            case 3:
                printf("Ham Hoan vi 2 so su dung Con tro.\n");
                chucnang3();
                break;
            case 4:
                printf("Ham Kiem tra & Phan loai Tam giac.\n");
                chucnang4();
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Ban hay chon tu 1 - 5.\n");
                break;
        }
        printf("\n");
    }while (chon != 5);

    return 0;
}

//chuc nang 1: tim gia tri lon nhat trong 3 so
void chucnang1()
{
    int a, b, c;
    int max;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    max = findMax(a, b, c);
    printf("Gia tri lon nhat trong 3 so la: %d\n", max);
}

int findMax(int a, int b, int c)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    return max;
}
//ket thuc chuc nang 1

//chuc nang 2: kiem tra nam nhuan
void chucnang2()
{
    int nam;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (checkYear(nam) == 1)
    {
        printf("%d la nam nhuan.\n", nam);
    }
    else
    {
        printf("%d khong phai la nam nhuan.\n", nam);
    }
}

int checkYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//ket thuc chuc nang 2

//chuc nang 3: hoan vi 2 so su dung con tro
void chucnang3()
{
    int a, b;

    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//ket thuc chuc nang 3

//chuc nang 4: kiem tra va phan loai tam giac
void chucnang4()
{
    float a, b, c;

    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);

    checkTriangle(a, b, c);
}

void checkTriangle(float a, float b, float c)
{
    int laTamGiacCan;
    int laTamGiacVuong;
    float saiSo = 0.0001f;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Day khong phai la 3 canh cua mot tam giac.\n");
        return;
    }

    laTamGiacCan = fabs(a - b) < saiSo ||
                   fabs(a - c) < saiSo ||
                   fabs(b - c) < saiSo;

    laTamGiacVuong = fabs(a * a + b * b - c * c) < saiSo ||
                     fabs(a * a + c * c - b * b) < saiSo ||
                     fabs(b * b + c * c - a * a) < saiSo;

    if (fabs(a - b) < saiSo && fabs(b - c) < saiSo)
    {
        printf("Day la tam giac deu.\n");
    }
    else if (laTamGiacVuong && laTamGiacCan)
    {
        printf("Day la tam giac vuong can.\n");
    }
    else if (laTamGiacVuong)
    {
        printf("Day la tam giac vuong.\n");
    }
    else if (laTamGiacCan)
    {
        printf("Day la tam giac can.\n");
    }
    else
    {
        printf("Day la tam giac thuong.\n");
    }
}
//ket thuc chuc nang 4
