#include "info.h"
Address::Address(string h, string r, string c, int z, string d, string C)
{
    setHouse(h);
    setRoad(r);
    setCity(c);
    setZip(z);
    setDistrict(d);
    setCountry(C);
}
string Address::getHouse()
{
    return house;
}
void Address::setHouse(string _h)
{
    house = _h;
}
string Address::getRoad()
{
    return road;
}
void Address::setRoad(string _r)
{
    road = _r;
}
string Address::getCity()
{
    return city;
}
void Address::setCity(string _c)
{
    city = _c;
}
int Address::getZip()
{
    return zip;
}
void Address::setZip(int _z)
{
    zip = _z;
}
string Address::getDistrict()
{
    return district;
}
void Address::setDistrict(string _d)
{
    district = _d;
}
string Address::getCountry()
{
    return country;
}
void Address::setCountry(string _c)
{
    country = _c;
}

ContactInformation::ContactInformation(string pPhone, string sPhone, string em)
{
    setPrimPhone(pPhone);
    setSecPhone(sPhone);
    setEmail(em);
}
string ContactInformation::getPrimPhone()
{
    return primaryPhone;
}
void ContactInformation::setPrimPhone(string pPhone)
{
    primaryPhone = pPhone;
}
string ContactInformation::getSecPhone()
{
    return secondaryPhone;
}
void ContactInformation::setSecPhone(string sPhone)
{
    secondaryPhone = sPhone;
}
string ContactInformation::getEmail()
{
    return email;
}
void ContactInformation::setEmail(string em)
{
    email = em;
}