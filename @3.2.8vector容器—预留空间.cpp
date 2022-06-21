#include<iostream>
using namespace std;
#include<vector>

//预留空间
void test01()
{
	vector<int>v;
	
	//利用reverse预留空间
	v.reserve(10000); 
	
	int num = 0; //统计开辟的次数
	int * p = NULL;
	for(int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if(p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout <<"num = "<< num << endl;
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
