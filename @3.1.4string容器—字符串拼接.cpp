#include<iostream>
using namespace std;
#include<string>

//string�ַ���ƴ��
void test01()
{
	string str1 = "��";
	str1 += "������Ϸ";
	cout <<"str1 = "<< str1 << endl;
	
	str1 += ":";
	cout <<"str1 = "<< str1 << endl;
	
	string str2 = "LOL DNF";
	str1 += str2;
	cout <<"str1 = "<< str1 << endl;
	
	string str3 = "I";
	str3.append(" love ");
	cout <<"str3 = "<< str3 << endl;
	
	str3.append("game abcde",4);
	cout <<"str3 = "<< str3 << endl;
	
	//str3.append(str2);
	//str3.append(str2,0,3); //ֻ��ȡ��LOL
	str3.append(str2,4,3); //ֻ��ȡDNF ����2��ʾ���ĸ�λ�ÿ�ʼ��ȡ ����3��ʾ��ȡ�ַ����� 
	cout <<"str3 = "<< str3 << endl; 
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
