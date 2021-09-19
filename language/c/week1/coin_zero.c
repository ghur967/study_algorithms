//
//  main.c
//  baekjun
//
//  Created by 이지원 on 2021/09/06.
//

#include <stdio.h>

int main(int argc, const char *argv[])
{
    // insert code here...
    int unit, money;
    int unit_array[10] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000};
    int unit_length = sizeof(unit_array) / sizeof(int);
    int coin_count = 0;
    printf("동전 종류와 금액을 입력하세요. \n");

    scanf("%d %d", &unit, &money);

    for (int i = unit - 1; i > -0; i--)
    {
        int coin = money / unit_array[i];
        if (coin > 0)
        {
            coin_count += coin;
        }
        money = money - (unit_array[i] * coin);
    }

    printf("coin 갯수 : %d\n", coin_count);

    return 0;
}
