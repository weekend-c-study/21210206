#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int num;
	
	
	do{
		puts("������ �Է��Ͻÿ�");
		scanf_s("%d", &num);
	} while (num > 100 || num < 0);

	switch (num / 10) {
	case 10:
	case 9: puts("A����"); break;
	case 8: puts("B����"); break;
	case 7: puts("C����"); break;
	case 6: puts("D����"); break;
	default: puts("F����");
	}

	return 0;
}


/*
#include<stdio.h>
int main()
{
	int arr1[2][3] = { 1,2,3,4,5,6 };
	int arr2[3][3] = { 1,2,3,4,5,6,7,8,9};
	int arr3[4];
	int(*ptr)[3]=arr1;
	ptr = arr2;

	int* ptr1=arr3;
	return 0;
}
//*/
/*
#include<stdio.h>
int a = 3;
void main()
{
	a++;//4
	{
		int a = 7;
		a++;//8
	}
	a++;//5
	printf("%d", ++a);//6
}
//*/

/*
#include<stdio.h>
void sum(int n1, int n2, int* p)
{
	*p = n1 + n2;
}
void main()
{
	int c;
	sum(4,5, &c);
	printf("%d", c);
}
//*/

/*
#include<stdio.h>
int main()
{
	int a = 0;
	a++;//1
	a += 3; //a = a+3 // 4

	printf("%d", a++);
	return 0;
}
//*/

/*
#include<stdio.h>
typedef struct Atag
{
	int v1;
	float v2;
}A;
void main()
{
	A a;
	A* p = &a;

	p->v1 = 7;
}
//*/
/*
#include<stdio.h>
//function-like macro
#define SQUARE(x)	((x)*(x))

//����: ó���ӵ����, �Լ��� ���θ����� �ʾƵ��ȴ�.(�ڵ��� �پ���)
//����: ������ ���ĵ� ����Ⱑ ��ƴ�
int main()
{
	printf("%d \n", SQUARE(10));
	printf("%g \n", SQUARE(2.5));

	printf("%d \n", SQUARE(5));// 5*5
	printf("%d \n", SQUARE(3+2));// (3+2)*(3+2)

	printf("%d \n", 120/SQUARE(2));//120/(2)*(2)
	return 0;
}
//*/
/*
#include<stdio.h>

#define NAME	"������"
#define ����		main
#define ����		return
#define PRT_ADD		puts("�ּ�: ����� ���빮�� ���̷�");
//Object-like macro

int ����()
{

	printf("%s\n", NAME);
	PRT_ADD

	���� 0;
}
//*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr = malloc(6 * 4);
	int* ptr3 = malloc(100000 * 4);
	int* ptr4 = malloc(100000 * 4);
	int* ptr5 = malloc(100000 * 4);
	printf("%p", ptr);
	ptr[0] = 100; ptr[1] = 99; ptr[2] = 98; 
	ptr[3] = 97; ptr[4] = 96; ptr[5] = 95;

	for (int i = 0; i < 6; i++) 
	{
		printf("%d ", ptr[i]);
	}
	puts("---------");
	ptr=realloc(ptr, 1000*4);
	ptr[6] = 90;
	printf("%p", ptr);
	//������ ���ο� �Ҵ�� �޸��ּҰ� , ���н� NULL
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", ptr[i]);
	}
	puts("---------");

	free(ptr);
	//realloc�� �����ּҰ� malloc�� ������� : ���������ڿ� Ȯ���� ������ ����Ҷ�
	//realloc�� �����ּҰ� malloc�� �ٸ���� : Ȯ���Ұ����� ������ ���ο������ �Ҵ�
	return 0;
}
//*/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//calloc() �޸𸮰����� �Ҵ��ϰ� 0���� �ʱ�ȭ���ش�.
	int* ptr1 = calloc(10 , sizeof(int));//40


	int* ptr2 = malloc(40);//40

	for (int i = 0; i < 20; i++) 
	{
		printf("%d ", ptr1[i]);
	}
	puts("");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ptr2[i]);
	}

	free(ptr1);
	free(ptr2);
	return 0;
}
//*/
/*
#include<stdio.h>
#include<stdlib.h>

int main() 
{
	//���ú���
	//int arr[1000][1000];//static�޸� ���

	//heap�޸𸮿� �Ҵ�
	int* a;//�����ͺ���
	//�޸𸮰��� �Ҵ�
	a= malloc(4000000);
	//�޸� ����
	free(a);

	int* ptr = malloc(sizeof(int));
	*ptr = 100;

	printf("%d\n", *ptr);

	int* ptr2 = malloc( 5*sizeof(int) );//�� 20byte
	if (ptr2 == NULL) {
		return - 1;
	}

	/// ptr2 NULL�� �ƴҰ�쿡 ����

	for (int i = 0; i < 5; i++)
	{
		//ptr2[i] == *(ptr2+i)
		ptr2[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ptr2[i]);
	}


	free(ptr2);

	return 0;
}
//*/

/*
#include<stdio.h>
typedef struct
{
	char name[10];
	int age;
}Person;




int main()
{
	FILE* fos = NULL;
	Person man;

	fopen_s(&fos, "person1.bin", "wb");
	if (fos == NULL)return -1;

	printf("�̸� ���� ������ �Է�: ");
	
	scanf_s("%s %d", man.name, sizeof(man.name), &man.age);
	fwrite(&man, sizeof(Person),1, fos);
	
	fclose(fos);

	/// <summary>
	/// /////////////////////
	/// </summary>
	/// <returns></returns>
	FILE* fis = NULL;
	Person man2;
	fopen_s(&fis, "person1.bin", "rb");
	if (fis == NULL)return -1;
	fread_s(&man2, sizeof(man2), sizeof(Person), 1, fis);
	puts("------�о���� ������-----------");
	printf("%s %d\n", man2.name, man2.age);

	fclose(fis);


	return 0;
}
//*/

/*
#include<stdio.h>

int main()
{
	char name[10];
	int age;

	FILE* fis = NULL;
	fopen_s(&fis, "person.txt", "rt");
	if (fis == NULL) {
		puts("���Ͽ��½���!");
		return -1;
	}

	while (1)
	{
		int code=fscanf_s(fis,"%s %d", name,sizeof(name), &age);
		//������ ��: EOF��ȯ
		printf("code : %d \t", code);
		if (code == EOF) {
			break;
		}

		printf("%s %d\n", name, age);
	}

	fclose(fis);

	return 0;
}
//*/

/*
#include<stdio.h>

int main()
{
	char name[10];
	int age;

	FILE* fos=NULL;
	fopen_s(&fos, "person.txt", "wt");//���Ͻ�Ʈ�� ����
	if (fos == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("�̸� ���� ������ �Է�: ");
		scanf_s("%s %d", name,sizeof(name), &age);

		//���ڿ� fomat  ���·� ���Ͽ� ����
		fprintf(fos,"%s %d\n", name, age);
	}

	fclose(fos);

	return 0;
}
//*/