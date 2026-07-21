//giá gạo = 2, giá của đậu 1.5, tỉ giá đô = 26.29. nhập số lượng gạo, đậu, đô. tính tiền phải trả
#include <stdio.h>
int main()
{
    float TienTong, tienUSD, tigia = 26.29, dau , gao, GiaDau = 1.5, GiaGao = 2;
    printf ("nhap so luong gao: ");
    scanf ("%f", &gao);
    printf ("nhap so luong dau: ");
    scanf ("%f", &dau);
    tienUSD = (gao * GiaGao + dau * GiaDau);
    TienTong = tienUSD * tigia;
    printf ("tong tien USD: %.2f USD\nso tien phai tra la: %.2f VND", tienUSD, TienTong);
    return 0;
}