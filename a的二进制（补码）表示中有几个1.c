#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//дһ��������a�Ķ����ƣ����룩��ʾ���м���1

//1
//int count_bit_one(int n)
//{
//	int i = 0;
//	while (n)
//	{
//		i += n % 2;
//		n = n / 2;
//	}
//	return i;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}//�˷����Ը���������

//2
//int count_bit_one(unsigned int n)//�޸�Ϊunsigned
//{
//	int i = 0;
//	while (n)
//	{
//		i += n % 2;
//		n = n / 2;
//	}
//	return i;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;//���ȷ���һ
//}


//3
//ͨ��λ��������ʵ��
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("coutn=%d\n", count);
//	return 0;
//}


//4
//n=n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}
