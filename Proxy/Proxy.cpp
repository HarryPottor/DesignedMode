#include "Proxy.h"

Proxy::Proxy(Interface_Proxy * pro)
{
	proxy = pro;
}

Proxy::~Proxy()
{
	delete proxy;
}

void Proxy::LookFor()
{
	proxy->LookFor();
}

void Proxy::GiveMoney()
{
	proxy->GiveMoney();
}
