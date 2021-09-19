//
//  main.c
//  baekjun
//
//  Created by 이지원 on 2021/09/06.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    // insert code here...
    char str[50];
    int n = 1;
    int number_temp = 0;
    int sum = 0;
    printf("수식을 입력하세요.\n");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        number_temp += 1;
        if ('0' <= str[i] && '9' >= str[i] && n == 1)
        {
            if (number_temp > 1)
            {
                sum -= str[i - 1] - '0';
                sum = sum + ((str[i - 1] - '0') * 10 + str[i] - '0');
            }
            else
            {
                sum += str[i] - '0';
            }
        }
        else if ('0' <= str[i] && '9' >= str[i] && n == -1)
        {
            if (number_temp > 1)
            {
                sum += str[i - 1] - '0';
                sum = sum - ((str[i - 1] - '0') * 10 + str[i] - '0');
            }
            else
            {
                sum -= str[i] - '0';
            }
        }
        else
        {
            number_temp = 0;
            if (str[i] == '+')
            {
                continue;
            }
            else if (str[i] == '-')
            {
                n = -1;
            }
        }
    }
    printf("sum : %d\n", sum);

    return 0;
}
