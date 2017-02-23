#include "Requrest.h"

CRequrest::CRequrest()
{
	m_sReName = "Unknow";
	m_iReLevel = 0;
}

CRequrest::~CRequrest()
{
}

void CRequrest::SetName(string name)
{
	m_sReName = name;
}

string CRequrest::GetName()
{
	return m_sReName;
}

void CRequrest::SetLevel(int level)
{
	m_iReLevel = level;
}

int CRequrest::GetLevel()
{
	return m_iReLevel;
}
