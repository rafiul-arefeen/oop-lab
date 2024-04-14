#pragma once
#include <iostream>
#include <string>

using namespace std;

class Address
{
protected:
    string house;
    string road;
    string city;
    int zip;
    string district;
    string country;

public:
    Address() {}
    Address(string h, string r, string c, int z, string d, string C);
    string getHouse();
    void setHouse(string _h);
    string getRoad();
    void setRoad(string _r);
    string getCity();
    void setCity(string _c);
    int getZip();
    void setZip(int _z);
    string getDistrict();
    void setDistrict(string _d);
    string getCountry();
    void setCountry(string _c);
};

class ContactInformation
{
protected:
    string primaryPhone;
    string secondaryPhone;
    string email;

public:
    ContactInformation() {}
    ContactInformation(string pPhone, string sPhone, string em);
    string getPrimPhone();
    void setPrimPhone(string pPhone);
    string getSecPhone();
    void setSecPhone(string sPhone);
    string getEmail();
    void setEmail(string em);
};