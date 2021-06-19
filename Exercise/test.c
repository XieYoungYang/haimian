#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int x)
{
	int a = 0;
	int b = 0;
	int flag = 1;
	for (a = 0; a < x - 1; a++)
	{
		
		for (b = 0; b < x - 1 - a; b++)
		{
			if (arr[b] > arr[b + 1])
			{
				int c = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = c;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
// 
//int main()
//{
//	int arr[] = { 3,9,2,1,8 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	bubble_sort(arr, sz);
//	int a = 0;
//	for (a = 0; a < sz; a++)
//		printf("%d ", arr[a]);
//	return 0;
//}


//int main()
//{
//	int arr[4][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int a = 0;
//	for (a = 0; a < 4; a++)
//	{
//		int b = 0;
//		for (b = 0; b < 4; b++)
//		{
//			printf("&arr[%d][%d]=%p\n", a, b, &arr[a][b]);
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%p\n", &arr[a]);
//	}
//	return 0;
//}
////求第n个菲薄那些数
//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = fib(a);
//	printf("%d\n", c);
//	return 0;
//}
////求n的阶乘
//int factorial(int a)
//{
//	if (a <= 1)
//		return 1;
//	else
//	{
//		return a * factorial(a - 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = factorial(a);
//	printf("%d\n", c);
//	return 0;
//}

////编写函数，不允许创建临时变量，求字符串长度
//int my_strlen(char* arr)
//{
//	int c = 0;
//	while(*arr != '\0')
//	{
//		c++;
//		arr++;
//	}
//	return c;
//}
//int main()
//{
//	char arr[] = "wdnmd";
//	int len = my_strlen(&arr);
//	printf("%d\n", len);
//	return 0;
//}
////输入1234，输出1 2 3 4
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
////NUM+1
//void ADD(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	return 0;
//}

////整形有序数组的二分查找
//int find(int arr[], int a, int b)
//{
//
//	int left = 0;
//	int right = b - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a < arr[mid])
//			right = mid - 1;
//		else if (a > arr[mid])
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//	
//}
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int b = sz - 1;
//	int a = 11;
//	int address = find(arr, a, b);
//	if (address == -1)
//		printf("没找到\n");
//	else
//		printf("下标为:%d\n", address);
//	return 0;
//}


////判断是不是闰年
//int judge(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (judge(a) == 1)
//		printf("%d是闰年\n", a);
//	else
//		printf("%d不是闰年\n", a);
//	return 0;
//}
////判断是不是素数
//int judge(int x)
//{
//	int y = 0;
//	for (y = 2; y < sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;
//		}
//	}
//	if (y >= sqrt(x))
//		return 1;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (judge(a) == 1)
//		printf("%d是素数\n", a);
//	else
//		printf("%d不是素数", a);
//	return 0;
//}
////交换两个整型变量的内容
//
//int change(int *a, int *b)
//{
//	int tem;
//	tem = *a;
//	*a = *b;
//	*b = tem;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 50;
//	change(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
////找最大值
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 60;
//	int b = 49;
//	int c = 0;
//	c = max(a,b);
//	printf("最大值为：%d\n", c);
//	return 0;
// }
//
//
//int func(int x)
//{
//		if (x <= 1)
//			return 1;
//		else
//			return x * func(x - 1); 
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	sum = func(a);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "int";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//#include <stdio.h>
//#include "Add.h"
//int main()
//{
//	int a = 20;
//	int b = 40;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//#include <stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
////函数二分查找
//#include <stdio.h>
//int binary_search(int arr1[], int a, int b)
//{
//
//	int left = 0;
//	int right = b - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a < arr1[mid])
//			right = mid - 1;
//		else if (a > arr1[mid])
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int aim = 7;
//	int sz = sizeof(arr) / sizeof(arr[2]);
//	int ret = binary_search(arr, aim, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n", ret);
//	}
//	return 0;
//}
////1000-2000闰年
//#include <stdio.h>
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) ||( x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (is_leap_year(a) == 1)
//		{
//			printf("%d ", a);
//			b++;
//		}
//	}
//	printf("\n%d\n", b);
//	
//	return 0;
//}
////100-200素数
//#include <stdio.h>
//#include <math.h>
////int judge(int x)
////{
////	int y = 0;
////	for (y = 2;y < x;y++)
////	{
////		if (x % y == 0)
////			return 0;
////	}
////	return 1;
////}
//int judge(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	for (a = 100;a <= 200;a++)
//	{
//		if (judge(a) == 1)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}
//void excg1(int* pa, int* pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb  = c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	excg1(&a, &b);
//	printf("%d,%d\n", a , b);
//	return 0;
//}
//int max(int a, int b)
//{
//	int c = a > b ? a : b;
//	return c;
//}
//int main()
//{
//	int a = 6;
//	int b = 10;
//	printf("%d\n", max(300, 600));
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
// 
// 
//int main()
//{
//	char arr1[] = "我爱你";
//	char arr2[] = "我恨你";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int sum(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 5;
//	int b = 7;
//	printf("%d\n", sum(a, b));
//	return 0;
//}
//#include <stdlib.h>
//#include <string.h>

//int main()
//{
//	char input[20] = { 0 };
//	
//	system("shutdown -s -t 60");
//	again:
//	printf("电脑一分钟关机,输入:我是猪,终止程序!\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	goto again;
//	printf("gege\n");
//again:
//	printf("haha\n");
//
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*****************************************\n");
//	printf("*****************************************\n");
//	printf("***************1.play 0.exit*************\n");
//}
//void game()
//{
//	int a = 0;
//	int b = 0;
//	a = rand()%100+1;
//	printf("请猜数:");
//
//	while (1)
//	{
//		scanf("%d", &b);
//		if (b < a)
//		{
//			printf("猜小了!\n");
//		}
//		else if (b > a)
//		{
//			printf("猜大了!\n");
//		}
//		else
//		{
//			printf("猜对了!\n");
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始:\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误!");
//			break;
//		}
//	} while(input);
//	return 0;
//}

//void menu()
//{
//	printf("************************************\n");
//	printf("*********  1.play 0.exit  **********\n");
//	printf("************************************\n");
//}
////RAND_MAX-32767
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	printf("请猜数字:");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("笨蛋你猜大了!\n再来:");
//		}
//		else if (guess < ret)
//		{
//			printf("猪头你猜小了!\n再来:");
//		}
//		else
//		{
//			printf("小脑瓜真聪明!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	for (a = 1; a < sz; a++)
//	{
//		if (max < arr[a])
//		{
//			max = arr[a];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//
//	for (a = 1; a <= 9; a++)
//	{
//
//		int b = 0;
//		int c = 0;
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%-2d ", a, b, c);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int aim = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (aim < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (aim > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//
//}
////二分查找
//int main()
//{
//	int aim = 7;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (aim < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (aim > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//} 
// 
// 
// 
////9*9乘法表
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = a * b;
//			printf("%d*%d=%-2d ", a, b, c);//-2d：向左对齐
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
////求最大数
//int main()
//{
//	int arr[] = { -1,-2,-3,-14,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (a = 1; a < sz; a++)
//	{
//		if (arr[a] > max)
//		{
//			max = arr[a];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

////分数一加一减
//int main()
//{
//	int a = 0;
//	float s = 0;
//	int b = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		/*s += 1.0 / a;
//		a++;
//		s -= 1.0 / a;*/
//
//		s += b*1.0 / a;
//		b = -b;
//	}
//	printf("%f\n", s);
//	return 0;
//}


////1-100出现多少数字9
//int main()
//{
//	int a = 0;
//	int c = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//			c++;
//		if (a / 10 == 9)
//			c++;
//	}
//	printf("%d\n", c);
//	return 0;
//}
////100-200的素数
// #include <math.h>
//int main()
//{
//	int a = 0;
//	int c = 0;
//	for (a = 100 ; a <= 200 ; a++)
//	{
//		int b = 0;
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a % b == 0)
//				break;
//		}
//		if (b > sqrt(a))
//		{
//			printf("%d ", a);
//			c++;
//		}
//	}
//	printf("\n%d\n", c);
//	return 0;
//}
// 1000-2000闰年
//int main()
//{
//	int a = 0;
//	int c = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		/*if (a % 4 == 0 && a % 100 != 0)
//		{
//			printf("%d ", a);
//			c++;
//		}
//		else if (a % 400 == 0)
//		{
//			printf("%d ", a);
//			c++;
//		}*/
//		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		{
//			printf("%d ", a);
//			c++;
//		}
//
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	if (c == 0)
//	{
//		printf("最大公约数:%d\n", b);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
////1000-2000的闰年
//int main()
//{
//	int c = 0;
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//
//		if (a % 4 == 0 && a % 100 != 0)
//		{
//			printf("%d ", a);
//			c++;
//		}
//		else if (a % 400 == 0)
//		{
//			printf("%d ", a);
//			c++;
//		}
//	}
//	printf("\n%d\n", c);
//	return 0;
//}
////求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//
//		a = b;
//		b = c;
//	}
//	printf("最大公约数:%d\n", b);
//	return 0;
//}
////打印1-100以内所有3的倍数数字
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//
//		if (a % 3 == 0)
//		{
//			printf("%d\n", a);
//			a++;
//		}
//
//	}
//	return 0;
//}
//三个数从小到大输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a < b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		int t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (1)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (a >= b && a >= c)
//		{
//			if (b >= c)
//				printf("%d,%d,%d\n", a, b, c);
//			else
//				printf("%d,%d,%d\n", a, c, b);
//		}
//		else if (b >= a && b >= c)
//		{
//			if (a >= c)
//				printf("%d,%d,%d\n", b, a, c);
//			else
//				printf("%d,%d,%d\n", b, c, a);
//		}
//		else
//		{
//			if (a >= b)
//				printf("%d,%d,%d\n", c, a, b);
//			else
//				printf("%d,%d,%d\n", c, b, a);
//		}
//	}
//	
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 1;
//	while (1)
//	{
//
//		a = add(a, 4);
//		printf("%d\n", a);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int b = 0;
//	int a = 1;
//	b = func(2);
//	printf("%d\n", b);
//	return 0;
//}
//int func(int a)
//{
//
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//
//	return b;
//}
//int main()
//{
//	int day = 0;
//
//	while (1)
//	{
//		scanf("%d", &day);
//		switch (day)
//		{
//		case 1:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		case 2:
//			printf("工作日\n");
//			break;
//		case 3:
//			printf("工作日\n");
//			break;
//		case 4:
//			printf("工作日\n");
//			break;
//		case 5:
//			printf("工作日\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	}
//	
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5);
//		printf("%d\n", i);
//	}
//	return 0;
//
//}






//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char p[50] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", p);
//		if (strcmp(p,"123456")==0)//==不能用来比较两个字符串是否相等
//		{
//			printf("密码正确!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误!请重新输入!\n");
//		}
//	}
//	if (3 == i)
//		printf("gun\n");
//	return 0;
//}
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to china !!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		left++;
//		arr2[right] = arr1[right];
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to china !!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;
//	int right = strlen(arr1)-1;//strlen用于计算字符串长度，\0不计入
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		left++;
//		arr2[right] = arr1[right];
//		right--;
//		Sleep(500);
//		system("cls");
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//int main()
//{
//	int aim = 100;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (aim < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (aim > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int aim = 19;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (aim < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (aim > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标为:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int aim = 17;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < aim)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > aim)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下表为:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int sum = 0;
//	for (b = 1; b <= 5; b++)
//	{
//		c = 1;
//		for (a = 1; a <= b; a++)
//		{
//			c = c * a;
//		}
//		sum = sum + c;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	int a = 0; 
//	int b = 1;
//	int c = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		b = b * a;
//		c = c + b;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		c = c * b;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int c = 1;
//	int d = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		c = c * a;
//		d = d + c;
//	}
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//	for (a=1;a<=2;a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			c = c * b;
//		}
//		d = d + c;
//		c = 1;
//	}
//	printf("%d\n", d);
//	return 0;
//}
////计算n的阶乘
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &a);
//	for (b = 1; b < a; b++)
//	{
//		c = c * b;
//	}
//	printf("%d\n", c);
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 5)
//			continue;
//		printf("%d ", a);
//		a++;
//	} 	while (a < 11);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0, b = 0; b = 0; a++, b++)
//		b++;
//
//	/*int a = 0;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);*/
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//		printf("\n");
//	}
	/*int a = 0;
	int ch = 0;
	int password[20] = { 0 };
	printf("请输入:");
	scanf("%s", password);
	while (ch != '\n')
		ch = getchar();
	printf("请确认(Y/N):");

	a = getchar();
	if (a == 'Y')
		printf("确认成功");
	else
		printf("fail");*/
//	return 0;
//}