#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double a, sum = 0, denominator = 1;
    printf("¬ведите a: ");
    scanf("%lf", &a);
    printf("¬ведите n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        denominator *= (a + i);
        sum += 1.0 / denominator;
    }
    printf("—умма р€да = %.6lf\n", sum);
    return 0;
}
