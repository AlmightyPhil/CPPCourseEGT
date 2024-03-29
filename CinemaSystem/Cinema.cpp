#include <iostream>
#include <vector>
#include "Cinema.h"

using namespace std;

Cinema::Cinema(string name, string address)
{
    setName(name);
    setAddress(address);
}

Cinema::Cinema(string name, string address, vector<Hall> halls)
{
    setName(name);
    setAddress(address);
    setHallsList(halls);
}

void Cinema::print()
{
    cout << " Cinema name " << getName() << " address " << getAddress() << " " << endl;
    for (int i = 0; i < hallsList.size(); i++)
    {
        hallsList.at(i).print();
        cout << endl;
    }
}
void Cinema::addHallToList(Hall hall)
{
    this->hallsList.push_back(hall);
}

void Cinema::setHallsList(vector<Hall> halls)
{
    this->hallsList = halls;
}

vector<Hall> Cinema::getHallsList()
{
    return this->hallsList;
}

void Cinema::setName(string name)
{
    this->name = name;
}

string Cinema::getName()
{
    return this->name;
}

void Cinema::setAddress(string address)
{
    this->address = address;
}

string Cinema::getAddress()
{
    return this->address;
}