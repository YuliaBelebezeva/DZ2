#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float X = 2500;
    float total_bill = X * 4;
    float tips = total_bill * 0.15;
    printf("����� ������: %.2f ���.\n", tips);

    return 0;
}