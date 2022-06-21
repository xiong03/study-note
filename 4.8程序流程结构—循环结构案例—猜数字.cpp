#include<iostream>
using namespace std;
#include<stdlib.h>
 
int main()
{
	//1：系统生成随机数
	
    int num = rand() % 100 + 1; // rand()%100 + 1 系统自动生成 0 + 1 ~ 99 + 1 的随机数 
	//cout << num << endl;
	cout << "请你输入一个数字"<< endl;
	 
	//2：玩家进行猜测
	int val = 0;//玩家输入的数据
	
	while (1)
	{
		cin >> val;
	 
	    //3：判断玩家的猜测
	
	    //猜错—提示猜的结果，过大或者过小，重新返回第2步
	    if(val > num)
	    {
		    cout <<"猜测过大"<< endl;
	    }
	    else if(val < num)
	    {
		    cout <<"猜测过小"<< endl; 
	    }
	    else if(val == num)
	    {
		    cout <<"恭喜你猜对了"<< endl; 
	    //猜对—退出游戏
		break;    
		}
	    
    }
	
	
	
	 
	system("pause");
	
	return 0;
}
