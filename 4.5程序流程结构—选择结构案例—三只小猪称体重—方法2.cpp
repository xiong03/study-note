#include<iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout <<"请输入小猪A的重量："<< endl;
	cin >> num1;
	
	cout <<"请输入小猪B的重量："<< endl;
	cin >> num2;
	
	cout <<"请输入小猪C的重量："<< endl;
	cin >> num3;
	
	cout <<"小猪A的重量为："<< num1 << endl;
	cout <<"小猪B的重量为："<< num2 << endl;
	cout <<"小猪C的重量为："<< num3 << endl;
	if((num1 >num2) && (num1 > num3))
	{
		cout <<"小猪A最重"<< endl;
	} 
	else if((num2 > num1) && (num2 > num3))
	{
		cout <<"小猪B最重"<< endl; 
	}
	else if((num3 > num1) && (num3 > num2))
	{
		cout <<"小猪C最重"<< endl;
	}
	// ‘&&’ 在运算逻辑符中 
	system("pause");
	
	return 0;
}
