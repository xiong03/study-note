#include<iostream>
using namespace std;
#include<iostream>
//constʹ�ó���

struct student
{
	string name; //����
	int age; //����
	int score; //����
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µľ籾���� 
void printStudent(const student *s)
{
	//s->age = 150; //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵĴ������ 
	cout <<"������"<< s->name <<" ���䣺"<< s->age <<" ������"<< s->score << endl;
}

int main()
{
	//�����ṹ�����
	struct student s {"����", 15, 70};
	
	//ͨ����������ӡ�ṹ�������Ϣ 
	printStudent(&s);
	
	cout <<"main����������Ϊ��"<< s.age << endl;
	
	system("pause"); 
	
	return 0;
}
