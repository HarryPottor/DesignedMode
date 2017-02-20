#pragma once
#include "IProject.h"
#include "IProjectIterator.h"
#include <iostream>
#include <vector>
using namespace std;

class CProject :public IProject
{
public:
	CProject();
	CProject(string name, int num, int cost);
	~CProject();
	string GetProjectInfo();
	void Add(string name, int num, int cost);
	IProjectIterator *GetIterator();
	void Erase();

private:
	string m_name;
	int m_num;
	int m_cost;
	vector<IProject*> m_projectList;
};
