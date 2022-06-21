#include<iostream>
using namespace std;
#include<string>

//string字符串拼接
void test01()
{
	string str1 = "我";
	str1 += "爱玩游戏";
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
	//str3.append(str2,0,3); //只截取到LOL
	str3.append(str2,4,3); //只截取DNF 参数2表示从哪个位置开始截取 参数3表示截取字符个数 
	cout <<"str3 = "<< str3 << endl; 
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
