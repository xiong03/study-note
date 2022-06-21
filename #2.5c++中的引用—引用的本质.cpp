#include<iostream>
using namespace std;

//发现是引用，转化为int* const ref = &a;
void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;
	
	//自动转化为 int* const ref = &a;指针常量是指针指向不可改变，；也说明引用不可以改变
	int& ref = a;
	
	ref = 20; //内部发现ref是引用，自动帮我们转化为：*ref = 20;
	
	cout <<"a:"<< a << endl;
	cout <<"ref:"<< ref << endl;
	
	func(a); 
	
	system("pause");
	
	return 0;
}
