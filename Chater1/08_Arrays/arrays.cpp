#include <iostream>
#include <array>
#include <vector>
#include <utility>
#include <optional>

using namespace std;

static void CStyleArray()
{
	cout << "\n---------------- C style array --------------\n";

	int myArray[]{ 1,2,3,4,5 };

	size_t arraySize{ sizeof(myArray) / sizeof(myArray[0]) };

	cout << arraySize << endl;

}

static void StdArray()
{
	cout << "\n---------------- std::array --------------\n";
	
	array<int, 4> arr{ 9,8,7,6 };

	cout << "Array size = " << arr.size() << endl;
	cout << "2nd element = " << arr[1] << endl;
}

static void StdVector()
{
	cout << "\n---------------- std::vector --------------\n";

	vector<int> myVector{ 11,22 };

	myVector.push_back(33);
	myVector.push_back(44);

	cout << "1st element: " << myVector[0] << endl;
}

static void StdPair()
{
	cout << "\n---------------- std::pair --------------\n";
	pair<int, char> myPair { 1, 'O' };
	cout << "Pair first:" << myPair.first << "; second:" << myPair.second << endl;

}

optional<int> GetData(int giveInt)
{
	if (giveInt%2 == 0)
	{
		return 1;
	}
	return nullopt;
}

static void StdOptional()
{
	cout << "\n---------------- std::pair --------------\n";
	optional<int> data1{ GetData(20) };
	optional<int> data2{ GetData(21) };
	cout << "data1.has_value = " << data1.has_value() << endl;
	if (data2) {
		cout << "data2 has a value." << endl;
	}
	cout << "data1.value = " << data1.value() << endl;
	cout << "data1.value = " << *data1 << endl;
	cout << "data2.value = " << data2.value_or(0) << endl;
}

struct Point { double m_x, m_y, m_z; };

static void StructuredBindings()
{
	cout << "\n---------------- Structured Bindings --------------\n";

	Point point;
	point.m_x = 1.0; point.m_y = 2.0; point.m_z = 3.0;
	auto [x, y, z] { point };
	cout << "x:" << x << "; y:" << y << "; z:" << z << endl;

	pair myPair{ "hello", 5 };
	auto [theString, theInt] { myPair }; 
	cout << "theString: " << theString << endl;
	cout << "theInt: " << theInt << endl;
}

int main()
{

	CStyleArray();

	StdArray();

	StdVector();

	StdPair();

	StdOptional();

	StructuredBindings();
}