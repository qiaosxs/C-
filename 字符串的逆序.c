#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写一个函数reverse_string（char*string）（递归实现）
//实现：将参数字符串的字符反向排列
//要求：不能使用C函数库中的字符串操作函数


//自己的想法
//void reverse_string(char str[], int sz)
//{
//	int left = 0;
//	int right = sz-2;
//	int tmp = 0;
//	for (; left < right;left++,right--)
//	{
//		tmp = str[left];
//		str[left]= str[right];
//		str[right] = tmp;
//	}
//}
//int main()
//{
//	char str[] = "asdfghjkl";
//	int sz = sizeof(str) / sizeof(str[0]);
//	reverse_string(str,sz);
//	printf("%s\n", str);
//	return 0;
//}


//课上讲的例子
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char str[])
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	int tmp = 0;
//	while (left<right)
//	{
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "asdfghjkl";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}


//递归方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char str[])
//{
//	char tmp = str[0];
//	int len = my_strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str)>1)
//	{
//		reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char str[] = "asdfghjkl";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}