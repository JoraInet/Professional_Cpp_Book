#include <iostream>;

using namespace std;

int main()
{
	cout << "---------- Zero Init ---------------\n";

	float myFloat {};
	int myInt {};

	cout << "Zero Init \"float\": " << myFloat << endl;
	cout << "Zero Init \"int\": " << myInt << endl;

	
	
	cout << "----------- Casting ----------------\n";
	
	float myFloat2{3.14f};
	int i1 { (int)myFloat2 };
	int i2 { int(myFloat2) };
	int i3 { static_cast<int>(myFloat2)};

	short myShort{ 314 };
	long myLong{ myShort };

	cout << "Original float: " << myFloat2 << endl;
	cout << "Method_1: " << i1 << endl;
	cout << "Method_2: " << i2 << endl;
	cout << "Method_3: " << i3 << endl;

	cout << "Original short: " << myShort << endl;
	cout << "Casting long: " << myLong << endl;


}