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

//添加联系人
void addPerson(Addressbooks * abs)
{
	int num;
	cout <<"请输入你要添加多少人"<< endl;
	cin >> num;
	for(int i = 1; i <= num; i++)
	{
		if(abs->m_Size == MAX)
	    {
		    cout <<"通讯录已满，无法添加！"<< endl;
		    return;
	    }
	    else
	    {
	    	cout <<"现在开始第"<< i <<"个的添加" << endl;
		    string name;
		    int sex;
		    int age;
		    string phone;
		    string address;
		
		    cout <<"请输入姓名"<< endl;
		    cin >> name;
		    abs->PersonArray[abs->m_Size].m_Name = name;
		
		    cout <<"请输入性别"<< endl;
		    cout <<"1、男"<< endl;
		    cout <<"2、女"<< endl;
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
			        cout <<"输入错误，重新输入"<< endl;
		        }
		    }
		
		    cout <<"请输入年龄在0到150岁之间"<< endl;
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
				    cout <<"输入错误，重新输入"<< endl;
			    }
		    }
		
		    cout <<"请输入电话"<< endl;
		    cin >> phone;
		    abs->PersonArray[abs->m_Size].m_Phone = phone;
		
	    	cout <<"请输入地址"<< endl;
	    	cin >> address;
		    abs->PersonArray[abs->m_Size].m_Addr = address;
		
		    cout <<"第"<< i <<"个人添加成功"<< endl;
		    abs->m_Size++;
	    }
	}
	system("pause");
	system("cls");
}

//显示联系人
void showPerson(Addressbooks * abs)
{
	if(abs->m_Size == 0)
	{
		cout <<"当前记录为空"<< endl;
	}
	else
	{
		for(int i = 0; i < abs->m_Size; i++)
		{
			cout <<"姓名："<< abs->PersonArray[i].m_Name <<"\t"
			     <<"性别："<< (abs->PersonArray[i].m_Sex == 1? "男" : "女") <<"\t"
			     <<"年龄："<< abs->PersonArray[i].m_Age <<"\t"
			     <<"电话："<< abs->PersonArray[i].m_Phone <<"\t"
			     <<"地址："<< abs->PersonArray[i].m_Addr << endl;
			     
		}
	}
	system("pause");
	system("cls");
}

//判断联系人是否存在
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
	cout <<"请输入要删除的人的姓名"<< endl;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret == -1)
	{
		cout <<"用户不存在"<< endl;
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

//菜单界面
void showMenu()
{
	cout <<"***************************"<< endl;
	cout <<"*****  1：添加联系人  *****"<< endl;
	cout <<"*****  2：显示联系人  *****"<< endl;
	cout <<"*****  3：删除联系人  *****"<< endl;
	cout <<"*****  4：查找联系人  *****"<< endl;
	cout <<"*****  5：修改联系人  *****"<< endl;
	cout <<"*****  6：清空联系人  *****"<< endl;
	cout <<"*****  0：推出通讯录  *****"<< endl;
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
		    	cout <<"全部添加完成"<< endl;
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
		        cout <<"欢迎下次使用"<< endl;
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
