#include <iostream>;

using namespace std;

const double PI{ 3.141592653589793238462 };

void BasicConst()
{
	cout << "\n--------------------- const as a Qualifier for a Type ------------------ \n";

	const int versionNumberMajor{ 2 };
	const int versionNumberMinor{ 1 };
	const std::string productName{ "Super Hyper Net Modulator" };

	cout << productName << " v" << versionNumberMajor << "." << versionNumberMinor << endl;
	cout << "Const PI: " << PI << endl;
}

void PointerConst()
{
	cout << "\n--------------------- const with Pointers ------------------ \n";

	int* const ip{ new int[10] };
	ip[4] = 5;

	const int* const ip2{ nullptr };

}

string mysteryFunction(const string* someString)
{
	//*someString = "Test";  // Will not compile
	string tmp{ "_mysteryFunction" };
	return *someString + tmp;
}

void ProtectedParams()
{
	cout << "\n--------------------- const to Protect Parameters ------------------ \n";

	string myString{ "The string" };
	string result = mysteryFunction(&myString);

	cout << result << endl;
}

namespace ConstexprKeywordNS
{
	constexpr int getArraySize() { return 32; }

	class Rect
	{
		public:
			constexpr Rect(size_t width, size_t height)
				: m_width{ width }, m_height{ height } {}

			constexpr size_t getArea() const { return m_width * m_height; }
		private:
			size_t m_width{ 0 }, m_height{ 0 };
	};
}

void ConstexprKeyword()
{
	cout << "\n--------------------- constexpr Keyword ------------------ \n";

	int myArray[ConstexprKeywordNS::getArraySize() + 1];

	cout << "myArray length: " << sizeof(myArray) / sizeof(myArray[0]) << endl;

	constexpr ConstexprKeywordNS::Rect rect { 8,2 };
	int myArray2[rect.getArea()];

	cout << "myArray2 length: " << sizeof(myArray2) / sizeof(myArray2[0]) << endl;

}

int main()
{
	BasicConst();

	PointerConst();

	ProtectedParams();

	ConstexprKeyword();
}