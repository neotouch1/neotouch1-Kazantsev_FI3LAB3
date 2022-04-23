#include "Header.h"

inline void line()
{
	std::cout << std::endl;
}


int main()
{
	char A[] = "ZAGON";
	TString str1;
	TString str2(A);
	TString str3(5, 'q');
	TString str4 = str2;
	TString* split;
	int** symb;
	std::cout << "String: " << str3.GetString() << "\n" << "Length: " << str3.GetLength() << "\n";
	line();

	str1.SetString("I'm not a superman");
	str3 = A;
	str4 = str1 + str3;
	std::cout << str4;
	line();

	std::cout << "Index 's' in '" << str4 << "' == " << str4.Find('s') << "\t";
	line();

	if (str2 == str3) std::cout << "str2 == str3\n";
	if (str1 < str3) std::cout << "str1 < str3\n";
	if (str2 > str4) std::cout << "str2 > str4\n";
	line();

	std::cout << "str2.string[0] == " << str2[0] << std::endl;
	line();


	split = str1.Split(' ');
	for (int i = 0; i < str1.GetCountOfSplit(); i++)
	{
		std::cout << split[i] << "\n";
	}
	line();

	str1 += str3;
	
	return 0;
}