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
	phsr->Sign("老三");
	// 先装饰哪个不重要，顺序已经在装饰内部确定好，但一定要调用最后一个装饰器的接口。
		//ISchoolReport *phsr = new CHighScoreDecorator(psr);//加了最高分说明的成绩单
		//ISchoolReport *pssr = new CSortDecorator(phsr);//又加了成绩排名的说明
		//pssr->Report();//看成绩单
		//pssr->Sign("老三");//很开心，就签字了

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