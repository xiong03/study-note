#include<iostream>
#include<string>
using namespace std;

//递减运算符重载和递增运算符重载原理相同，只是运算符不一样
class MyInteger
{
public:
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	//前置递减运算符重载，函数声明
	MyInteger& operator--();
	MyInteger operator--(int);//同样需要使用占位参数来让编译器知道这是函数重载

	MyInteger()
	{
		m_Num = 2;
	}

public:
	int m_Num;
};

//前置递减 
MyInteger& MyInteger::operator--()
{
	//自身先--
	m_Num--;
	//然后返回自身
	return *this;
}

//后置递减 
MyInteger MyInteger::operator--(int)
{
	//先创建一个临时对象来保存当前的值
	MyInteger temp = *this;
	m_Num--;
	return temp;
}

//左移<<的重载
ostream& operator<<(ostream& cout, MyInteger myint)//由于后置递减运算符返回的是值，所以左移运算符传入对象时，不使用引用
{
	cout << "num的当前数值为："<< myint.m_Num  << endl;
	return cout;
}

//前置递减 
void test01()
{
	MyInteger myint;
	cout << "前置递减运算符重载" << endl;
	cout <<"前置递减"  << (--myint) << endl;
	cout <<"前置递减后my"  << myint << endl;

}

//后置递减 
void test02()
{
	MyInteger myint;
	cout << "后置递减运算符重载" << endl;
	cout << "后置递减前" << myint << endl;
	cout << (myint--) << endl;
	cout << "后置递减后" << myint << endl;
}
int main()
{
	test01();
	
	test02();
	
	system("color E5");
	system("pause");
	return 0;
}
