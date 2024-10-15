#define _CRT_SECURE_NO_WARNINGS
//计算某年某月有多少天

//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y,int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,30,31,30,31,30 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//	{
//		day = day + 1;
//	}
//	return day;
//}
//
//
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &y, &m);
//	int d = get_days_of_month(y, m);
//	printf("%d\n", d);
//
//	return 0;
//}


//判断某年是否为闰年
#include <stdio.h>

int is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int y = 0;
	scanf("%d", &y);
	int r = is_leap_year(y);
	if (r == 1)
		printf("%d是闰年", y);
	else
		printf("%d不是闰年", y);
	return 0;
}