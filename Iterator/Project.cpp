#include "Project.h"

CProject::CProject()
{
	m_name = "";
	m_num = 0;
	m_cost = 0;
}

CProject::CProject(string name, int num, int cost):m_name(name), m_num(num),m_cost(cost)
{
}

CProject::~CProject()
{

}

string CProject::GetProjectInfo()
{
	string info = "";
	info.append("名称: ");
	info.append(m_name);

	info.append("\t人数: ");
	char num[10];
	sprintf(num, "%d", m_num);
	info.append( num);

	info.append("\t费用: ");
	char cost[10];
	sprintf(cost, "%d", m_num);
	info.append((cost));
	return string();
}

void CProject::Add(string name, int num, int cost)
{
	m_projectList.push_back(new CProject(name, num, cost));
}

IProjectIterator * CProject::GetIterator()
{
	return new IProjectIterator;
}



