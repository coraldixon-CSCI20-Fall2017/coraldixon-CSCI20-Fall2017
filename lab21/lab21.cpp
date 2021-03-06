/*This program was created by Coral Dixon on September 20.
The program outputs information about windchills using user
input about temperature and starting windspeed. It calculates
the windchills using the old formula and the newer formula. It
also outputs the difference between the 2 formulas.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Main Struct
struct Windchills{
  double temp;
  double start_speed;
  //double wind_speed;
  double windchill_old;
  double windchill_new;
  double windchill_dif;
};

int main(){
    
    Windchills formula;//Main Object
    
    cout << "Enter Temperature: ";
    cin >> formula.temp;
    
    cout << "Enter Starting Windspeed: ";
    cin >> formula.start_speed;
    
    formula.windchill_old = 0.081 * (3.71 * sqrt(formula.start_speed) + 
    5.81 - 0.25 * formula.start_speed) * (formula.temp - 91.4) + 91.4; //Calculates windchill using old formula
    
    formula.windchill_new = 35.74 + 0.6215 * formula.temp - 35.75 * 
    pow(formula.start_speed, 0.16) + 0.4275 * formula.temp * pow(formula.start_speed, 0.16); //Calculates windchill using new formula

    formula.windchill_dif = formula.windchill_new - formula.windchill_old; //Calculates difference between formulas calculations
    
    cout << "Windspeed: " << formula.start_speed << endl;
    cout << "Old Formula Calc: " << formula.windchill_old << endl;
    cout << "New Formula Calc: " << formula.windchill_new << endl;
    cout << "Formula Difference: " << formula.windchill_dif << endl;
    
    return 0;
}

/* Test One

Running /home/ubuntu/workspace/lab21/lab21.cpp
Enter Temperature: 30
Enter Starting Windspeed: 4
Windspeed: 4
Old Formula Calc: 30.5753
New Formula Calc: 25.767
Formula Difference: -4.8083


Process exited with code: 0

*/

/* Test Two
Running /home/ubuntu/workspace/lab21/lab21.cpp
Enter Temperature: 39.25
Enter Starting Windspeed: 10
Windspeed: 10
Old Formula Calc: 27.8601
New Formula Calc: 32.713
Formula Difference: 4.85286


Process exited with code: 0
*/

/*Test Three
Running /home/ubuntu/workspace/lab21/lab21.cpp
Enter Temperature: 100
Enter Starting Windspeed: 2
Windspeed: 2
Old Formula Calc: 98.7538
New Formula Calc: 105.711
Formula Difference: 6.95719


Process exited with code: 0
*/