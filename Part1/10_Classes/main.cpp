#include <iostream>;
#include "airline_ticket.h";

using namespace std;

void Classes()
{
	cout << "\n---------------- Classes --------------------- \n";

	AirlineTicket myTicket;
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost{ myTicket.calculatePriceInDollars() };
	cout << "This ticket will cost " << cost << endl;
}

class Demo
{
	public:
		int get() { return 5; }
};

int get() { return 10; }

namespace NS
{
	int get() { return 20; }
}

void Scope()
{
	cout << "\n---------------- Scope --------------------- \n";

	Demo d;
	cout << d.get() << endl; 
	cout << NS::get() << endl;
	cout << ::get() << endl;  
	cout << get() << endl;    
}

int main()
{
	Classes();

	Scope();
}