#include<stdio.h>
#include<math.h>
int main()
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
        printf("Phuong trinh vo nghiem");
    }
      
    return 0;
}