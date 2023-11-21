#ifndef AIRLINE_TICKET_H
#define AIRLINE_TICKET_H

#include <iostream>;

using namespace std;

class AirlineTicket
{
    public:
        AirlineTicket();
        ~AirlineTicket();

        double calculatePriceInDollars();

        const string getPassengerName();
        void setPassengerName(const string name);

        const int getNumberOfMiles() { return m_numberOfMiles; }
        void setNumberOfMiles(const int miles) { m_numberOfMiles = miles; }

        const bool hasEliteSuperRewardsStatus() { return m_hasEliteSuperRewardsStatus; }
        void setHasEliteSuperRewardsStatus(const bool status) { m_hasEliteSuperRewardsStatus = status; }
    private:
        std::string m_passengerName{ "Unknown Passenger" };
        int m_numberOfMiles{ 0 };
        bool m_hasEliteSuperRewardsStatus{ false };
};

#endif

