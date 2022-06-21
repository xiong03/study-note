#ifndef _CODE_BLOCK
#define _CODE_BLOCK //��ֹͷ�ļ��ظ�����
#include<iostream> //�������������ͷ�ļ�
#include<string>
using namespace std; //ʹ�ñ�׼�����ռ�
#include<fstream>
#define FILENAME "empFile.txt"

//ְ��������
class Worker{
public:
	
	//��ʾ������Ϣ
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;
	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};

//��ͨԱ����
class Employee:public Worker{
public:
	
	//���캯��������
	Employee(int id,string name,int dId); 

	//��ʾ������Ϣ������
	virtual void showInfo();
	
	//��ȡ��λ���Ƶ�����
	virtual string getDeptName();
	
}; 

Employee::Employee(int id,string name,int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

//��ʾ������Ϣ��ʵ��
void Employee::showInfo()
{
	cout <<"ְ����ţ�"<< this->m_Id
	     <<"\tְ��������"<< this->m_Name
	     <<"\t��λ��"<< this->getDeptName()
	     <<"\t��λְ����ɾ�����������"<< endl;
}

//��ȡ��λ���Ƶ�ʵ��
string Employee::getDeptName()
{
	return string("Ա��"); 
}

//������ 
class Manager:public Worker{
public:
	
	//���캯��������
	Manager(int id,string name,int dId);
	 
	//��ʾ������Ϣ������
	virtual void showInfo();
	
	//��ȡ��λ���Ƶ�����
	virtual string getDeptName();
	
};

//���캯����ʵ��
Manager::Manager(int id,string name,int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;  
}

//��ʾ������Ϣ��ʵ��
void Manager::showInfo()
{
	cout <<"ְ����ţ�"<< this->m_Id
	     <<"\tְ��������"<< this->m_Name
	     <<"\t��λ��"<< this->getDeptName()
	     <<"\t��λְ������ϰ彻�������񣬲��·������Ա��"<< endl;
}

//��ȡ��λ���Ƶ�ʵ��
string Manager::getDeptName()
{
	return string("����");
}

//�ϰ��� 
class Boss:public Worker{
public:
	
	//���캯��������
	Boss(int id,string name,int dId);
	 
	//��ʾ������Ϣ������
	virtual void showInfo();
	
	//��ȡ��λ���Ƶ�����
	virtual string getDeptName();
	
};

//���캯����ʵ��
Boss::Boss(int id,string name,int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;  
}

//��ʾ������Ϣ��ʵ��
void Boss::showInfo()
{
	cout <<"ְ����ţ�"<< this->m_Id
	     <<"\tְ��������"<< this->m_Name
	     <<"\t��λ��"<< this->getDeptName()
	     <<"\t��λְ�𣺹���˾��������"<< endl;
}

//��ȡ��λ���Ƶ�ʵ��
string Boss::getDeptName()
{
	return string("�ܲ�");
}

//ְ�����������
class WorkerManager{
public:
	
	//���캯��������
	WorkerManager();
	
	//չʾ�˵�������
	void Show_Menu();
	
	//�˳�ϵͳ������
	void ExitSystem();
	
	//��¼ְ������
	int m_EmpNum; 
	
	//ְ������ָ��
	Worker ** m_EmpArray;
	
	//���ְ��������
	void Add_Emp();
	
	//�����ļ�������
	void save();
	
	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FilesEmpty;
	
	//ͳ���ļ�������������
	int get_EmpNum();
	
	//��ʼ��Ա��������
	void init_Emp();
	
	//��ʾְ��������
	void Show_Emp();
	
	//ɾ��ְ��������
	void Del_Emp();
	
	//�ж�ְ���Ƿ����  ������ڷ���ְ�����������е�λ�ã������ڷ���-1
	int IsExist(int id);
	
	//�޸�ְ��������
	void Mod_Emp();
	
	//����ְ��������
	void Find_Emp();
	
	//���ձ�����������
	void Sort_Emp();
	
	//����ļ�������
	void Clean_File();
	
	//��������������
	~WorkerManager();
	
};

//���캯����ʵ��
WorkerManager::WorkerManager()
{
	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME,ios::in); //���ļ�
	
	if(!ifs.is_open())
	{
		cout <<"�ļ�������"<< endl;
		//��ʼ������
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FilesEmpty = true;
		ifs.close();
		return;
	}
	
	//2���ļ����� ����Ϊ��
	char ch; //��ʾ���ļ��ж���һ���ַ������浽ch��
	ifs >> ch; //��ʾ���ch�������
	if(ifs.eof())
	{
		//�ļ�Ϊ��
		cout <<"�ļ�Ϊ��"<< endl;
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FilesEmpty = true;
		ifs.close();
		return;
	}
	
	//3���ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	cout <<"ְ��������Ϊ��"<< num << endl;
	this->m_EmpNum = num;
	
	//���ٿռ�
	this->m_EmpArray = new Worker*[this->get_EmpNum()];
	//���ļ������ݴ浽������
	this->init_Emp();
	
	//���Դ���
	//for(int i = 0; i < this->get_EmpNum(); i++)
	//{
	//	cout <<"ְ����ţ�"<< this->m_EmpArray[i]->m_Id <<" "
	//	     <<"������"<< this->m_EmpArray[i]->m_Name <<" "
	//	     <<"���ű�ţ�"<< this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

//չʾ�˵�������
void WorkerManager::Show_Menu()
{
	cout <<"********************************************"<< endl;
	cout <<"*********  ��ӭʹ��ְ������ϵͳ�� **********"<< endl;
	cout <<"*************  0:�˳��������  *************"<< endl;
	cout <<"*************  1:����ְ����Ϣ  *************"<< endl;
	cout <<"*************  2:��ʾְ����Ϣ  *************"<< endl;
	cout <<"*************  3:ɾ����ְְ��  *************"<< endl;
	cout <<"*************  4:�޸�ְ����Ϣ  *************"<< endl;
	cout <<"*************  5:����ְ����Ϣ  *************"<< endl;
	cout <<"*************  6:���ձ������  *************"<< endl;
	cout <<"*************  7:��������ĵ�  *************"<< endl;
	cout <<"********************************************"<< endl;
	cout << endl;
	 
}

//�˳������ʵ��
void WorkerManager::ExitSystem()
{
	cout <<"��ӭ�´�ʹ��"<< endl;
	system("pause");
	exit(0); //�Ƴ�����
}

//���ְ��������
void WorkerManager::Add_Emp()
{
	cout <<"���������ְ��������"<< endl;
	
	int addNum = 0; //�����û�����������
	cin >> addNum;
	
	if(addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum; //�¿ռ����� = ԭ����¼���� + ��������
		
		//�����¿ռ�
		Worker ** newSpace = new Worker*[newSize];
		
		//��ԭ���ռ��µ����ݿ������¿ռ���
		if(this->m_EmpArray != NULL)
		{
			for(int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		
		//�������������
		for(int i = 0; i < addNum; i++)
		{
			int id; //ְ�����
			string name; //ְ������
			int dSelect; //����ѡ��
			
			cout <<"�������"<< i+1 <<"����ְ����ţ�"<< endl;
			cin >> id;
			
			cout <<"�������"<< i+1 <<"����ְ��������"<< endl;
			cin >> name;
			
			cout <<"��ѡ���ְ���ĸ�λ"<< endl;
			cout <<"1����ְͨ��"<< endl;
			cout <<"2������"<< endl;
			cout <<"3���ϰ�"<< endl;
			cin >> dSelect;
			
			Worker * worker = NULL;
		    switch(dSelect)
			{
			case 1:
				worker = new Employee(id,name,1);
				break;
			case 2:
				worker = new Manager(id,name,2);
				break;
			case 3:
				worker = new Boss(id,name,3);
				break;
			default:
			    break;
			}
		    //������ְ��ְ�𱣴浽������
			newSpace[this->m_EmpNum + i] = worker;
	    }
	    
	    //�ͷ�ԭ�пռ�
	    delete[] this->m_EmpArray;
	    
	    //�����¿ռ��ָ��
	    this->m_EmpArray = newSpace;
		
		//�����µ�ְ������
		this->m_EmpNum = newSize;
		
		//����ְ����Ϊ�ձ�־
		this->m_FilesEmpty = false; 
		
		//��ʾ��ӳɹ�
		cout <<"�ɹ����"<< addNum <<"����ְ��"<< endl;
		
		//�������ݵ��ļ���
		this->save();
		 
    }
	else
	{
		cout <<"������������"<< endl;
	}
	
	//������� �����󷵻��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

//�����ļ���ʵ�� 
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out); //������ķ�ʽ���ļ�����д�ļ�
	
	//��ÿ��������д�뵽�ļ���
	for(int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id <<" "
		    << this->m_EmpArray[i]->m_Name <<" "
		    << this->m_EmpArray[i]->m_DeptId << endl;
	}
	
	//�ر��ļ�
	ofs.close(); 
}

//ͳ���ļ���������ʵ��
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in); //���ļ�
	
	int id;
	string name;
	int dId;
	
	int num = 0;
	while(ifs >> id && ifs >> name && ifs >> dId)
	{
		//ͳ����������
		num++;
	}
	
	return num; 
}

//��ʼ��Ա����ʵ�� 
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	
	int id;
	string name;
	int dId;
	
	int index;
	while(ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;
		
		if(dId == 1) //��ͨԱ��
		{
			worker = new Employee(id,name,dId);
		}
		else if(dId == 2) //����
		{
			worker = new Manager(id,name,dId);
		}
		else if(dId == 3) //�ϰ�
		{
			worker = new Boss(id,name,dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	
	//�ر��ļ�
	ifs.close();
}

//��ʾְ����ʵ��
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if(this->m_FilesEmpty)
	{
		cout <<"�ļ������ڻ��߼�¼Ϊ��"<< endl;
	}
	else
	{
		for(int i = 0; i < this->get_EmpNum(); i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�����⽨������
	system("pause");
	system("cls");
}

//ɾ��ְ����ʵ��
void WorkerManager::Del_Emp()
{
	if(this->m_FilesEmpty)
	{
		cout <<"�ļ������ڻ��¼Ϊ��"<< endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout <<"��������Ҫɾ��ְ�����"<< endl;
		int id;
		cin >> id;
		
		int index = this->IsExist(id);
		if(index != -1) //˵��ְ�����ڲ���Ҫɾ����indexλ���ϵ�ְ��
		{
			//����ǰ��
			for(int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i+1];
			}
			this->m_EmpNum--; //���������м�¼����Ա����
			//ͬ�����µ��ļ���
			this->save();
			
			cout <<"ɾ���ɹ���"<< endl;
		}
		else
		{
			cout <<"ɾ��ʧ�ܣ�δ�ҵ���ְ��"<< endl;
		}
	}
	
	//�����������
	system("pause");
	system("cls");
}
	
//�ж�ְ���Ƿ����  ������ڷ���ְ�����������е�λ�ã������ڷ���-1
int WorkerManager::IsExist(int id)
{
	int index = -1;
	
	for(int i = 0; i < this->m_EmpNum; i++)
	{
		if(this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;
			
			break; 
		}
	}
}

//�޸�ְ����ʵ��
void WorkerManager::Mod_Emp()
{
	if(this->m_FilesEmpty)
	{
		cout <<"�ļ������ڻ��ļ�Ϊ��"<< endl;
	}
	else
	{
		cout <<"�������޸�ְ���ı��"<< endl;
		int id;
		cin >> id;
		
		int ret = this->IsExist(id);
		if(ret != -1)
		{
			//���ҵ���ŵ�ְ��
			
			delete this->m_EmpArray[ret];
			
			int newId = 0;
			string newName = " ";
			int dSelect = 0;
			
			cout <<"�鵽��"<< id <<"��ְ�����������µ�ְ����"<< endl;
			cin >> newId;
			
			cout <<"������������"<< endl;
			cin >> newName;
			
			cout <<"�������λ"<< endl;
			cout <<"1����ְͨ��"<< endl;
			cout <<"2������"<< endl;
			cout <<"3���ϰ�"<< endl;
			
			cin >> dSelect;
			
			Worker * worker = NULL;
			switch(dSelect)
			{
			case 1:
				worker = new Employee(newId,newName,dSelect);
				break;
			case 2:
				worker = new Manager(newId,newName,dSelect);
				break;
			case 3:
				worker = new Boss(newId,newName,dSelect);
				break;	
			default:
				break;
			}
			
			//�������ݵ�������
			this->m_EmpArray[ret] = worker;
			
			cout <<"�޸ĳɹ�!"<< endl;
			
			//���浽�ļ���
			this->save();
			 
		}
		else
		{
			cout <<"�޸�ʧ�ܣ����޴���"<< endl;
		}
	}
	
	//�����������
	system("pause");
	system("cls");
}

//����ְ����ʵ��
void WorkerManager::Find_Emp()
{
	if(this->m_FilesEmpty)
	{
		cout <<"�ļ������ڻ��¼Ϊ��"<< endl;
	}
	else
	{
		cout <<"��������ҵķ�ʽ:"<< endl;
		cout <<"1����ְ����Ų���"<< endl;
		cout <<"2����ְ����������"<< endl;
		
		int select;
		cin >> select;
		if(select == 1)
		{
			//���ձ�Ų���
			int id;
			cout <<"��������ҵ�ְ����ţ�"<< endl;
			cin >> id;
			
			int ret = IsExist(id);
			if(ret != -1)
			{
				//�ҵ�ְ��
				cout <<"���ҳɹ�����ְ����Ϣ���£�"<< endl;
				
				//������ʾ��Ϣ�Ľӿ�
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout <<"���޴���"<< endl;
			}
		}
		else if(select == 2)
		{
			//������������
			string name;
			cout <<"��������ҵ�ְ��������"<< endl;
			cin >> name;
			
			//�����ж��Ƿ�鵽�ı�־
			bool flag = false; //Ĭ��δ�ҵ�ְ��
			
			for(int i = 0; i < this->m_EmpNum; i++)
			{
				if(this->m_EmpArray[i]->m_Name == name)
				{
					cout <<"���ҳɹ���ְ�����Ϊ��"
					<< this->m_EmpArray[i]->m_Id 
					<<"��ְ����Ϣ���£�"<< endl;
					
					flag = true;
					
					//������ʾ��Ϣ�Ľӿ�
					this->m_EmpArray[i]->showInfo(); 
				}
			}
			if(flag == false)
			{
				cout <<"����ʧ�ܣ����޴��ˣ�"<< endl;
			}
		}
		else
		{
		    cout <<"�����ѡ������"<< endl;	
	    }
	}
	//�����������
	system("pause");
	system("cls"); 
}

//���ձ�������ʵ��
void WorkerManager::Sort_Emp()
{
	if(this->m_FilesEmpty)
	{
		cout <<"�ļ������ڻ��¼Ϊ��"<< endl;
		system("pause");
		system("cls");
	}
	else 
	{
		cout <<"��ѡ������ʽ��"<< endl;
		cout <<"1����ְ���Ž�������"<< endl;
		cout <<"2����ְ���Ž��н���"<< endl;
		
		int select;
		cin >> select;
		for(int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrMax = i; //����һ����Сֵ�����ֵ�±�
			for(int j = 0; j < this->m_EmpNum; i++)
			{
				if(select == 1) //����
			    {
				    if(this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[i]->m_Id)
				    {
				    	minOrMax = j;
					}
					else //����
					{
						if(this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[i]->m_Id)
						{
							minOrMax = j;
						}
					}
			    }
			    
			    //�ж�һ��ʼ�϶�����Сֵ�����ֵ�ǲ��Ǽ������Сֵ�����ֵ��������ǣ���������
			    if(i != minOrMax)
				{
					Worker * temp = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
					this->m_EmpArray[minOrMax] = temp;
				}
			}
		}
	}
	
	cout <<"����ɹ��������Ľ��Ϊ��"<< endl;
	this->save(); //�����Ľ�����浽�ļ���
	this->Show_Emp(); //չʾ����ְ��
}

//����ļ���ʵ��
void WorkerManager::Clean_File()
{
	cout <<"ȷ����գ�"<< endl;
	cout <<"1��ȷ��"<< endl;
	cout <<"2��ȡ��"<< endl;
	
	int select = 0;
	cin >> select;
	if(select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME,ios::trunc); //ɾ���ļ������´���
		ofs.close();
		
		if(this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for(int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			
			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FilesEmpty = true;
		}
		
		cout <<"��ճɹ���"<< endl;
	}
	
	system("pause");
	system("cls");
}

//����������ʵ��
WorkerManager::~WorkerManager()
{
	if(this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

int main()
{
	//ʵ���������߶���
	WorkerManager wm;
	
	int choice = 0; //�����洢�û���ѡ��
	while(true)
	{
		system("color E5"); //��ɫ
		//����չʾ�˵���Ա����
	    wm.Show_Menu();
	    
	    cout <<"����������ѡ��"<< endl;
	
	    cin >> choice; //�����û���ѡ��
	
	    switch(choice)
	    {
		case 0: //�Ƴ�ϵͳ
		    wm.ExitSystem();
		    break;
		case 1: //����ְ��
		    wm.Add_Emp();
		    break;
		case 2: //��ʾְ��
		    wm.Show_Emp(); 
		    break;
		case 3: //ɾ��ְ��
		    wm.Del_Emp();
		    break;
		case 4: //�޸�ְ��
		    wm.Mod_Emp(); 
		    break;
		case 5: //����ְ��
		    wm.Find_Emp();
		    break;
		case 6: //����ְ��
		wm.Sort_Emp();
		    break;
		case 7: //����ĵ�
		wm.Clean_File();
		    break;
		default:
			system("cls"); //����
		    break;
	    }
	}

	system("pause");
	
	return 0;
}
#endif
