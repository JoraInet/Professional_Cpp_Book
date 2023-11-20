#include <iostream>;

using namespace std;

int main()
{
	int uninitInt = 0;
	int initInt{ 7 };

	cout << "Is random value " << uninitInt << endl;
	cout << initInt << " was assigned an initial value" << endl;

	return 0;
}

