#include<iostream>
using namespace std;

//函数的默认参数

//如果我们自己传入数据，就用自己的数据，如果没有，那么就用默认值
//语法：返回值类型 函数名 （形参 = 默认值）{} 
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1：如果某个位置已经有了默认参数，那么从这个位置往后，从左向右都必须有默认值 

//int func2(int a = 10, int b , int c)
//{
//	return a + b + c;
//}

//2：如果函数声明有默认参数，函数实现就不能有默认参数
//声称和实现之间只能有一个默认值 
int func2(int a, int b);

int func2(int a = 10, int b = 10)
{ 
	return a + b;
}

int main()
{
	//cout << func(10) << endl;
	
	cout << func2() << endl; 
	
	system("pause");
	
	return 0;
}
