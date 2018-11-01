#ifndef LABELGENERATOR_H
#define LABELGENERATOR_H

#pragma once
#include <iostream>

using namespace std;
class LabelGenerator
{
private:
	string label;
	int count_num;

public:

	LabelGenerator(string name,int num);
	string convert(int num);

	 void set_label(string l);
	void set_count(int c);
	string get_label();
	int get_count();
	string nextLabel();
	virtual ~LabelGenerator();
};

#endif // LABELGENERATOR_H
