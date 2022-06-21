#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<ctime>
#include<stdlib.h>
#include<algorithm>
/*
��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһλѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����
*/ 

class Person{
public:
	Person(string name,int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	
	string m_Name; //����
	int m_Score; //ƽ����
};

void createPerson(vector<Person>&v)
{
	for(int i = 0; i < 5;i++)
	{
		string nameSeed = "ABCDE";
		string name ="ѡ��";
		name += nameSeed[i];
		
		int score = 0;
		
		Person p(name,score);
		
		//��������person�������������
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>&v)
{
	srand((unsigned)time(NULL));
	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ�������deque������
		deque<int>d;
		for(int i = 0; i < 10; i++)
		{
		    int score = rand()%60+41;
			d.push_back(score);
		}
		
//		cout <<"ѡ�֣�"<< it->m_Name <<" ��֣�"<< endl;
//		for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit <<" ";
//		}
//		cout << endl;
		
		//����
		sort(d.begin(),d.end());
		
		//ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();
		
		//ȡƽ����
		int sum = 0;
		for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit; //�ۼ�ÿ����ί�ķ���
		}
		
		int avg = sum/d.size();
		
		//��ƽ���ָ�ֵ��ѡ������
		it->m_Score = avg;
	}
}

void showScore(vector<Person>&v)
{
	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout <<"������"<< it->m_Name <<" ƽ����"<< it->m_Score << endl;
	}
}

int main()
{
	//1������5��ѡ��
	vector<Person>v; //���ѡ������
	createPerson(v);
	
	//����
//	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout <<"������"<< (*it).m_Name <<" ������"<< (*it).m_Score << endl;
//	}
	
	//2����5��ѡ�ִ��
	setScore(v);
	//3����ʾ���ĵ÷�
	showScore(v);
	
	system("pause");
	
	return 0;
}
