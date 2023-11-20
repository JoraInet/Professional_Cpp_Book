#include <iostream>;

using namespace std;

int main()
{
	cout << "int:\n";
	cout << "Max int value: " << numeric_limits<int>::max() << endl;
	cout << "Min int value: " << numeric_limits<int>::min() << endl;
	cout << "Lowest int value: " << numeric_limits<int>::lowest() << endl;

	cout << "double:\n";
	cout << "Max double value: " << numeric_limits<double>::max() << endl;
	cout << "Min double value: " << numeric_limits<double>::min() << endl;
	cout << "Lowest double value: " << numeric_limits<double>::lowest() << endl;
}