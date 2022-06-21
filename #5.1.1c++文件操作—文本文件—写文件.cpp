#include<iostream>
using namespace std;
#include<fstream> //头文件包括 

//文本文件 写文件 

void test01()
{
	//1、包含头文件 fstream
	
	//2、创建流对象
	
	ofstream ofs;
	
	//3、指定打开方式
    //ios:in为读文件而打开文件
    //ios::out为写文件而打开文件
    //ios:ate初始位置：文件尾
    //ios:app追加方式写文件
    //ios:trunc如果文件存在先删除，再创建
    //ios:binary二进制方式
	ofs.open("test.txt",ios::out);
	
	//4、写内容
	ofs <<"姓名：张三"<< endl;
	ofs <<"性别：男"<< endl;
	ofs <<"年龄：18"<< endl;
	
	//5、关闭文件
	//ofs.close();
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
