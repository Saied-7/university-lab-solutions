#include <stdio.h>

int main() {
    double n;
    long long c;
    scanf("%lf", &n);
    c = (long long)(n * 100 + 0.5);  // cents এ রূপান্তর (precision error এড়াতে)

    printf("NOTAS:\n");
    printf("%lld nota(s) de R$ 100.00\n", c / 10000); c %= 10000;
    printf("%lld nota(s) de R$ 50.00\n",  c / 5000);  c %= 5000;
    printf("%lld nota(s) de R$ 20.00\n",  c / 2000);  c %= 2000;
    printf("%lld nota(s) de R$ 10.00\n",  c / 1000);  c %= 1000;
    printf("%lld nota(s) de R$ 5.00\n",   c / 500);   c %= 500;
    printf("%lld nota(s) de R$ 2.00\n",   c / 200);   c %= 200;

    printf("MOEDAS:\n");
    printf("%lld moeda(s) de R$ 1.00\n",  c / 100);   c %= 100;
    printf("%lld moeda(s) de R$ 0.50\n",  c / 50);    c %= 50;
    printf("%lld moeda(s) de R$ 0.25\n",  c / 25);    c %= 25;
    printf("%lld moeda(s) de R$ 0.10\n",  c / 10);    c %= 10;
    printf("%lld moeda(s) de R$ 0.05\n",  c / 5);     c %= 5;
    printf("%lld moeda(s) de R$ 0.01\n",  c);
    return 0;
}