#include <iostream>;
#include <array>;
#include <initializer_list>;

using namespace std;

static void WhileLoop()
{
	cout << "\n---------------- While Loop -------------\n";
	int i{ 0 };
	while (i < 5) {
		cout << "This is silly. Iterator:" << i << endl;
		++i;
		if (i == 3)
		{
			break;
		}
	}
}

static void DoWhileLoop()
{
	cout << "\n---------------- Do While Loop -------------\n";
	int i{ 100 };
	do {
		cout << "This is silly. Iterator:" << i << endl;
		++i;
	} while (i < 5);
}

static void ForLoop()
{
	cout << "\n---------------- For Loop -------------\n";

	for (int i{ 0 }; i < 5; ++i) {
		cout << "This is silly. Iterator:" << i << endl;
	}
}

static void RangeBasedForLoop()
{
	cout << "\n---------------- Range-Based For Loop -------------\n";

	array<int, 4> arr{ 1, 2, 3, 4 };
	for (int i : arr) 
	{ 
		cout << i << endl; 
	}
}

int MakeSum(initializer_list<int> values)
{
	int total{ 0 };
	for (int value : values) {
		total += value;
	}
	return total;
}

static void InitializerLists()
{
	cout << "\n---------------- Initializer Lists -------------\n";
	int a{ MakeSum({ 1, 2, 3 }) };
	int b{ MakeSum({ 10, 20, 30, 40, 50, 60 }) };
	
	cout << "a :" << a << endl;
	cout << "b :" << b << endl;
}

static void StringType()
{
	cout << "\n---------------- String -------------\n";

	string myString{ "Hello, World" };
	cout << "The value of myString is " << myString << endl;
	cout << "The second letter is " << myString[1] << endl;
}

int main()
{
	WhileLoop();

	DoWhileLoop();

	ForLoop();

	RangeBasedForLoop();

	InitializerLists();

	StringType();
}