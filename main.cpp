#include <iostream>

using namespace std;
struct Weather
{
    float totalMonthlyRain;
    float highTemp;
    float lowTemp;
    float avgTemp;
};
int main()
{
    const int NUM_MONTHS = 2;
    Weather weatherData[NUM_MONTHS];
    int index;

    for(index = 0; index < NUM_MONTHS; index++)
    {
        cout << "Enter the Total Rainfall for Month "
             << (index+1)
             << ": ";
        cin >>weatherData[index].totalMonthlyRain;
        cout << "\n";

        cout << "Enter the Highest Temperature for Month "
             << (index+1)
             << ": ";
        cin >>weatherData[index].highTemp;
        cout << "\n";

        cout << "Enter the Lowest Temperature for Month "
             << (index+1)
             << ": ";
        cin >>weatherData[index].lowTemp;
        cout << "\n";

        cout << "Enter the Average Temperature for Month "
             << (index+1)
             << ": ";
        cin >>weatherData[index].avgTemp;
        cout << "\n";

    }

    float totalRain = 0;
    float highestTemp = 0;
    float lowestTemp = weatherData[index].lowTemp;
    float totalAvgTemp = 0;
    for(int index = 0; index < NUM_MONTHS; index++)
    {
        totalRain += weatherData[index].totalMonthlyRain;

        if (highestTemp < weatherData[index].highTemp)
        {
            highestTemp = weatherData[index].highTemp;
        }

        if(lowestTemp > weatherData[index].lowTemp)
        {
            lowestTemp = weatherData[index].lowTemp;
        }

        totalAvgTemp += weatherData[index].avgTemp;
    }
    cout << "Total rainfall for the year is " <<totalRain<< " inches."<<endl;
    cout << "Average rainfall for the year is " <<(totalRain/NUM_MONTHS)<<" inches."<<endl;
    cout << "Highest temperature for the year is " <<highestTemp<<"degrees."<< endl;
    cout << "Lowest temperature for the year is " <<lowestTemp<<"degrees."<<endl;
    cout << "Average temperature for the year is " <<(totalAvgTemp/NUM_MONTHS)<<"degrees."<<endl;

}
