#include <iostream>;

using namespace std;

enum class Mode { Default, Custom, Standard };

const char* ModeToString(Mode mode)
{
	switch (mode)
	{
	case Mode::Default:
		return "Default";
		break;
	case Mode::Custom:
		return "Custom";
		break;
	case Mode::Standard:
		return "Standard";
		break;
	default:
		return "Unknown";
	}
}

int main()
{
	cout << "------------- if/else ------------ \n";
	int i = rand();
	if (i%3 == 0)
	{
		cout << "Divided by 3 without remain : " << i << endl;
	}
	else if (i%5 == 0)
	{
		cout << "Divided by 5 without remain : " << i << endl;
	}
	else if (i%2 == 0)
	{
		cout << "Divided by 2 without remain : " << i << endl;
	}
	else
	{
		cout << "Not Divided by 3,5 or 2 : " << i << endl;
	}


	cout << "------------- switch #1 ------------ \n";
	i = i / 2;
	int j = i%2;
	switch (j)
	{
		case 0 :
			cout << "i%2 = 0 (" << i << ")" << endl;
			break;
		case 1:
			cout << "i%2 = 1 (" << i << ")" << endl;
			break;
		default:
			cout << "i%2 = " << i << endl;
			break;
	}

	cout << "------------- switch #2 ------------ \n";
	int value{ 42 };
	Mode mode = Mode::Default;
	switch (mode)
	{	
		case Mode::Default:
			value = 52;
		case Mode::Custom:
			value = 62;
		case Mode::Standard:
			value = 72;
			break;
	}
	cout << "For mode (" << ModeToString(mode) << ") value is: " << value << endl;

	cout << "------------- conditional operator ------------ \n";
	cout << (j == 0 ? "0" : "1") << endl;
}
