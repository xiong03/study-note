#include<iostream>
using namespace std;
#include<string>
#define MAX 100

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ���� 
class student 
{
public: //����Ȩ��
    
    //���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����
	
	 
	//����
	
	//����
	string m_Name;
	//ѧ��
	string m_Xuehao;
	
	//��Ϊ
	//��ʾѧ����������ѧ�� 
	void showStudent()
	{
		cout <<"������"<< m_Name << endl;
		cout <<"ѧ�ţ�"<< m_Xuehao << endl;
	}
	
	//��������ֵ
	void setName(string name)
	{
		m_Name = name;
	}
	
	//��ѧ�Ÿ�ֵ
	void setXuehao(string Xuehao)
	{
		m_Xuehao = Xuehao;
	}
};

int main()
{
	//����һ������ѧ�� ʵ��������
	student s1;
	
//	cout <<"���������������"<< endl;
//	cin >> s1.m_Name;
//	cout <<"���������ѧ�ţ�"<< endl;
//	cin >> s1.m_Xuehao;

    //��s1���� �������Ը�ֵ����
	//s1.m_Name = "����";
	s1.setName("����");
	//s1.m_Xuehao;
	s1.setXuehao("20210203922");
	   
	//��ʾѧ����Ϣ
	s1.showStudent();
	
	system("pause");
	
	return 0;
} 
