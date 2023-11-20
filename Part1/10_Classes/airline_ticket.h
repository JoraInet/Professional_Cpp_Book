#ifndef AIRLINE_TICKET_H
#define AIRLINE_TICKET_H

#include <string>;

class AirlineTicket
{
    public:
        AirlineTicket();
        ~AirlineTicket();

        double calculatePriceInDollars();

        std::string getPassengerName();
        void setPassengerName(std::string name);

        int getNumberOfMiles() { return m_numberOfMiles; }
        void setNumberOfMiles(int miles) { m_numberOfMiles = miles; }

        bool hasEliteSuperRewardsStatus() { return m_hasEliteSuperRewardsStatus; }
        void setHasEliteSuperRewardsStatus(bool status) { m_hasEliteSuperRewardsStatus = status; }
    private:
        std::string m_passengerName{ "Unknown Passenger" };
        int m_numberOfMiles{ 0 };
        bool m_hasEliteSuperRewardsStatus{ false };
};

#endif

