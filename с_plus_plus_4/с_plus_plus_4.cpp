#include "pch.h"
#include <iostream>
#include <stdio.h>    
#include <string>   
#include <windows.h>
#include <stdio.h>

std::string processed(std::string strX, std::string str3)
{
	for (int i = 0; i < strX.length(); i++)
	{
		if (str3.find(strX[i]) == -1)
		{
			str3.push_back(strX[i]);
		}
	}
	return str3;
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string str1; //= "Hello World!";
	std::string str2; //= "+380979267080";
	std::cout << "Еnter the text:\n";
	std::cin >> str1;
	std::cout << "Еnter the text:\n";
	std::cin >> str2;
	std::string str3 = std::string();
	str3 = processed(str1, str3);
	str3 = processed(str2, str3);
	std::cout << "\nProcessed text:\n";
	std::cout << str3 << "\n";
	/*
	for (int i = 0; i < str1.length(); i++)
	{
		if (str3.find(str1[i]) == -1)
		{
			str3.push_back(str1[i]);
			//cout << str3 << endl;;
		}
	}
	for (int i = 0; i < str2.length(); i++)
	{
		if (str3.find(str2[i]) == -1)
		{
			str3.push_back(str2[i]);
			//cout << str3 << endl;;
		}
	}
	  */
}
