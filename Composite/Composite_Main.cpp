#include "Compnent.h"
#include "ConcreteCompnent.h"
#include "Leaf.h"

int main()
{
	ICompnent * root = new ConcreteCompnent("ROOT");
	root->Add(new CLeaf("LeafA"));
	root->Add(new CLeaf("LeafB"));

	ICompnent * companyA = new ConcreteCompnent("companyA");
	companyA->Add(new CLeaf("LeafAA"));
	companyA->Add(new CLeaf("LeafAB"));
	root->Add(companyA);

	ICompnent * companyB = new ConcreteCompnent("companyB");
	companyB->Add(new CLeaf("LeafBA"));
	companyB->Add(new CLeaf("LeafBB"));
	companyA->Add(companyB);
	root->Display(0);

	cout << "---------------------------------------------------" << endl;
	root->ShowDuty();



	cout << "----------------------------------------" << endl;

	system("pause");
	return 0;
}