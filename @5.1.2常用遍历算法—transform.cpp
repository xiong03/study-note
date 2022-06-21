#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
//常用遍历算法 transform

class Transform{
public:
	int operator()(int v)
	{
		return v + 100;
	}
};

class MyPrint{
public:
	void operator()(int v)
	{
		cout << v <<" ";
	}
};

void test01()
{
	vector<int>v;
	for(int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	vector<int>vTarget; //目标容器
	
	vTarget.resize(v.size()); //目标容器需要开辟空间
	
	transform(v.begin(),v.end(),vTarget.begin(),Transform());
	
	for_each(vTarget.begin(),vTarget.end(),MyPrint());
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
