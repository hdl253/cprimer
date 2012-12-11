#include<stdio.h>
int main()
{
	int a;
	void TypeMember();
	void sPointer();
	TypeMember();
	sPointer();


	//scanf("%d",&a);

}
void var()
{
	
	//常量***************************************************
	{
		//整数常量
		100;
		//实型常量
		100.1;
		123.45e5;
		//字符常量
		'a';'b'; //字符
		'\t';'\\';'?';//转意
		"asdfasd";//字符串

		//说明：字面常量

		//符号常量
		#define PI 3.1415926;
	}
	//常量***************************************************

	//变量***************************************************

	//变量***************************************************


	//常变量***************************************************
	{
		const int ciA = 3;
	}
	//常变量***************************************************


	//标识符:字母、数字、下划线，必须字母开头
}
void TypeMember()
{
	//基本类型(整数型，浮点型)和枚举类型，统称为算数类型(arithmetic type)；算数类型和指针类型统称为纯量类型(scalar type)

	//整数
	{
		signed int iA=-2147483648; //4字节
		signed int iB = 2147483647;
		printf("int:%d\n%d\n",iA,iB);
	}
	{
		unsigned int iA = 4294967295; //4字节
		printf ("unsigned int:%d\n%u\n",iA,iA);
	}
	{
		short int iA=-32768;//2字节
		short int iB = 32767;
		printf("short int:%d\n%d\n",iA,iB);
	}
	{
		unsigned short iA = 65535;//2字节
		printf("unsigned short:%d\n",iA);

	}
	{
		long iA=-2147483648;//4字节
		long iB = 2147483647;
		printf("long:%d\n%d\n",iA,iB);
	}
	{
		unsigned long iA = 4294967295; //4字节?
		printf ("unsigned long:%d\n%u\n",iA,iA);
	}
	{
		//字符
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
		int *p2;
		printf("arrayB:%d\n*arrayB:%d\n&arrayB:%d\n*(*arrayB):%d\n*(*arrayB+1):%d\n*(*(arrayB+1)):%d\n",arrayB,*arrayB,&arrayB,*(*arrayB),*(*arrayB+1),*(*(arrayB+1)));
		
	}
}