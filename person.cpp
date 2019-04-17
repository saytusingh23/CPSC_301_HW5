#include "person.h"

Person::Person(int cardNo, bool act, string fName, string lName)
{
    cardID = cardNo;
    active = act;
    First_Name = fName;
    Last_Name = lName;
}

string Person::getFirstName()
{
    return First_Name;
}

string Person::getLastName()
{
    return Last_Name;
}

int Person::getId()
{
    return cardID;
}

void Person::setActive(bool act)
{
    active = act;
}

bool Person::isActive()
{
    if(active == true)
        return true;
    else
        return false;
}

string Person::fullName()
{
    string name = First_Name + " " + Last_Name;
    return name;
}
