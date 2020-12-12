#include "Header.h"

int main()
{
    const int numberOfFriends = 5;

    Guest friends[numberOfFriends] =
    {
        Guest(3, "Vova", 18, "Lviv", 6474568777, Gender::FEMALE),
        Guest(1, "Max", 20, "Sambir", 6579845634, Gender::MALE),
        Guest(5, "Maykl", 36, "Ternopil", 6783427234, Gender::FEMALE),
        Guest(4, "Andriy", 21, "Kyiv", 6475748385, Gender::MALE),
        Guest(2, "Yura", 23, "Kharkov", 6472834823, Gender::NON_BINARY)
    };

    Party day("24th", "My birthday", friends);

    cout << "Age: " << day.findAverageAge(friends, Gender::MALE) << endl;
    cout << "Is Lucky? " << day.isLuckyPhoneNumber(7777) << endl;

    Guest temp;

    void sortByID(Guest id);
    {
        for (int i = 0; i < numberOfFriends; i++)
        {
            for (int j = i + 1; j < numberOfFriends; j++)
            {
                if (friends[j].id < friends[i].id)
                {
                    temp = friends[i];
                    friends[i] = friends[j];
                    friends[j] = temp;
                }
            }
        }

        for (int i = 0; i < numberOfFriends; i++)
        {
            cout << friends[i].name << endl;
        }
    }

}