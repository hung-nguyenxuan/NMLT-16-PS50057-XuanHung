#include<stdio.h>
int main()
{
    int a[3][6] = 
    {
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18}
    };

    int B[5] = {3,6,7,2,4};
    //khai báo mảng B
    //kích thước mảng B là 5 phần tử
    //Gán giá trị cho các phần tử của mảng B
    float D[10];
    printf("gia tri cho mang 1 chieu:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
    }
    printf("gia tri cho mang 2 chieu:\n");
    //printf("mang 2 chieu a[2][2] = %d\n", a[2][2]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    return 0;
}