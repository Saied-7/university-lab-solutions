#include <stdio.h>

int main() {
    int n, rest;
    scanf("%d", &n);
    rest = n;
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", rest / 100); rest %= 100;
    printf("%d nota(s) de R$ 50,00\n",  rest / 50);  rest %= 50;
    printf("%d nota(s) de R$ 20,00\n",  rest / 20);  rest %= 20;
    printf("%d nota(s) de R$ 10,00\n",  rest / 10);  rest %= 10;
    printf("%d nota(s) de R$ 5,00\n",   rest / 5);   rest %= 5;
    printf("%d nota(s) de R$ 2,00\n",   rest / 2);   rest %= 2;
    printf("%d nota(s) de R$ 1,00\n",   rest);
    return 0;
}