#include "AddRequirementCommand.h"
#include "DeletePageCommand.h"
#include "CodeGroup.h"
#include "PageGroup.h"
#include "RequirementGroup.h"
#include "IGroup.h"
#include "Invoker.h"
#include <iostream>

using namespace std;


void DoIt()
{

	IGroup *rg = new CRequirementGroup();
	rg->Find();
	rg->Add();
	rg->Plan();
	delete rg;
	cout << endl;

	IGroup *pg = new CPageGroup();
	pg->Find();
	pg->Add();
	pg->Plan();
	delete pg;
	cout << endl;

	IGroup *cg = new CCodeGroup();
	cg->Find();
	cg->Add();
	cg->Plan();
	delete cg;
	cout << endl;


}

void DoNew()
{
	cout << "----------�ͻ����÷��ˣ�ϣ��ֻ��һ���ˣ���������Ҫ��ʲô----------" << endl;
	cout << "----------�ͻ�Ҫ������һ������----------" << endl;
	CInvoker gary;
	ICommand *pcommand = new CAddRequirementCommand();
	gary.SetCommand(pcommand);
	gary.Action();
	delete pcommand;
	cout << endl;

	cout << "----------�ͻ�Ҫ��ɾ��һ��ҳ��----------" << endl;
	CInvoker ricky;
	ICommand *pcommand2 = new CDeletePageCommand();
	ricky.SetCommand(pcommand2);
	ricky.Action();
	delete pcommand2;
	cout << endl;



}


int main()
{
	//�ͻ�ԭ������������
	DoIt();

	//�ͻ������鷳�ˣ�ÿ�θĶ���Ҫ�Ҳ�ͬ���飬̸��ͬ����
	//�ͻ�ֻ����һ���ˣ�������Ҫ��ʲô�Ϳ��ԣ�����������ļ�������������ô��
	DoNew();


	system("pause");
	return 0;
}