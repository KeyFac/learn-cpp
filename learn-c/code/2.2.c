#include <stdio.h>
int main()
{
    int a, b;

    printf("请输入两个整数：");
    scanf("%d%d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d（整数除法）\n", a, b, a / b);
    printf("%d %% %d = %d（取余）\n", a, b, a % b);

    return 0;
}
