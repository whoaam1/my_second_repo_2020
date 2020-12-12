#pragma once

#include <iostream>
#include <string>

using namespace std;

enum Gender {
    FEMALE,
    MALE,
    NON_BINARY
};


class Guest {

public:
    int id;
    string name;
    int age;
    string city;
    long int phoneNumber;
    Gender sex;

    void sortByID();

    Guest()
    {

    };

    Guest(int id1, string name1, int age1, string city1, long int phoneNumber1, Gender sex1)
    {
        id = id1;
        name = name1;
        age = age1;
        city = city1;
        phoneNumber = phoneNumber1;
        sex = sex1;
    }

};

class Party {

public:
    string day;
    string reason;
    Guest guests[5];

    Party()
    {

    };

    Party(string day1, string reason1, Guest guests1[])
    {
        day = day1;
        reason = reason1;
        *guests = *guests1;
    }

    float findAverageAge(Guest gues[5], Gender sex2)
    {
        int age = 0;
        float avarageAge;
        int count = 0;

        for (int i = 0; i < 5; i++)
        {
            if (gues[i].sex == sex2)
            {
                age += gues[i].age;
                count++;
            }

        }

        avarageAge = age / (float)count;
        return avarageAge;
    }

    string isLuckyPhoneNumber(int number)
    {
        int i = 0;

        do
        {

            if (number % 10 == 7)
            {
                i++;
            }

            number /= 10;

        } while (number >= 10);

        if (i >= 3)
        {
            return "True";
        }
        else
        {
            return "False";
        }
    }
};

