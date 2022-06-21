#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyShuZu{
public:
	
	MyShuZu(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	
	MyShuZu(const MyShuZu& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		
		for(int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		
		MyShuZu& operator=(const MyShuZu& arr)
		{
			if(this->pAddress != NULL)
			{
				delete [] this->pAddress;
				this->pAddress = NULL;
				this->m_Capacity = 0;
				this->m_Size = 0;
			}
			
			this->m_Capacity = arr.m_Capacity;
			this->m_Size = arr.m_Size;
			this->pAddress = new T[this->m_Capacity];
			for(int i = 0; i < this->m_Size; i++)
			{
				this->pAddress[i] = arr.pAddress[i];
			}
			return *this;
		}
	}
	
	~MyShuZu()
	{
		if(this->pAddress != NULL)
		{
			delete [] this->pAddress;
			this->pAddress = NULL;
			
		}
	}
	
private:
	
	T * pAddress;
	
	int m_Capacity;
	
	int m_Size;
};
