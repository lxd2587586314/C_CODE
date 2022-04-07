#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define NUM 666
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#define ADD(X,Y)   ((X)+(Y)) //define可以定义宏
//int main()
//{
//	/*int a = NUM;
//	printf("%d", NUM);*/
//	int b = 60;
//	int c = 6;
//	//函数
//	int num1 = add(b, c);
//	int num2 = 2 * ADD(b, c);
//
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	//int sum2 = 2*((a)+(b));
//	return 0;
//}
//%s - 字符串
//%c - 字符
//%d - 有符号的整型
//%f - 单精度浮点数
//%lf - 双精度浮点数
//%p - 地址 - 地址的16进制表示形式
////
//int main()
//{
//	int a = 8;
//	////&a 的时候，取出是a所占内存中4个字节中第一个字节的地址
//	printf("%p\n", &a);//取出a的内存地址
//	int * pa = &a;
//	//pa称为指针
//	*pa = 16;//* 解引用操作符
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", *pd);//解引用操作符
//	//printf("%p\n", &ch);
//	printf("%lf\n", d);//效果等同
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	////&a 的时候，取出是a所占内存中4个字节中第一个字节的地址
//	////printf("%p\n",  &a);//取出a的内存地址
//	//int * pa = &a;//数值
//	////pa称为指针
//	//*pa = 20;//* 解引用操作符
//
//	//printf("%d\n", a);//20
//
//	//a = 20;
//
//	//char ch = 'w';
//	//char * pc = &ch;
//
//	//指针变量是一种变量，这个变量是用来存放地址
//
//	double d = 3.14;
//	//pd就是指针变量
//	double* pd = &d;
//
//	*pd = 5.5;
//	printf("%lf\n", *pd);
//	printf("%lf\n", d);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;
//	printf("%d\n", sizeof(pc));
//	printf("%p\n", &ch);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0; 
//}
// 书的类型 书名 价格 书号
//struct Book
//{
//	char name[30];//书名
//	float price;//定价
//	char id[20];//书号
//};
//int main()
//{
//	/*结构体变量的定义和初始化
//	struct Book b2 = {"数据结构", 60.0f, "DS001001"};
//	struct Book b3 = { "操作系统", 71.5f, "OS0001001"};*/
//	struct Book b1 = { "C语言程序设计", 55.0f, "C1001020" };
//	//Print(&b1);
//	
//	printf("书名：%s\n", b1.name);
//	printf("定价：%f\n", b1.price);
//	printf("书号：%s\n", b1.id);
//
//	return 0;
//}
//struct Book
//{
//	char name[30];//书名
//	float price;
//	char id[20];
//};
//
//
//int main()
//{
//	
//	/*struct Book b1 = { "C语言程序设计", 55.0f, "C1001020" };
//	struct Book b1 = { "c语言程序设计", 55.0f, "c1001020" };
//	struct Book b1 = { "c语言程序设计", 55.0f, "c1001020" };*/
//	printf("书名: %s\n", b1.name);
//	printf("定价：%f\n", b1.price);
//	printf("id: %s\n", b1.id);
//
//	return 0;
//}
//struct Book
//{
//	char name[30];
//	float price;
//	char id[20];
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",60.0f,"c10001020" };
//	printf("书名：%s\n", b1.name);
//	printf("价格：%f\n", b1.price);
//	printf("id：%s\n", b1.id);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年");
//	if (age > 18 && age < 30)
//		printf("青年");
//	if (age >= 30 && age < 55)
//		printf("中年");
//	if (age >= 55 && age < 70)
//		printf("中老年");
//	if (age >= 70 && age < 100)
//		printf("老年");
//	if (age >= 100)
//		printf("老寿星");\
//	return 0;
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("未成年");
	//else if (age > 18 && age < 30)
	//	printf("青年");
	//else if (age >= 30 && age < 55)
	//	printf("中年");
	//else if (age >= 55 && age < 70)
	//	printf("中老年");
	//else if (age >= 70 && age < 100)
	//	printf("老年");
	//else if (age >= 100)
	//	printf("老寿星");
//	int age = 18;
//	/*if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");*/
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//	printf("未成年\n");
//	}
//	return 0;
//}
//代码风格
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else//else和离最近的可以匹配的if匹配
//	{
//		printf("haha");
//	}
//	return 0;
//}
//int main()
//{
//		int a = 10;
//		int b = 10;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//	
//		}
//		//printf("%d\n", a);	
//	return 0;
//}
//int test()
//{
//	int a = 10;
//	if (a)
//		return 1;
//	printf("hehe\n");
//	return 2;
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
	/*int a = 1;
	if (a == 5)
		printf("hehe\n");
	if (5 == a)
		printf("haha\n");*/
	/*int a = 0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}*/
int main()
{
	int i = 1;
	/*while (i <= 100)
	{
	        if (i % 2 == 1)
			printf("%d ", i);
			i++;
	}*/
	while (i <= 100)
	{
	printf(" %d ", i);
	i += 2;
	}
	
	return 0;
}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i%3 == 0)
//		printf("%d\n", i);
//
//	}
//		
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i+=3)
//	{
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int s = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &s);
//		sum += s;
//		//sum = sum + s;
//	}
//	
//    printf("%.1f\n",sum/5.0);
//	return 0;
//}
//int main()
//{/*
//	int a = 15;
//	int b = 2;*/
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret = i % 3;
//		if (ret == 0)
//		{
//		printf("%d\n",i);
//		}
//		
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
// 
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 3 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int Max = 0;
//	int i = 0;
//	int Min = 0;
//	int Mid = 0;
//	for (i = 0; i < 3; i++) 
//	{
//	
//	scanf("%d", &arr[i]);
//	if (arr[i] > Max)
//	{
//		Max = arr[i];
//		printf("%d\n", Max);
//	}
//
//	else if (arr[i] > Min && arr[i] < Max)
//	{
//		Mid = arr[i];
//		printf("%d\n", Mid);
//	}
//	else (arr[i] < Min);
//	{
//	Min = arr[i];
//	printf("%d\n", Min);
//	}
//	
//	}
//	/*if (a-b>0&&a-c>0)*/
//	return 0;
//}
//int main()
//{
//    int a = 2;
//    int b = 3;
//    int c = 1;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("a=%d b=%d c=%d\n", a, b, c);
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	
//	}
//	printf("%d\n", max);
//	return 0;
//
//}
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	scanf("%d %d %d", &a, &b, &c);
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
//	printf("a = %d b = %d c = %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	int avg = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//	}
//	avg = sum / 10;
//	printf("%d\n", avg);
//	return 0;
//}
//#include <time.h>
//#include <stdlib.h>
//void menu ()
//{
//	printf("*****************\n");
//	printf("**** 1.play *****\n");
//	printf("**** 0.exit *****\n");
//	printf("*****************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	while (1)
//	{   
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//		printf("恭喜你，猜对了\n");
//		break;
//		}
//	}
//} 		
//int main()
//{
//	
//		int input = 0;
//		srand((unsigned int)time(NULL));
//		do {
//		    menu();
//			printf("请选择:>");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default :
//				printf("选择错误，重新选择\n");
//				break;
//			} 
//		} while(input);		
//	return 0;
//}