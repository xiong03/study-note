#include<iostream>
using namespace std;
#include<string> 

//�������� 
class Building
{
	//GoodGayȫ�ֺ����� Building�����ѣ����Է���Building��˽�г�Ա 
	friend void GoodGay(Building *building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
	
public:
	string m_SittingRoom; //����
	
private:
	string m_BedRoom; //���� 
};

//ȫ�ֺ��� 
void GoodGay(Building *building)
{
	cout <<"�û���ȫ�ֺ��� ���ڷ��ʣ�"<< building->m_SittingRoom   << endl;
	
	cout <<"�û���ȫ�ֺ��� ���ڷ��ʣ�"<< building->m_BedRoom  << endl;
}

void test01()
{
	Building building;
	GoodGay(&building);
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
