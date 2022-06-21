#include<iostream>
using namespace std;

//重载递增运算符

//自定义整形
class MyInteger
{
	friend ostream & operator<<(ostream &cout,MyInteger myint);
	
public:	
	MyInteger()
	{
		m_Num = 0;
	}
	
	//重载前置++运算符
	//使用返回引用是为了使myint只有一个对象
	//使用返回值编译器会自己创建一个新对象，相当于拷贝函数 
	MyInteger& operator++()
	{
		m_Num++;
		
		//再将自身做返回
		return *this;
	}
	
	//重载后置++运算符
	//void operator++(int)  int代表占位参数，可以用于区分前置和后置递增
	//由于temp是局部对象，使用完之后会自动释放，因此需要返回值 
	MyInteger operator++(int)
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果做返回 
		return temp;
	}
	
private:
	int m_Num;
};

//重载<<运算符 
ostream & operator<<(ostream &cout,MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	
	cout << myint++ << endl;
	cout << myint << endl; 
}

int main()
{
	test01();
	
	//test02();
	
	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl; 
	
	system("pause");
	
	return 0;
}
