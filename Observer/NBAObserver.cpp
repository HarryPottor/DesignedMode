#include "NBAObserver.h"

NBAOberver::NBAOberver(ISubject *subject)
{
	m_pSubject = subject;
}

NBAOberver::~NBAOberver()
{
}

void NBAOberver::Update()
{
	cout << m_pSubject->GetState().c_str() << "NBA Oberver Update" << endl;
}
