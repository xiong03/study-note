#include<iostream>
using namespace std;
#include<string>

class Building;
class GoodGay
{
public:
	
	GoodGay();
	
	void visit1(); //visit1�������Է���Building��˽�г�Ա
	void visit2(); //visit1���������Է���Building��˽�г�Ա
	
	Building * building;
	
}; 

class Building
{
	//���߱����� GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա 
	friend void GoodGay::visit1();
	
public:	
	Building();
	
public:	
	
	string m_SittingRoom; //���� 
	
private:
	
	string m_BedRoom; //���� 
};

//����ʵ�ֺ��� 
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout <<"visit1�������ڷ��ʣ�"<< building->m_SittingRoom << endl;
	
	cout <<"visit1�������ڷ��ʣ�"<< building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout <<"visit2�������ڷ��ʣ�"<< building->m_SittingRoom << endl;
	
	//cout <<"visit1�������ڷ��ʣ�"<< building->m_BedRoom << endl;
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
