#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//void GetMemory(char* p) 
//{
//	p = (char*)malloc(100);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(str);// ��ʽ�������ı�ʵ�ʲ���
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//}

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//}

//int main()
//{
//	const char* p = "hello world";
//
//	printf("hello world\n");
//	printf(p);
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�ֲ�������ջ����
//	return p;
//}
//void Test(void) 
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//int* Test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = Test();
//	printf("hehe\n"); 
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}

//void GetMemory(char** p, int num) 
//{
//	*p = (char*)malloc(num);
//}
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str, 100);//û���ͷ��ڴ�
//	strcpy(str, "hello");
//	printf(str);
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);//û���ͷ��ڴ�
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//��Ұָ���ڴ����
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct st_type1
//{
//	int i;
//	int a[0];//���������Ա
//};
//#include <string.h>
//#include <errno.h>
//struct st_type
//{
//	int i;//4
//	int a[];//���������Ա
//};
//
//int main()
//{
//	//printf("%d ", sizeof(struct st_type));
//	//�������������Ա�Ľṹ���ʹ�ã�Ҫ���malloc�����Ķ�̬�ڴ���亯��ʹ��
//	//struct st_type st; û�п�����������Ŀռ�
//	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	//���ٳɹ���
//	ps->i = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->a[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	//a����Ŀռ䲻���ˣ�ϣ������Ϊ20����������
//	struct st_type* ptr = (struct st_type*)realloc(ps, sizeof(struct st_type) + 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//ʹ��
//	//...
//	for (i = 10; i < 20; i++)
//	{
//		ps->a[i] = i;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		printf("%d ",ps->a[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}
#include <string.h>
#include <errno.h>
struct st_type
{
	int i;
	int* a;
};

int main()
{
	struct st_type* ps = (struct st_type*)malloc(sizeof(struct st_type));
	if (ps == NULL)
	{
		printf("%s", strerror(errno));
		return -1;
	}
	ps->i = 100;
	int* ptr = (int*)malloc(10 * sizeof(int));
	if (ptr == NULL)
	{
		printf("%s", strerror(errno));
		return -1;
	}
	else
	{
		ps->a = ptr;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(ps->a + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->a[i]);
	}
	/*for (i = 0; i < 10; i++)
	{
		printf("%d " ,*(ps->a + i));
	}*/
	//aָ��Ŀռ䲻���ˣ�ϣ�����Ե�����С
	int *pc = (int*)realloc(ps->a,20 * sizeof(int));
	if (pc == NULL)
	{
		printf("����ʧ��\n");
		printf("%s", strerror(errno));
		return -1;
	}
	else
	{
		ps->a = pc;
	}
	for (i = 10; i < 20; i++)
	{
		*(ps->a + i) = i;
	}
	for (i = 10; i < 20; i++)
	{
		printf("%d ", *(ps->a + i));
	}
	//�ͷſռ�
	free(ps->a);
	ps->a = NULL;
	free(ps);
	ps = NULL;
	return 0;
}