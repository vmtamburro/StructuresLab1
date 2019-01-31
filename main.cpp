#include <iostream>
#include <limits>

using namespace std;


struct Weather
{
    float totalMonthlyRain;
    float highTemp;
    float lowTemp;
    float avgTemp;
};

//enumerator for months of the year
enum Months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
    Months month;

//function for displaying months
string getMonth(Months month)
{
        string monthName;
        if(month == JANUARY)
            monthName ="January";
        else if(month == FEBRUARY)
            monthName = "February";
        else if(month == MARCH)
            monthName = "March";
        else if(month== APRIL)
            monthName = "April";
        else if(month == MAY)
            monthName ="May";
        else if(month == JUNE)
            monthName = "June";
        else if(month == JULY)
            monthName = "July";
        else if(month == AUGUST)
            monthName = "August";
        else if(month == SEPTEMBER)
            monthName = "September";
        else if(month == OCTOBER)
                monthName = "October";
        else if(month == NOVEMBER)
            monthName = "November";
        else if(month == DECEMBER)
            monthName = "December";
        return monthName;
    }
int main()
{
    const int NUM_MONTHS = 12;
    Weather weatherData[NUM_MONTHS];

    for(month = JANUARY; month <= DECEMBER; month = static_cast<Months>(month + 1))
    {
        //get total rainfall
        string displayMonth = getMonth(month);
        cout << "Enter the Total Rainfall for "
            << displayMonth
             << ": ";
        cin >>weatherData[month].totalMonthlyRain;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry. Enter a number.\n"
                     << "Enter the Total Rainfall for Month "
                     << displayMonth
                     << ": ";
                cin >> weatherData[month].totalMonthlyRain;
            }
        //get highest temperature
        cout << "\nEnter the Highest Temperature for "
            << displayMonth
             << ": ";
        cin >>weatherData[month].highTemp;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid entry. Enter a number.\n"
                << "Enter the Highest Temperature for Month "
                << displayMonth
                << ": ";
                cin >> weatherData[month].highTemp;
            }
        while(weatherData[month].highTemp > 140 || weatherData[month].highTemp <-100)
        {
            cout << "\nInvalid entry. Please enter a temperature between -100 and 140 degrees Fahrenheit.";
            cout << "\n\nEnter the Highest Temperature for "
             << displayMonth
             << ": ";
            cin >>weatherData[month].highTemp;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid entry. Enter a number.\n"
                << "Enter the Highest Temperature for "
                << displayMonth
                << ": ";
                cin >> weatherData[month].highTemp;
            }
        }


        //get lowest temperature
        cout << "\nEnter the Lowest Temperature for "
            << displayMonth
             << ": ";
        cin >>weatherData[month].lowTemp;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid entry. Enter a number.\n"
                << "Enter the Lowest Temperature for "
                << displayMonth
                << ": ";
                cin >> weatherData[month].lowTemp;
            }
        while(weatherData[month].lowTemp > 140 || weatherData[month].lowTemp <-100)
        {
            cout << "\nInvalid entry. Please enter a temperature between -100 and 140 degrees Fahrenheit.";
            cout << "\n\nEnter the Highest Temperature for "
             << displayMonth
             << ": ";
            cin >>weatherData[month].lowTemp;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid entry. Enter a number.\n"
                << "Enter the Lowest Temperature for "
                << displayMonth
                << ": ";
                cin >> weatherData[month].lowTemp;
            }
        }

        //get Average temperature
        cout << "\nEnter the Average Temperature for "
             << displayMonth
             << ": ";
        cin >>weatherData[month].avgTemp;
        while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid entry. Enter a number.\n"
                << "Enter the Average Temperature for "
                << displayMonth
                << ": ";
                cin >> weatherData[month].avgTemp;
            }
        while(weatherData[month].avgTemp > 140 || weatherData[month].avgTemp <-100)
        {
            cout << "\nInvalid entry. Please enter a temperature between -100 and 140 degrees Fahrenheit.";
            cout << "\n\nEnter the Average Temperature for "
             << displayMonth
             << ": ";
            cin >>weatherData[month].avgTemp;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\nInvalid entry. Enter a number. ";
                cout <<"\nEnter the Average Temperature for "
                <<displayMonth
                <<": ";
                cin >> weatherData[month].avgTemp;
                cout <<"/n";
            }
        }



    }

    float totalRain = 0;
    float highestTemp = 0;
    float lowestTemp = weatherData[month].lowTemp;
    float totalAvgTemp = 0;
    for(month = JANUARY; month <= DECEMBER; month = static_cast<Months>(month + 1))
    {

        totalRain += weatherData[month].totalMonthlyRain;

        if (highestTemp < weatherData[month].highTemp)
        {
            highestTemp = weatherData[month].highTemp;
        }

        if(lowestTemp > weatherData[month].lowTemp)
        {
            lowestTemp = weatherData[month].lowTemp;
        }

        totalAvgTemp += weatherData[month].avgTemp;
    }
    cout << "Total rainfall for the year is " <<totalRain<< " inches."<<endl;
    cout << "Average rainfall for the year is " <<(totalRain/NUM_MONTHS)<<" inches."<<endl;
    cout << "Highest temperature for the year is " <<highestTemp<<"degrees."<< endl;
    cout << "Lowest temperature for the year is " <<lowestTemp<<"degrees."<<endl;
    cout << "Average temperature for the year is " <<(totalAvgTemp/NUM_MONTHS)<<"degrees."<<endl;

}
