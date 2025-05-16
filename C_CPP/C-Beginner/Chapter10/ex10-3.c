// ex10-3.c
// 여러 명에게 주문을 받도록 변경한 [기본 10-2]

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int coffee_machine(int button)
{
    printf("\n# 1. (자동으로) 뜨거운 물 준비 \n");
    printf("# 2. (자동으로) 종이컵 준비 \n");

    switch (button)
    {
    case 1:
        printf("# 3. (자동으로) 보통커피를 탄다. \n");
        break;
    case 2:
        printf("# 3. (자동으로) 설탕커피를 탄다. \n");
        break;
    case 3:
        printf("# 3. (자동으로) 블랙커피를 탄다. \n");
        break;
    default:
        printf("# 3. (자동으로) 아무거나 탄다. \n");
        break;
    }
    printf("# 4. (자동으로) 물을 붇는다. \n");
    printf("# 5. (자동으로) 스푼으로 저어서 녹인다. \n\n");

    return 0;
}

int main()
{
    int coffee = 0, ret = 0;

    printf("A님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
    scanf("%d", &coffee);
    ret = coffee_machine(coffee);
    printf("A님~ 커피 여기 있습니다. \n\n");

    printf("B님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
    scanf("%d", &coffee);
    ret = coffee_machine(coffee);
    printf("B님~ 커피 여기 있습니다. \n\n");

    printf("C님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙)");
    scanf("%d", &coffee);
    ret = coffee_machine(coffee);
    printf("C님~ 커피 여기 있습니다. \n\n");
}