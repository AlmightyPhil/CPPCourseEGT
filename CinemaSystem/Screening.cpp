#include <iostream>
#include "Screening.h"

//using namespace std;

Screening::Screening(string movieName, int tickets)
{
    setMovieName(movieName);
    setSoldTickets(tickets);
}

void Screening::setMovieName(string movieName)
{
    if (movieName.length() > 5)
    {
        this->movieName = movieName;
    }
    else
    {
        this->movieName = "Default name";
        cerr << "Movie name too short!" << endl;
    }
}

void Screening::setSoldTickets(int tickets)
{
    if (tickets >= 0)
    {
        this->soldTickets = tickets;
    }
    else
    {
        this->soldTickets = 0;
    }

}

string Screening::getMovieName()
{
    return this->movieName;
}
int Screening::getSoldTickets()
{
    return this->soldTickets;
}

void Screening::print()
{
    cout << " Projection is "
        << this->getMovieName() << " "
        << this->getSoldTickets() << endl;
}