#include "station.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    Station pen;
    
    int ostriches;
    int hoursRented;

    do{
        pen.greetings();

        cout << "The current rate is $" << fixed << setprecision(2) << pen.get_rate() << " per ostrich per hour.\n";

        cout << "How many ostriches? ";
        cin >> ostriches;
        if(ostriches <= 0){
            break;
        }

        cout << "How much time (hours)? ";
        cin >> hoursRented;

        cout << endl;

        pen.check_in(ostriches, hoursRented);

        char checkOut;
        cout << "Ready to check out (y/n)? ";
        cin >> checkOut;
        while(checkOut == 'n'){
            cout << "Ready to check out (y/n)? ";
            cin >> checkOut;
        }
        pen.check_out();

        cout << pen.get_ostriches() << " ostrich(es) for " << pen.get_hoursRented() << fixed << setprecision(2) << " hour(s) : Amount Due: $" << pen.get_amountDue() << endl;
        cout << endl;
    } while (ostriches != 0);

    pen.report();

    return 0;
}