#include <iostream>;

using namespace std;

auto AddNumbers(int Num1, int Num2)
{
	cout << "Entering function \"" << __func__ << "\" using \"int\" arguments type and \"int\" as result type.\n";
	return Num1 + Num2;
}

auto AddNumbers(double Num1, double Num2)
{
	cout << "Entering function \"" << __func__ << "\" using \"double\" arguments type and \"int\" as result type.\n";
	return static_cast<int>( Num1 + Num2);
}

[[nodiscard]] int func()
{
	return 42;
}

//[[deprecated("Unsafe method, please use xyz")]]  
int func(int param1, [[maybe_unused]]  int param2)
{
	return 42;
}

[[noreturn]] void forceProgramTermination()
{
	std::exit(1);  // Defined in <cstdlib>
}

bool isDongleAvailable()
{
	bool isAvailable{ false };
	// Check whether a licensing dongle is available...
	return isAvailable;
}

bool isFeatureLicensed(int featureId)
{
	if (!isDongleAvailable()) {
		// No licensing dongle found, abort program execution!
		forceProgramTermination();
	}
	else {
		bool isLicensed{ featureId == 42 };
		// Dongle available, perform license check of the given feature...
		return isLicensed;
	}
}


int main()
{
	cout << "------------- Functions -------------- \n";

	int i{ AddNumbers(11, 22) };
	cout << "i = " << i << endl;

	int j{ AddNumbers(1.2, 2.3) };
	cout << "j = " << j << endl;

	func();

	func(1, 2);

	bool isLicensed{ isFeatureLicensed(42) };
}