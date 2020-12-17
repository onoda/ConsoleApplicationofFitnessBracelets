// options.cpp -- 菜单下的选项。
/*
* switch (choice)
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
		cout << "加载文件失败！\a\n\n";
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