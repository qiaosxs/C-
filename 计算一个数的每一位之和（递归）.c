#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//дһ���ݹ麯��DigitSum��n��������һ���Ǹ����������������������֮��
//���磬����DigitSum��1729������Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729  �����19
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