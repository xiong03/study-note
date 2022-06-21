#include<iostream>
using namespace std;

int main()
{
	//do...while语句
	//在屏幕中输出0到9这10个数字
	
	int num = 0;
	int num1 = 0;
	
	do
	{
		cout << num << endl;
		num++;
	}
	while(num < 10);//dowhile语句中while后面有; 
	
	while(num1 < 10)
	{
		cout << num1 << endl;
		num1++;
	}
	//do...while和while的区别在于do...while会先执行一次循环语句
	 
	system("pause");
	
	return 0;
} 
