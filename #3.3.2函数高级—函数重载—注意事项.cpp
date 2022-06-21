#include<iostream>
using namespace std;

//函数重载的注意事项
//1：引用作为重载的条件
void func(int &a) //int &a = 10; 不合法 
{
	cout <<"func（int &a）的调用"<< endl;
}

void func(const int &a) //const int &a = 10;编译器会修改为int temp = 10; const int &a = temp; 合法 
{
	cout <<"func（const int &a）的调用"<< endl;
}

//2：函数重载碰到默认参数 
void func2(int a, int b = 10)
{
	cout <<"func2 (int a, int b) 的调用"<< endl;
}

void func2(int a)
{
	cout <<"func2 (int a) 的调用"<< endl;
}

int main()
{
	int a = 10;
	func(a); //由于a是一个变量，所以调用的函数为func(int &a)
	
	func(10);
	
	//func2(10); //当函数重载碰到默认参数，初出现二义性，报错，尽量避免这种情况出现 
	
	system("pause");
	
	return 0;
}
