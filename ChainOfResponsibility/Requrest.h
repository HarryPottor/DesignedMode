#pragma once
#include <iostream>
using namespace std;
class CRequrest
{
public:
	CRequrest();
	~CRequrest();

	void SetName(string name);
	string GetName();
	void SetLevel(int level);
	int GetLevel();
private:
	string m_sReName;
	int m_iReLevel;
};