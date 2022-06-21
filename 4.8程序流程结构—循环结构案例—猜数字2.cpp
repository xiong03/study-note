#include<iostream>
using namespace std;
#include<string>
#include<ctime>
#include<stdlib.h>

int main()
{
	//添加随机数字，作用：利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//while循环实践猜数字游戏
	int num = rand()%100+1; //生成1~100的随机数
	
	int val = 0;
	
	int j;
	
	int i = 0;
	
	int time = 0;
	
	cout <<"请确定你要猜几次 "; 
	
	cin >> j;
	
	cout <<"请输入您猜测的数字"<< endl;
	 
	while(1)
	{
		cin >> val;
		i++;
		if(i >= j)
		{
			cout <<"游戏失败，退出游戏"<< endl;
			break; 
		}
		else if(val > num)
		{
			cout <<"您猜测的数字过大"<< endl; 
		}
		else if(val < num)
		{
			cout <<"您输入的数字过小"<< endl; 
		}
		else if(val == num)
		{
			cout <<"恭喜您猜测正确"<< endl;
			break;
		}
		
	}
	system("pause");
	
	return 0;
}
