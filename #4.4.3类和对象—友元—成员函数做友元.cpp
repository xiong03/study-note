#include<iostream>
using namespace std;
#include<string>

class Building;
class GoodGay
{
public:
	
	GoodGay();
	
	void visit1(); //visit1函数可以访问Building中私有成员
	void visit2(); //visit1函数不可以访问Building中私有成员
	
	Building * building;
	
}; 

class Building
{
	//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员 
	friend void GoodGay::visit1();
	
public:	
	Building();
	
public:	
	
	string m_SittingRoom; //客厅 
	
private:
	
	string m_BedRoom; //卧室 
};

//类外实现函数 
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout <<"visit1函数正在访问："<< building->m_SittingRoom << endl;
	
	cout <<"visit1函数正在访问："<< building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout <<"visit2函数正在访问："<< building->m_SittingRoom << endl;
	
	//cout <<"visit1函数正在访问："<< building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
