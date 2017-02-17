#include "Letter.h"

CLetter::CLetter()
{
}

CLetter::~CLetter()
{
}

void CLetter::WriteContent(string content)
{
	cout << "填写信的内容... ..." << endl;
}

void CLetter::WriteEnvelope(string address)
{
	cout << "填写收件人地址及姓名... ..." << endl;
}

void CLetter::InfoEnvelope()
{
	cout << "把信放到信封中..." << endl;
}

void CLetter::SendLetter()
{
	cout << "邮递信件..." << endl;
}
