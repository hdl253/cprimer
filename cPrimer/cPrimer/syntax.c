#include<stdio.h>
#include<stdlib.h>
int main()
{
	void TypeMember();
	void sPointer();
	void LinkedList();
	TypeMember();
	sPointer();
	LinkedList();
	
}
void var()
{
	
	//����***************************************************
	{
		//��������
		100;
		//ʵ�ͳ���
		100.1;
		123.45e5;
		//�ַ�����
		'a';'b'; //�ַ�
		'\t';'\\';'?';//ת��
		"asdfasd";//�ַ���

		//˵�������泣��

		//���ų���
		#define PI 3.1415926;
	}
	//����***************************************************

	//����***************************************************

	//����***************************************************


	//������***************************************************
	{
		const int ciA = 3;
	}
	//������***************************************************


	//��ʶ��:��ĸ�����֡��»��ߣ�������ĸ��ͷ
}
void TypeMember()
{
	//��������(�����ͣ�������)��ö�����ͣ�ͳ��Ϊ��������(arithmetic type)���������ͺ�ָ������ͳ��Ϊ��������(scalar type)

	//����
	{
		signed int iA = -2147483648; //4�ֽ�
		signed int iB = 2147483647;
		printf("int:%d\n%d\n",iA,iB);
	}
	{
		unsigned int iA = 4294967295; //4�ֽ�
		printf ("unsigned int:%d\n%u\n",iA,iA);
	}
	{
		short int iA=-32768;//2�ֽ�
		short int iB = 32767;
		printf("short int:%d\n%d\n",iA,iB);
	}
	{
		unsigned short iA = 65535;//2�ֽ�
		printf("unsigned short:%d\n",iA);

	}
	{
		long iA= -2147483648;//4�ֽ�
		long iB = 2147483647;
		printf("long:%d\n%d\n",iA,iB);
	}
	{
		unsigned long iA = 4294967295; //4�ֽ�?
		printf ("unsigned long:%d\n%u\n",iA,iA);
	}
	{
		//�ַ�
		char c='c';
		printf("%d %c\n",c,c);
	}
}

void sPointer()
{
	int a=100,b=10;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("p1=%d;p2=%d\n",p1,p2);
	printf("*p1=%d;*p2=%d\n",*p1,*p2);
	printf("&p1=%d;&p2=%d\n",&p1,&p2);

	{
		int arrayA[10] = {0,1,2,3,4,5,6,7,8,9};
		int *p1;
		for(p1=arrayA;p1<arrayA+10;p1++)
		{
			printf("%d",*p1);
		}
		printf("\n");
	}

	{
		int arrayB[2][3] = {{0,1,2},{3,4,5}};
		printf("arrayB:%d\n*arrayB:%d\n&arrayB:%d\n*(*arrayB):%d\n*(*arrayB+1):%d\n*(*(arrayB+1)):%d\n",arrayB,*arrayB,&arrayB,*(*arrayB),*(*arrayB+1),*(*(arrayB+1)));
		
	}
}

void LinkedList()
{
	int n=0;
	struct Student
	{
		long num;
		float score;
		struct Student *next;
	};
	struct Student *head;
	struct Student *p1,*p2;
	p1=p2=(struct Student *) malloc(sizeof(struct Student));
	scanf("%d,%f",&p1->num,&p1->score);
	head = NULL;
	while(p1->num!=0)
	{
		n++;
		if (n==1) head=p1;
		p2=p1;
		p1=(struct Student *) malloc(sizeof(struct Student));
		scanf("%ld,%f",&p1->num,&p1->score);
	}
	p2->next=NULL;
}