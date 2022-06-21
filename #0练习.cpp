#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>
#define MAX 1000

struct Person{
	
	string m_Name;
	int m_Age;
	int m_Sex;
	string m_Phone;
	string m_Addr;
}; 

struct Addressbooks{
	
	Person PersonArray[MAX];
	int m_Size;
};

//�����ϵ��
void addPerson(Addressbooks * abs)
{
	int num;
	cout <<"��������Ҫ��Ӷ�����"<< endl;
	cin >> num;
	for(int i = 1; i <= num; i++)
	{
		if(abs->m_Size == MAX)
	    {
		    cout <<"ͨѶ¼�������޷���ӣ�"<< endl;
		    return;
	    }
	    else
	    {
	    	cout <<"���ڿ�ʼ��"<< i <<"�������" << endl;
		    string name;
		    int sex;
		    int age;
		    string phone;
		    string address;
		
		    cout <<"����������"<< endl;
		    cin >> name;
		    abs->PersonArray[abs->m_Size].m_Name = name;
		
		    cout <<"�������Ա�"<< endl;
		    cout <<"1����"<< endl;
		    cout <<"2��Ů"<< endl;
		    cin >> sex;
		    while(true)
		    {
			    if(sex == 1 || sex == 2)
		        {
			        abs->PersonArray[abs->m_Size].m_Sex = sex;
			        break;
		        }
		        else
		        {
			        cout <<"���������������"<< endl;
		        }
		    }
		
		    cout <<"������������0��150��֮��"<< endl;
		    cin >> age;
		    while(true)
		    {
			    if(age <= 150 && age > 0)
			    {
				    abs->PersonArray[abs->m_Size].m_Age = age;
				    break;
			    }
			    else
			    {
				    cout <<"���������������"<< endl;
			    }
		    }
		
		    cout <<"������绰"<< endl;
		    cin >> phone;
		    abs->PersonArray[abs->m_Size].m_Phone = phone;
		
	    	cout <<"�������ַ"<< endl;
	    	cin >> address;
		    abs->PersonArray[abs->m_Size].m_Addr = address;
		
		    cout <<"��"<< i <<"������ӳɹ�"<< endl;
		    abs->m_Size++;
	    }
	}
	system("pause");
	system("cls");
}

//��ʾ��ϵ��
void showPerson(Addressbooks * abs)
{
	if(abs->m_Size == 0)
	{
		cout <<"��ǰ��¼Ϊ��"<< endl;
	}
	else
	{
		for(int i = 0; i < abs->m_Size; i++)
		{
			cout <<"������"<< abs->PersonArray[i].m_Name <<"\t"
			     <<"�Ա�"<< (abs->PersonArray[i].m_Sex == 1? "��" : "Ů") <<"\t"
			     <<"���䣺"<< abs->PersonArray[i].m_Age <<"\t"
			     <<"�绰��"<< abs->PersonArray[i].m_Phone <<"\t"
			     <<"��ַ��"<< abs->PersonArray[i].m_Addr << endl;
			     
		}
	}
	system("pause");
	system("cls");
}

//�ж���ϵ���Ƿ����
int isExist(Addressbooks * abs,string name)
{

	for(int i = 0; i < abs->m_Size; i++)
	{
	    if(abs->PersonArray[i].m_Name == name)
	    {
		    return i;
		}
	}
	    return -1;
}

void deletePerson(Addressbooks * abs)
{
	string name;
	cout <<"������Ҫɾ�����˵�����"<< endl;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret == -1)
	{
		cout <<"�û�������"<< endl;
	}
	else
	{
		for(int i = ret; i < abs->m_Size; i++)
		{
			abs->PersonArray[i] = abs->PersonArray[i+1];
		}
		abs->m_Size--;
	}
	system("pause");
	system("cls");
}

//�˵�����
void showMenu()
{
	cout <<"***************************"<< endl;
	cout <<"*****  1�������ϵ��  *****"<< endl;
	cout <<"*****  2����ʾ��ϵ��  *****"<< endl;
	cout <<"*****  3��ɾ����ϵ��  *****"<< endl;
	cout <<"*****  4��������ϵ��  *****"<< endl;
	cout <<"*****  5���޸���ϵ��  *****"<< endl;
	cout <<"*****  6�������ϵ��  *****"<< endl;
	cout <<"*****  0���Ƴ�ͨѶ¼  *****"<< endl;
	cout <<"***************************"<< endl;
}

int main()
{
	Addressbooks abs;
	abs.m_Size = 0;
	while(true)
	{
		system("color E4");
		showMenu();
	    int select;
	    cin >> select;
	    
	    switch(select)
	    {
		    case 1:
		    	addPerson(&abs);
		    	cout <<"ȫ��������"<< endl;
			    break;
		    case 2:
		    	showPerson(&abs);
			    break;
		    case 3:
		    	deletePerson(&abs);
			    break;
		    case 4:
			    break;
		    case 5:
			    break;
		    case 6:
			    break;
		    case 0:
		        cout <<"��ӭ�´�ʹ��"<< endl;
		        system("pause");
		        return 0;
			    break;
		    default:
			    break;					
	    }
	}
	
	system("pause");
	
	return 0;
}
