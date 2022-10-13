#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int m, t, s,sum;
    scanf("%d%d%d",&m,&t,&s);
    1 <= m <= 100, 0 <= t <= 100, 1 <= s <= 10000;
    sum = m - s / t;
    printf("%d/n",sum);
    return 0;
}




//#include <stdio.h>
//int main()
//{
//	printf("hehe");
//	return 0;
//}