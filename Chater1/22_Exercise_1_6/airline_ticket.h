#ifndef AIRLINE_TICKET_H
#define AIRLINE_TICKET_H

#include <iostream>;
#include <optional>;

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

        const optional<int> getFrequentFlyerNumber() { return m_frequentFlyerNumber; }
        void setFrequentFlyerNumber(const optional<int> frequentFlyerNumber) { m_frequentFlyerNumber = frequentFlyerNumber; }
    private:
        string m_passengerName{ "Unknown Passenger" };
        int m_numberOfMiles{ 0 };
        bool m_hasEliteSuperRewardsStatus{ false };
        optional<int> m_frequentFlyerNumber;
};

#endif

