#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
//1.�ַ���ָ��
// ������ʽ:char * ָ����
// 1��ָ��ָ���ַ������׵�ַ
// 2������ʱָ���Զ�+1
//2.���ַ�ָ�븴���ַ�
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
//ָ���ַ����ƺ���
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
//2.�ַ�������
//���壺ÿ����Ԫ�ض��������һ���ַ���
//a[3][10] = {"I","love","china"};

//3. ָ������������
//1��ָ�����βΣ�ָ��������ַ��ʵ��
//int main()
//{
//	void max(int *p1,int *p2);
//	int x, y;
//	scanf("%d,%d", &x, &y);
//	int* p1, * p2;
//	p1 = &x;
//	p2 = &y;
//	max(&x,&y);//��ַ��ʵ��
//	max(p1,p2);//ָ����ʵ��
//	return 0;
//}
//void max(int* p1, int* p2)//ָ�����β�
//{
//	
//	if (*p1 > *p2)	
//	    printf("%d\n",*p1);
//	else
//		printf("%d\n", *p2);
//	
//}
//�ṹ���������Ͷ��壺
//strucut �ṹ����
//{
	//�������ͷ� ��Ա��������
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
//	//�����Ƿ񿪱ٿռ�ɹ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));//��ӡ����ԭ��
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
//			printf("%d ",*(P + i));//��ӡ���ٿռ��ڵ�Ԫ��
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
//void swap(int* P_1, int* P_2)//ָ�����β�
//{
//	//�ı�ʵ����ָ�������ֵ
//	int M;
//	M = *P_1;
//	*P_1 = *P_2;
//	*P_2 = M;
//}
//void swap(int* P_1, int* P_2)
//{
// 
//	int* M;
//	*M = *P_1;//�����԰�ֵ��ָ�����
//	*P_1 = *P_2;
//	*P_2 = *M;
//
//}
//void swap(int* P_1, int* P_2)
//{
//  //Ҳ���ܸı�ָ��
//	int*M;
//	M = P_1;
//	P_1 = P_2;
//	P_2 = M;
//}
//int main()
//{
//	//�����ָ��
//	int a[3] = {1,2,3};
//	int* P1 = a;//�����������������׵�ַ��ͨ�����������������Ԫ�ص�ַ��ָ��
//	printf("%d \n",*P1);
//	int* P_1 = &a[0];//��Ч��������
//	printf("%d \n",*P_1);
//	//b[i]��* (P + i����Ч
//	int i;
//	int b[3] = {1,2,3};
//	int *P2 = b;
//	//һ�㷽ʽ��������
//	//for (i = 0; i < 3; i++)
//	//scanf("%d",&b[i]);
//	//scanf("%d",P2 + i);
//	//ţ�Ʒ�ʽ
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
//	for (P2 = a;P2 < (b + 3);P2++)//ͨ��ָ�������ָ��仯��ӡ����
//		printf("%d ", *P2);
//	//1)for (P2 = a; P2 < (P2 + 3); P2++)//����P2����������Ч����P2����ָ�룬ָ����ӱ��ַ�ƶ�
//		//printf("%d ", *P2);
//	//for (i = 0; i < 3; i++)
//	//scanf("%d",P2++);
//	//P2 = b; //����ָ������ָ���׵�ַ
//	/*for (i = 0; i < 3; i++,P2++)
//		printf("%d ", *P2);*/
//	//
//	return 0;
//}
//int main()
//{
//  //���ļ�
//	//FILE *fopen(char *filename, char *mode);
//	//filenameΪ�ļ����������ļ�·������modeΪ�򿪷�ʽ�����Ƕ����ַ�����
//	//FILE *P1 = fopen("D:\\P1\\666.txt", "w");
//	//if (p1 == NULL) //�ж��Ƿ�򿪰�
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//  //�ر��ļ�
//  fclose(p1);
//  p1 = NULL;
//	return 0;
//}

//int main()
//{
//    ����fputcд��������ַ�
//    FILE* p1 = fopen("D:\\P1\\666.txt", "w");//���򿪵��ļ�����Ϊд��ģʽ
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //д�ļ�:���򿪵��ļ�����Ϊд��ģʽ����fputc���ַ�д���ļ�
//    fputc('a', p1);
//    fputc('b', p1);
//    fputc('c', p1);
//    fclose(p1);
//    p1 = NULL;
//    return 0;
//}
//int main()
//{  
//    ����fputcд���׼����������������Ļ
//    fputc('a', stdout);
//    fputc('b', stdout);
//    fputc('c', stdout);
//    return 0;
// }

//int main()
//{
//    //����fgetc�Ӵ�Ϊ��ģʽ���ļ������ж�ȡ����
//    //int fgetc(FILE *stream)
//    //����ָ������ stream ��ȡ��һ���ַ���һ���޷����ַ���������λ�ñ�ʶ����ǰ�ƶ���
//    FILE* p1 = fopen("D:\\P1\\666.txt", "r");//���ö��ļ�ģʽ
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    int a = fgetc(p1);//����fgetc���ص�int
//    printf("%c\n",a);
//    a = fgetc(p1);//ÿ��һ�������ƶ�һλ
//    printf("%c\n", a);
//    fclose(p1);
//    p1 = NULL;
//    return 0;
//}
//int main()
//{
//   //�Ӽ��̶���
//	 int a = fgetc(stdin);//�Ӽ����ж��룬������a
//	 printf("%c\n",a);
//	 return 0;
//}
//int main()
//{
//    //����fputsд���ַ���
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
//    //��ָ������ stream ��ȡһ�У��������洢�� str ��ָ����ַ����ڡ�
//    //����ȡ (n-1) ���ַ�ʱ
//    //���߶�ȡ�����з�ʱ�����ߵ����ļ�ĩβʱ������ֹͣ�����������������
//    FILE* p1 = fopen("D:\\P1\\666.txt", "r");
//    if (p1 == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    char a[10] = {0};
//    fgets(a, 5, p1);//��p1�ļ��Ӷ�Ȼ�����a
//    printf("%s\n", a);
//    fclose(p1);
//    p1 = NULL;
//}
//int main()
//{
//	char a[10];
//	fgets(a,4,stdin);//����n-1��
//	printf("%s",a);
//	return 0;
//}
//�ַ�ָ�룺ָ���ַ���ַ��ָ��
//1) ָ���ַ���ָ��
//int main()
//{
//	char ch = 'a';
//	char* ch1 =&ch;
//	printf("%c\n", *ch1);;
//	return 0;
//}
//2)ָ���ַ�����ָ��
//int main()
//{
//	
//	char* ch = "I love you";//ָ�����ַ��ĵ�ַ
//	printf("%c\n", *ch);//����Ϊ%c,��Ϊָ��ָ���ַ�����֪��ָ����һ���ַ�
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
//ָ������
int main()
{


   return 0;
}