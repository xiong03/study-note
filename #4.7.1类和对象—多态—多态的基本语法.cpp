#include<iostream>
using namespace std;

//��̬

//������
class Animal{
public:
	//�麯��
	virtual void speak()
	{
		cout <<"������˵��"<< endl;
	}
};

//è��
class Cat:public Animal{
public:
	//��д����������ֵ���͡��������������б� ��ȫ��ͬ
	void speak()
	{
		cout <<"Сè��˵��"<< endl;
	}
};

class Dog:public Animal{
public:
	void speak()
	{
		cout <<"С����˵��"<< endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1���м̳й�ϵ
//2������Ҫ��д�����е��麯��

//��̬��̬ʹ��
//�����ָ��������� ָ���������
 
void doSpeak(Animal &animal) //Animal & animal = cat��dog;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
	
	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();
	
	system("color E4"); 
	system("pause");
	
	return 0;
}
