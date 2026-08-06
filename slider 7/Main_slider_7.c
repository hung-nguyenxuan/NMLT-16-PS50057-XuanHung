#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30] = " FPT";
    char str2[30];
    printf("chuoi str1: %s\n", str1);
    printf("nhap chuoi str2: ");
    gets(str2); // đọc chuỗi có khoảng trắng
    // scanf("%s", str2);
    printf("chuoi str2 moi : %s\n", str2);
    return 0;
}