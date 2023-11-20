#include <iostream>;

using namespace std;


void ModifyingReferences()
{
	cout << "\n--------------------- Modifying References --------------- \n";

	int x{ 3 }, y{ 4 };
	int& xRef{ x };
	xRef = y;

	cout << "x: " << x << "; y: " << y << endl;

	int w{ 3 }, z{ 5 };
	int& wRef{ w };
	int& zRef{ z };
	wRef = zRef;

	cout << "w: " << w << "; z: " << z << endl;
}

string getStringSimple() { return "Simple:Hello world!"; }

void ReferencesToConst()
{
	cout << "\n--------------------- References-to-const --------------- \n";

	//string& string1 { getStringSimple() };       // DOES NOT COMPILE
	const string& string2{ getStringSimple() }; // Works as expected
	cout << string2 << endl;
}

void ReferencesToPointersAndPointersToReferences()
{
	cout << "\n--------------------- References to Pointers and Pointers to References --------------- \n";

	int* intP{ nullptr };
	int*& ptrRef{ intP };
	ptrRef = new int;
	*ptrRef = 5;

	cout << "intP: " << intP << "; ptrRef: " << ptrRef << "; *ptrRef: " << *ptrRef << endl;

	int x{ 3 };
	int& xRef{ x };
	int* xPtr{ &xRef }; // Address of a reference is pointer to value.
	*xPtr = 100;

	cout << "x: " << x << "; xRef: " << xRef << "; xPtr: " << xPtr << "; *xPtr: " << *xPtr << endl;
}

namespace ReferenceDataMembersNS
{
	class MyClass
	{
		public:
			MyClass(int& ref) : m_ref{ ref } { /* Body of constructor */ }
			constexpr int GetRefInt() { return m_ref; }
		private:
			int& m_ref;
	};
}

void ReferenceDataMembers()
{
	cout << "\n--------------------- Reference Data Members --------------- \n";
	int x{ 3 };
	int& xRef{ x };

	ReferenceDataMembersNS::MyClass myClass{ xRef };
	cout << "myClass.GetRefInt():" << myClass.GetRefInt() << endl;
}

namespace ReferenceParametersNS
{
	void swapAndAddToSecond(int& first, int& second, int addValue)
	{
		int temp{ first };
		first = second;
		second = temp + addValue;
	}
}

void ReferenceParameters()
{
	cout << "\n--------------------- Reference Parameters --------------- \n";

	int x{ 5 }, y{ 6 };
	ReferenceParametersNS::swapAndAddToSecond(x, y, 10);
	cout << "x: " << x << "; y: " << y << endl;

	int* xp{ &x }, * yp{ &y };
	ReferenceParametersNS::swapAndAddToSecond(*xp, *yp, 20);
	cout << "xp: " << xp << "; *xp: " << *xp << "; yp: " << yp << "; *yp: " << *yp << endl;
}

namespace PassByReferenceToConstNS
{
	static void printString(const string& myString)
	{
		cout << myString << endl;
	}
}

void PassByReferenceToConst()
{
	cout << "\n---------------------Pass-by-Reference-to-const --------------- \n";

	string someString{ "Hello World" };
	PassByReferenceToConstNS::printString(someString);
	PassByReferenceToConstNS::printString("Hello World");
}

int main()
{
	ModifyingReferences();

	ReferencesToConst();

	ReferencesToPointersAndPointersToReferences();

	ReferenceDataMembers();

	ReferenceParameters();

	PassByReferenceToConst();
}