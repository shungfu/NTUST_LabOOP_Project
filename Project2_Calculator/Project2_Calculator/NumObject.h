// Student ID: 
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ program about a calculator.
#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class NumObject
{
public:
	NumObject();
	NumObject(stringstream& formula);
	~NumObject();

	void print();

	const NumObject& operator=(stringstream& formula);

private:

};