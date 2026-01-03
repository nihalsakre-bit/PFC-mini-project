#include <stdio.h>

int main() {
    int num, temp1, temp2;
    int count = 0, digit, sum = 0;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp1 = num;

    while (temp1 != 0) {
        count++;
        temp1 = temp1 / 10;
    }

    temp2 = num;

    while (temp2 != 0) {
        digit = temp2 % 10;
        power = 1;

        for (i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp2 = temp2 / 10;
    }

    if (sum == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
