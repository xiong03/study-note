#include<iostream>
using namespace std;
#include<set> 

//set���� ��С�ͽ���

void printSet(set<int>&s)
{
	for(set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it <<" ";
	}
	cout << endl;
}

//��С 
void test01()
{
	set<int>s1;
	
	//�������� 
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	
	//��ӡ����
	printSet(s1);
	
	//�ж��Ƿ�Ϊ�� 
	if(s1.empty())
	{
		cout <<"s1Ϊ��"<< endl;
	}
	else
	{
		cout <<"s1��Ϊ��"<< endl;
		cout <<"s1��С��"<< s1.size() << endl;
	}
}

//����
void test02()
{
	set<int>s1;
	
	//�������� 
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	set<int>s2;
	
	//�������� 
	s1.insert(100);
	s1.insert(300);
	s1.insert(200);
	s1.insert(400);
	
	cout <<"����ǰ"<< endl;	 
	printSet(s1);
	printSet(s2);
	
	s1.swap(s2);
	cout <<"������"<< endl;
	printSet(s1);
	printSet(s2);
}

int main()
{
	//test01();
	test02();
	
	system("pause");
}
