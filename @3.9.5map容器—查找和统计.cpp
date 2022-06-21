#include<iostream>
using namespace std;
#include<map>

//map容器 查找和统计 
void printMap(map<int,int>&m)
{
	for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout <<"key = "<< (*it).first <<" value = "<< it->second << endl; 
	}
	cout << endl;
}

void test01()
{
	//查找
	map<int,int>m;
	m.insert(make_pair(1,10));
	m.insert(make_pair(2,20));
	m.insert(make_pair(3,30));
	m.insert(make_pair(3,40));
	
	map<int,int>::iterator pos = m.find(3);
	
	if(pos != m.end())
	{
		cout <<"查到了元素 key = "<< (*pos).first <<" value = "<< (*pos).second << endl;
	}
	else
	{
		cout <<"未找到元素"<< endl;
	}
	
	//统计
	//map不允许插入重复的key 元素，count统计而言 结果要么是1 要么是0
	//multimap的count结果可能大于1 
	int num = m.count(3);
	cout <<"num = "<< num << endl; 
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
