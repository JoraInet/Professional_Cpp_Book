#include <iostream>;

using namespace std;

const string message{ "Test" };
const string& foo() { return message; }

int main()
{
	const auto& f2{ foo() };

	cout << "f2: " << f2 << endl;

	string str{ "C++" };
	auto result{ as_const(str) };

	cout << "result: " << result << endl;

	decltype(foo()) f3{ foo() };
	bool is_string = is_same<decltype(f3), const string&>::value;
	cout << "f3 is string: " << is_string << "; type: " << typeid(f3).name() << endl;
}