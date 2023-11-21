#include <iostream>;
#include "airline_ticket.h";

using namespace std;

int main()
{
	AirlineTicket myTicket;
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	myTicket.setFrequentFlyerNumber(12);
	double cost{ myTicket.calculatePriceInDollars() };
	cout << "This ticket will cost " << cost << endl;
	optional<int> ffNumber{ myTicket.getFrequentFlyerNumber() };
	if (ffNumber.has_value())
	{
		cout << "FrequentFlyerNumber: " << ffNumber.value() << endl;
	}
	
}