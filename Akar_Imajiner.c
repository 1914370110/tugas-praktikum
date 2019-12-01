#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D;
    double x1, x2;
    printf("Masukkan Nilai a = ");
    scanf("%f", &a);
    printf("Masukkan Nilai b = ");
    scanf("%f", &b);
    printf("Masukkan Nilai c = ");
    scanf("%f", &c);
    D = (pow(b, 2)) - (4 * a * c);
    if (D<0)
    {
    printf("Akar Imajiner");
    }
    else if (D==0)
    {
    x1 = (-b) / (2 * a);
    x2 = x1;
    printf("Nilai x1 = %.2f\n", x1);
    printf("Nilai x2 = %.2f\n", x2);
    }
    else
    {
    x1 = ((-b + sqrt(D)) / (2*a));
    x2 = ((-b - sqrt(D)) / (2*a));
    printf("Nilai x1 = %.2f\n", x1);
    printf("Nilai x2 = %.2f\n", x2);
    }
    return 0;
}
