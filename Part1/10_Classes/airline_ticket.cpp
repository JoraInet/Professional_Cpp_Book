#include "airline_ticket.h"

AirlineTicket::AirlineTicket()
{
    // Initialize data members.
    m_passengerName = "Unknown Passenger";
    m_numberOfMiles = 0;
    m_hasEliteSuperRewardsStatus = false;
}

AirlineTicket::~AirlineTicket()
{
    // Nothing to do in terms of cleanup
}

double AirlineTicket::calculatePriceInDollars()
{
    if (hasEliteSuperRewardsStatus()) {
        // Elite Super Rewards customers fly for free!
        return 0;
    }
    // The cost of the ticket is the number of miles times 0.1.
    // Real airlines probably have a more complicated formula!
    return getNumberOfMiles() * 0.1;
}

std::string AirlineTicket::getPassengerName() { return m_passengerName; }
void AirlineTicket::setPassengerName(std::string name) { m_passengerName = name; }