#include<iostream>
using namespace std;
#include<map>

//map���� ���Һ�ͳ�� 
void printMap(map<int,int>&m)
{
	for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout <<"key = "<< (*it).first <<" value = "<< it->second << endl; 
	}
	cout << endl;
}

void test01()
{
	//����
	map<int,int>m;
	m.insert(make_pair(1,10));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	m.insert(make_pair(3,40));
	
	map<int,int>::iterator pos = m.find(3);
	
	if(pos != m.end())
	{
		cout <<"�鵽��Ԫ�� key = "<< (*pos).first <<" value = "<< (*pos).second << endl;
	}
	else
	{
		cout <<"δ�ҵ�Ԫ��"<< endl;
	}
	
	//ͳ��
	//map����������ظ���key Ԫ�أ�countͳ�ƶ��� ���Ҫô��1 Ҫô��0
	//multimap��count������ܴ���1 
	int num = m.count(3);
	cout <<"num = "<< num << endl; 
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
