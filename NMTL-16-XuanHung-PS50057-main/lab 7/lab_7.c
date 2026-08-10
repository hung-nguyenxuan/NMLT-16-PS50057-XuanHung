#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//khai báo các hàm chức năng
void demNguyenAmPhuAm();
void kiemTraDangNhap();
void sapXepChuoi();
void thapPhanSangNhiPhan();

int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 7               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem Nguyen am va Phu am trong chuoi            |\n");
        printf("| 2. Dang nhap he thong (User & Password)           |\n");
        printf("| 3. Sap xep danh sach Chuoi theo thu tu Alphabet   |\n");
        printf("| 4. Chuyen doi so Thap phan sang Nhi phan (Chuoi)  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        
        // Loai bo ky tu xuong dong sau khi dung scanf
        while(getchar() != '\n');

        switch (chon)
        {
            case 1:
                printf("Dem Nguyen am va Phu am trong chuoi.\n");
                demNguyenAmPhuAm();
                break;
            case 2:
                printf("Dang nhap he thong (User & Password).\n");
                kiemTraDangNhap();
                break;
            case 3:
                printf("Sap xep danh sach Chuoi theo thu tu Alphabet.\n");
                sapXepChuoi();
                break;
            case 4:
                printf("Chuyen doi so Thap phan sang Nhi phan (Chuoi).\n");
                thapPhanSangNhiPhan();
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

// chức năng 1
void demNguyenAmPhuAm()
{
    char s[100];
    int demNA = 0, demPA = 0;
    
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(s, sizeof(s), stdin);
    
    // Loai bo ky tu '\n' do fgets de lai
    s[strcspn(s, "\n")] = '\0';
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            demNA++;
        }
        else if(isalpha(c))
        {
            demPA++;
        }
    }
    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am: %d\n", demPA);
}
// xg chức năng 1

// chức năng 2
void kiemTraDangNhap()
{
    char userSys[] = "admin";
    char passSys[] = "123456";
    char user[50], pass[50];
    
    printf("Nhap Username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0'; // Loai bo ky tu '\n'
    
    printf("Nhap Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0'; // Loai bo ky tu '\n'
    
    if(strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("Dang nhap thanh cong!\n");
    }
    else
    {
        printf("Username hoac Password khong chinh xac!\n");
    }
}
// xog chức năng 2

// chức năng 3
void sapXepChuoi()
{
    char s[5][50];
    char temp[50];
    
    printf("Nhap vao 5 chuoi/ten:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Chuoi %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }
    
    // Sap xep tang dan theo thu tu alphabet (Hoan vi)
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    
    printf("\nDanh sach 5 chuoi da sap xep:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
}
// xog chức năng 3

// chức năng 4
void thapPhanSangNhiPhan()
{
    int n;
    char nhiPhan[50];
    int idx = 0;
    
    printf("Nhap vao mot so nguyen duong thap phan n: ");
    scanf("%d", &n);
    while(getchar() != '\n'); // Loai bo ky tu '\n'
    
    if(n == 0)
    {
        strcpy(nhiPhan, "0");
        idx = 1;
    }
    else
    {
        int tempN = n;
        while(tempN > 0)
        {
            nhiPhan[idx] = (tempN % 2) + '0';
            idx++;
            tempN /= 2;
        }
    }
    nhiPhan[idx] = '\0';
    
    // Dao nguoc chuoi
    for(int i = 0; i < idx / 2; i++)
    {
        char temp = nhiPhan[i];
        nhiPhan[i] = nhiPhan[idx - 1 - i];
        nhiPhan[idx - 1 - i] = temp;
    }
    
    printf("So nhi phan tuong ung: %s\n", nhiPhan);
}
// xog chức năng 4
