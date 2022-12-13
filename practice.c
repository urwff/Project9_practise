#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
//1.字符串指针
// 声明方式:char * 指针名
// 1）指针指向字符串的首地址
// 2）复制时指针自动+1
//2.用字符指针复制字符
//int main()
//{
//	void copy(char *p1,char *p2);
//	char a[] = "I love you";
//	char b[] = "I don't love";
//	printf("a = %s b = %s\n",a,b);
//	copy(a,b);
//	printf("a = %s b = %s\n",a,b);
//	return 0;
//}
//指针字符复制函数
//1.void copy(char* p1, char* p2)
//{
//	for (; *p1 != '\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2 = '\0';
//2.void copy(char *p1,char *p2)
//{
//  while ((*p1 = *p2) != '\0')
//  {
//	p1++;
//	p2++;
//  }
//}
//2.字符串数组
//定义：每数组元素都用来存放一个字符串
//a[3][10] = {"I","love","china"};

//3. 指针做函数参数
//1）指针做形参，指针或变量地址做实参
//int main()
//{
//	void max(int *p1,int *p2);
//	int x, y;
//	scanf("%d,%d", &x, &y);
//	int* p1, * p2;
//	p1 = &x;
//	p2 = &y;
//	max(&x,&y);//地址做实参
//	max(p1,p2);//指针做实参
//	return 0;
//}
//void max(int* p1, int* p2)//指针做形参
//{
//	
//	if (*p1 > *p2)	
//	    printf("%d\n",*p1);
//	else
//		printf("%d\n", *p2);
//	
//}
//结构体数据类型定义：
//strucut 结构体名
//{
	//数据类型符 成员变量名；
//}
//int main()
//{
//	struct date 
//	{
//		int year;
//		int month;
//		int day;
//	};
//
//
//
//
//
//	return 0;
//}
//
//
//int main()
//{
//	//测试是否开辟空间成功
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));//打印错误原因
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", (*p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	//void *calloc(size_num,size size)
//	int* P = calloc(20, sizeof(int));
//	if (P == NULL)
//		printf("%s\n",strerror(errno));
//	else
//	{
//		int i;
//		for (i = 0; i < 20; i++)
//		{
//
//			printf("%d ",*(P + i));//打印开辟空间内的元素
//		}
//	}
//	free(P);
//	P = NULL;
//	return 0;
//}
//void *realloc(void* mem,size_ size)
//int main()
//{
//	int* P = (int*)malloc(20);
//	if (P = NULL)
//		printf("%s\n",strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(P + i) = i;
//		}
//		
//	}
//	int *P2 =(int *)realloc(P, 30);
//	int i;
//	for (i = 5; i < 10; i++)
//	{
//		*(P2 + i) = i;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		printf("%d ",*(P2 + i));
//	}
//	free(P2);
//	P2 = NULL;
//	return 0;
//}

//int main()
//{
//	int a, b;
//	printf("Please input the number :");
//	scanf("%d,%d",&a,&b);
//	int* P1, * P2;
//	P1 = &a;
//	P2 = &b;
//	return 0;
//}
//void swap(int* P_1, int* P_2)//指针做形参
//{
//	//改变实参所指向变量的值
//	int M;
//	M = *P_1;
//	*P_1 = *P_2;
//	*P_2 = M;
//}
//void swap(int* P_1, int* P_2)
//{
// 
//	int* M;
//	*M = *P_1;//不可以把值给指针变量
//	*P_1 = *P_2;
//	*P_2 = *M;
//
//}
//void swap(int* P_1, int* P_2)
//{
//  //也不能改变指针
//	int*M;
//	M = P_1;
//	P_1 = P_2;
//	P_2 = M;
//}
//int main()
//{
//	//数组的指针
//	int a[3] = {1,2,3};
//	int* P1 = a;//数组名即代表：数组首地址，通过数组名把数组的首元素地址给指针
//	printf("%d \n",*P1);
//	int* P_1 = &a[0];//等效于数组名
//	printf("%d \n",*P_1);
//	//b[i]与* (P + i）等效
//	int i;
//	int b[3] = {1,2,3};
//	int *P2 = b;
//	//一般方式输入数组
//	//for (i = 0; i < 3; i++)
//	//scanf("%d",&b[i]);
//	//scanf("%d",P2 + i);
//	//牛逼方式
//	//scanf("%d",P2++)
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", b[i]);
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", *(P2 + i));
//		printf("\n");
//	}
//	for (P2 = a;P2 < (b + 3);P2++)//通过指向数组的指针变化打印数组
//		printf("%d ", *P2);
//	//1)for (P2 = a; P2 < (P2 + 3); P2++)//设想P2与数组名等效，但P2代表指针，指针相加表地址移动
//		//printf("%d ", *P2);
//	//for (i = 0; i < 3; i++)
//	//scanf("%d",P2++);
//	//P2 = b; //需让指针重新指向首地址
//	/*for (i = 0; i < 3; i++,P2++)
//		printf("%d ", *P2);*/
//	//
//	return 0;
//}
//int main()
//{
//  //打开文件
//	//FILE *fopen(char *filename, char *mode);
//	//filename为文件名（包括文件路径），mode为打开方式，它们都是字符串。
//	//FILE *P1 = fopen("D:\\P1\\666.txt", "w");
//	//if (p1 == NULL) //判断是否打开败
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//  //关闭文件
//  fclose(p1);
//  p1 = NULL;
//	return 0;
//}

//int main()
//{
//    利用fputc写入出单个字符
//    FILE* p1 = fopen("D:\\P1\\666.txt", "w");//将打开的文件设置为写入模式
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //写文件:将打开的文件设置为写入模式后用fputc将字符写入文件
//    fputc('a', p1);
//    fputc('b', p1);
//    fputc('c', p1);
//    fclose(p1);
//    p1 = NULL;
//    return 0;
//}
//int main()
//{  
//    利用fputc写入标准输出流，后输出在屏幕
//    fputc('a', stdout);
//    fputc('b', stdout);
//    fputc('c', stdout);
//    return 0;
// }

//int main()
//{
//    //利用fgetc从打开为读模式的文件，从中读取数据
//    //int fgetc(FILE *stream)
//    //：从指定的流 stream 获取下一个字符（一个无符号字符），并把位置标识符往前移动。
//    FILE* p1 = fopen("D:\\P1\\666.txt", "r");//设置读文件模式
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    int a = fgetc(p1);//接收fgetc返回的int
//    printf("%c\n",a);
//    a = fgetc(p1);//每读一次往后移动一位
//    printf("%c\n", a);
//    fclose(p1);
//    p1 = NULL;
//    return 0;
//}
//int main()
//{
//   //从键盘读入
//	 int a = fgetc(stdin);//从键盘中读入，并存入a
//	 printf("%c\n",a);
//	 return 0;
//}
//int main()
//{
//    //利用fputs写入字符串
//    //int fputs(const char *str, FILE *stream)
//    FILE* p1 = fopen("D:\\P1\\666.txt", "w");
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    fputs("abc",p1);
//    fputs("efg",p1);
//    fclose(p1);
//    p1 = NULL;
//    return 0;
//}
//int main()
//{
//	fputs("abc\n", stdout);
//	fputs("edf\n", stdout);
//	return 0;
//}
//int main()
//{
//    char *fgets(char *str, int n, FILE *stream) 
//    //从指定的流 stream 读取一行，并把它存储在 str 所指向的字符串内。
//    //当读取 (n-1) 个字符时
//    //或者读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。
//    FILE* p1 = fopen("D:\\P1\\666.txt", "r");
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    char a[10] = {0};
//    fgets(a, 5, p1);//从p1文件从读然后存入a
//    printf("%s\n", a);
//    fclose(p1);
//    p1 = NULL;
//}
//int main()
//{
//	char a[10];
//	fgets(a,4,stdin);//读入n-1个
//	printf("%s",a);
//	return 0;
//}
//字符指针：指向字符地址的指针
//1) 指向字符的指针
//int main()
//{
//	char ch = 'a';
//	char* ch1 =&ch;
//	printf("%c\n", *ch1);;
//	return 0;
//}
//2)指向字符串的指针
//int main()
//{
//	
//	char* ch = "I love you";//指向首字符的地址
//	printf("%c\n", *ch);//必须为%c,因为指针指向字符串后，知道指的是一个字符
//	return 0;
//}
//int main()
//{
//	char arr1[] = "I love you";
//	char arr2[] = "I love you";
//	if (arr1 == arr2)
//		printf("same\n");
//	else
//		printf("not same\n");
//	char* ch1 = "I love you";
//    char* ch2 = "I love you";
//	if (*ch1 == *ch2)
//		printf("same\n");
//	else
//		printf("not same\n");
//	return 0;
//}
//指针数组
int main()
{


   return 0;
}