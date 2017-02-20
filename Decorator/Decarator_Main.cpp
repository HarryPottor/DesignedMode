#include "FouthGradeSchoolReport.h"
#include "HighScoreDecorator.h"
#include  "SortDecorator.h"
#include <iostream>

using namespace std;

void DoNew()
{
	ISchoolReport * psr = new CFouthGradeSchoolReport;
	ISchoolReport *pssr = new CSortDecorator(psr);
	ISchoolReport *phsr = new CHighScoreDecorator(pssr);
	phsr->Report();
	phsr->Sign("����");
	// ��װ���ĸ�����Ҫ��˳���Ѿ���װ���ڲ�ȷ���ã���һ��Ҫ�������һ��װ�����Ľӿڡ�
		//ISchoolReport *phsr = new CHighScoreDecorator(psr);//������߷�˵���ĳɼ���
		//ISchoolReport *pssr = new CSortDecorator(phsr);//�ּ��˳ɼ�������˵��
		//pssr->Report();//���ɼ���
		//pssr->Sign("����");//�ܿ��ģ���ǩ����

	delete pssr;
	delete phsr;
	delete psr;

}

int main()
{
	DoNew();

	system("pause");
	return 0;
}