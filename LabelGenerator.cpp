#include "LabelGenerator.h"
#include <iostream>
#include <string>
using namespace std;


LabelGenerator::LabelGenerator(string name, int num)
{
	label = name;
	count_num = num;
}
void LabelGenerator:: set_label(string l)
{
	label = l;
}
void LabelGenerator:: set_count(int c)
{
	count_num =c;
}
string LabelGenerator:: get_label()
{
	return label ;
}
int LabelGenerator :: get_count()
{
	return count_num;
}

string LabelGenerator::convert(int num)
{
	string temp = "";
	if (num == 0)
		return "0";
	while (num >0)
	{
		temp += num % 10 + '0';
		num /= 10;
	}
	reverse(temp.begin(), temp.end());
	return temp;
}
string LabelGenerator:: nextLabel()
{
	string nextlabel = label+" "+ convert(count_num);
	count_num++;
	return nextlabel;

}

LabelGenerator::~LabelGenerator()
{
}
