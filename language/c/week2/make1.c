#include <stdio.h>

int main(void)
{
    int n, k;
    int result;
    printf("수를 입력하세요. \n");
    scanf("%d %d", &n, &k);
    while (1)
    {
        if ((n % k) == 0)
        {
            n /= k;
        }
        else
        {
            n = n - 1;
        }
        printf("과정 : %d\n", n);
        result++;
        if (n < k)
            break;
    }
    result += (n - 1);
    printf("%d\n", result);
    return 0;
}