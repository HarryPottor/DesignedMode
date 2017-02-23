#include "CBAOberver.h"

CBAOberver::CBAOberver(ISubject *subject)
{
	m_pSubject = subject;
}

CBAOberver::~CBAOberver()
{
}

void CBAOberver::Update()
{
	cout << m_pSubject->GetState().c_str() << "CBA Observer update" << endl;
}
