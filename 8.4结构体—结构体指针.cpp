#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��

//����ѧ���Ľṹ�� 
struct student 
{
	string name; //���� 
	int age; //���� 
	int score; //���� 
};

int main()
{
	//1������ѧ���Ľṹ�����
	//struct����ʡ�� 
	struct student s = {"����", 18, 100 };
	
	//2��ͨ��ָ��ָ��ṹ�����
	struct student * p = &s;
	
	//3��ͨ��ָ����ʽṹ������е����� 
	//ͨ���ṹ��ָ�룬���ʽṹ���е����ԣ���Ҫ���� '->' 
	cout <<"������"<< p->name <<" ���䣺"<< p->age <<" ������"<< p->score << endl; 
	 
	system("pause");
	
	return 0;
}
