#pragma once
#include "IHuman.h"

class CYellowHuman:public IHuman
{
public:
	CYellowHuman(){}
	~CYellowHuman(){}
	void Laugh()
	{
		cout << "��ɫ���ֻ��Ц���Ҹ�ѽ��" << endl;
	}
	void Cry()
	{
		cout << "��ɫ���ֻ��" << endl;
	}
	void Talk()
	{
		cout << "��ɫ���ֻ�˵����һ��˵�Ķ���˫�ֽ�" << endl;
	}
	virtual void Sex() = 0;
private:

};
