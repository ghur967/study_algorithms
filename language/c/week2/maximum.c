#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    printf("최대값을 구할 배열을 입력하세요.\n");
    scanf("%s", str);
    int result = str[0] - '0';

    for (int i = 1; i < strlen(str); i++)
    {
        int num = str[i] - '0';
        if (num <= 1 || result <= 1)
        {
            result += num;
        }
        else
        {
            result *= num;
        }
    }
    printf("maximum : %d\n", result);
    return 0;
}