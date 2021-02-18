#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//写一个递归函数DigitSum（n），输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum（1729），则应该返回1+7+2+9，它的和是19
//输入：1729  输出：19
//int digitsum(int num)
//{
//	int s = 0;
//	if (num > 9)
//	{
//		return digitsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret=digitsum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}