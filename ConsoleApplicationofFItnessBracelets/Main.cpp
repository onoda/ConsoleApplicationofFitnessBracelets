// Main.cpp -- �������Լ����ݿ�ܡ�

#include<iostream>
#include<Windows.h>
using namespace std;
unsigned menu();//����³���ԣ���Ҫ�����û����������ʱ����ֵĿ�������;

/*

��Ҫ��Ӻ�������

*/	

int main()
{
	cout << "���ã�����������\n"
			"----------------------------------------------------\n\n";
		Sleep(500);

	enum option
	{
		help, my_indicators, input_indicators, others_indicators
	};
	
	unsigned choice;
	do
	{
		choice = menu();
		switch (choice)
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
		cout << "--------------------------------------------------\n\n";
		Sleep(500);
	} while (choice <= 3);
	system("pause");

	return 0;
}
unsigned menu()
{
	Sleep(500);
	
	cout << "��ӭʹ�������ֻ�������������ѡ������Ӧ�����ֱ�ţ�\n"
		"1 -- ��ʾ�������ָ�ꣻ\n"
		"2 -- �޸ĸ�����Ϣ�뽡��ָ�ꣻ\n"
		"3 -- �˶�ָ��PK\n"
		"0 -- ������\n"
		"���������ַ����˳���\n";
	unsigned choice;
	if (!(cin >> choice))
	{
		cin.clear();
		choice = 4;
	}

	return choice;
}
