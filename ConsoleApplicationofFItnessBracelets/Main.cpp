// Main.cpp -- 主程序，以及数据框架。

#include<iostream>
#include<Windows.h>
using namespace std;
unsigned menu();//考虑鲁棒性，需要避免用户输入非数字时会出现的卡死现象;

/*

需要添加函数声明

*/	

int main()
{
	cout << "您好，别来无恙啊！\n"
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
			break;//显示自己的各项指标——ofl
		case input_indicators:
			break;//输入各项指标，考虑编写函数input(int)来实现详细功能——ifl
		case others_indicators:
			break;//查看他人指标——ofl，考虑使用多个排序函数rankX()来选择呈现
		case help:
			break;//帮助，编写帮助文本文档，——ofl
		default: cout << "再见！\n";
			break;//返回
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
	
	cout << "欢迎使用智能手环！请输入您的选择所对应的数字编号：\n"
		"1 -- 显示自身各项指标；\n"
		"2 -- 修改个人信息与健康指标；\n"
		"3 -- 运动指标PK\n"
		"0 -- 帮助；\n"
		"输入其它字符以退出。\n";
	unsigned choice;
	if (!(cin >> choice))
	{
		cin.clear();
		choice = 4;
	}

	return choice;
}
