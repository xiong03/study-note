#include<iostream>
using namespace std;

int main()
{
	/*
	-提示用户输入一个高考分数，根据分数做如下判断
	-分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本
	-在一本线中，如果大于700分，考入北大，大于650，考入清华，大于600考入人大。
	*/
	
	//1：提示输入高考分数
	int score = 0;
	cout <<"请输入高考考试分数："<< endl;
	cin >> score; 
	
	//2:显示高考分数
	cout <<"您输入的分数为："<< score << endl;
	 
	//3：判断
	//如果大于600—一本
       //大于700—北大
	   //大于650—清华
	   //其余     人大	 
	//如果大于500—二本
	//如果大于400—三本
	//其余情况，未考上本科
	if(score > 600)
	{
		cout <<"恭喜你考入一本大学"<< endl;
		if(score > 700)
		{
			cout <<"您能考入北京大学"<< endl; 
		}
		else if(score > 650)
		{
			cout <<"您能考入清华大学"<< endl;
	    }
		else if(score >600)
		{
			cout <<"您能考入人名大学"<< endl;
		}  
	}
	else if(score > 500)
	{
		cout <<"恭喜你考入二本大学"<< endl; 
	}
	else if(score > 400)
	{
		cout <<"恭喜你考入三本大学"<< endl;
	}
	else
	{
		cout <<"为考上本科，请再接再厉"<< endl; 
	}
	system("pause");
	
	return 0;
}
