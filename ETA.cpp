//Header files
#include <iostream>
#include <cmath>
using namespace std;

int main() {

        double milesToKilometer;
        int miles;
        int speed;
        double hoursLeft;
        double minutesLeft;
        double timeLeft;
        int remainingTime;
        char answer;

        //Introduction
        cout << "This module will help you calculate the remaining travel time to your destination." << endl;

        do {

                //Enter speed in km
                cout << "Enter Speed in Km: ";
                cin >> speed;

                //Enter remaining miles
                cout << "Enter distance left in miles: ";
                cin >> miles;

                cout << endl;

                milesToKilometer = 10 * miles; //Convert from miles to km
                timeLeft = (milesToKilometer / speed) * 60; //Calculate time left
                remainingTime = ceil(timeLeft); // Round up remaining time and shift value
                hoursLeft = remainingTime / 60; //Get hours left
                minutesLeft = remainingTime % 60; // Get minutes left

                //Post results
                cout << "You have " << hoursLeft << " hour and " << minutesLeft << " minutes left." << endl;
                cout << endl;

                cout << "Do you want to calculate again? (Y/N) ";
                cin >> answer;

        } while (answer == 'y' || answer == 'Y');

        return 0;
}

