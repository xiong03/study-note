#include<iostream>
using namespace std;

//构造函数的调用规则
//1：
//创建一个类，C++编译器会给每个类都添加至少3个函数
//默认函数 （空实现） 
//析构函数 （空实现） 
//拷贝函数 （值拷贝） 


//2：
//如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
//如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数了
class Person
{
public:
	
	//Person()
	//{
	//	cout <<"Person的默认构造函数调用"<< endl;
    //}
	
	//Person(int age)
	//{
	//	cout <<"Person的有参构造函数调用"<< endl;
	//	m_Age = age;
	//}
	
	Person(const Person & p)
	{
		cout <<"Person的拷贝构造函数调用"<< endl;
		m_Age = p.m_Age;
	}
	
	~Person()
	{
		cout <<"Person的析构构造函数调用"<< endl;
	}
	
	int m_Age; 
};

//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	
//	Person p2(p);
//	cout <<"p2年龄为："<< p2.m_Age << endl; 
//}

void test02()
{
	Person p(p);
	
}

int main()
{
	//test01();
	test02();
	
	system("pause");
	
	return 0;
}
