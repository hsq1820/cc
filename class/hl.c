#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("请输入华氏温度： ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9;
    printf("对应的摄氏温度为： %f", celsius);

    return 0;
}