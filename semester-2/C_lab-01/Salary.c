#include <stdio.h>

int main() {
    int number, hours;
    double perHour, salary;
    scanf("%d %d %lf", &number, &hours, &perHour);
    salary = hours * perHour;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}