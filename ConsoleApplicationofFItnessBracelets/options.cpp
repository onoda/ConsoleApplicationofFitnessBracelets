// options.cpp -- �˵��µ�ѡ�
/*
* switch (choice)
		{
		case my_indicators:
			break;//��ʾ�Լ��ĸ���ָ�ꡪ��ofl
		case input_indicators:
			break;//�������ָ�꣬���Ǳ�д����input(int)��ʵ����ϸ���ܡ���ifl
		case others_indicators:
			break;//�鿴����ָ�ꡪ��ofl������ʹ�ö��������rankX()��ѡ�����
		case help:
			break;//��������д�����ı��ĵ�������ofl
		default: cout << "�ټ���\n";
			break;//����
		}
*/
#include<iostream>
#include<Windows.h>
#include<fstream>
using namespace std;


void My_indicators()
{
	ifstream ifl;
	ifl.open("data.txt");
	if (!ifl.is_open())
	{
		cout << "�����ļ�ʧ�ܣ�\a\n\n";
		return;
	}
	char t;
	
	while (!(ifl.eof()))
	{
		ifl.get(t);
		cout << t;
	}
	
	cout << endl;
}