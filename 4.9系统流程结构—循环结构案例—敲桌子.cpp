#include<iostream>
using namespace std;

int main()
{
	//敲桌子案例 
	//1：先输出1~100这些数字
	for(int num = 1; num <=100; num++)
	{
		//2：从这100个数字中找到特殊的数字，打印“敲桌子” 
	//特殊数字 
	//a：7的倍数 %7 = 0;
	//b：个位有7 %10 = 7;
	//c：十位有7 /10 %10 = 7;
	if(num % 7 == 0 || num % 10 == 7 || num / 10 == 7)// 如果是特殊数字，打印敲桌子 
	{
		cout <<"敲桌子"<< endl;
	} 
	else// 如果不是特殊数字，才打印数字 
	{
		cout << num << endl;
	}
	
	} 
	
	system("pause");
	
	return 0;
} 
