#pragma once

class CRequrest;
class IManager
{
public:
	IManager() :m_pSuccessor() {}
	virtual ~IManager(){}
	virtual void SetSuccessor(IManager* manager)=0;
	virtual void HandleRequrest(CRequrest*) = 0;

protected:
	IManager * m_pSuccessor;
};