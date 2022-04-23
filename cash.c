#include<stdio.h>
#include<math.h>
#include<cs50.h>

int n;
int calculate_quarters(int n);
int calculate_dimes(int n);
int calculate_nickels(int n);
int calculate_pennies(int n);
int get_cents(void);

int main()
{
    int sum = 0;
    int a, b, c, d, f, v, num, x, y, z, j;


    a = calculate_quarters(n);
    sum += a;

    x = n - a * 25;
    b = calculate_dimes(x);
    sum += b;

    y = n - a * 25 - b * 10;
    c = calculate_nickels(y);
    sum += c;

    z = n - a * 25 - b * 10 - c * 5 ;
    j = calculate_pennies(z);
    sum += z;
    printf("%d\n", sum);

    return 0;

}

int calculate_quarters(i)
{
    return (int)(i / 25);

}

int calculate_dimes(i)
{
    return (int)(i / 10);

}

int calculate_nickels(i)
{
    return (int)(i / 5);
}

int calculate_pennies(i)
{
    int f = (int)(i);
    return f;
}

int get_cents(void)
{

    do
    {
        printf("Change owed: ");
        scanf("%d", &n);

    }
    while (n < 1);

    return n;
}
