#include<iostream>
using namespace std;

//深拷贝与浅拷贝

//浅拷贝：简单的赋值操作
//深拷贝：在堆区重新申请空间，进行拷贝操作 
//构造函数先显示的后释放 

class Person
{
public:
	Person()
	{
		cout <<"Person默认构造函数调用"<< endl;
	}
	
	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout <<"Person有参构造函数调用"<< endl;
	}	
	
	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person(const Person &p)
	{
		cout <<"Perosn拷贝构造函数调用"<< endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height; 编译器默认实现的就是这行代码
		//深拷贝操作
		
		m_Height = new int(*p.m_Height);
	}
	
	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if(m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout <<"Person析构函数调用"<< endl;
	}
	
	int m_Age; //年龄
	int *m_Height; //身高
};

void test01()
{
	Person p1(18,160);
	
	cout <<"p1的年龄为："<< p1.m_Age <<"身高为："<< *p1.m_Height << endl;
	
	Person p2(p1);
	
	cout <<"p2的年龄为："<< p2.m_Age <<"身高为："<< *p2.m_Height << endl;
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
