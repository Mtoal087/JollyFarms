#include "station.h"
#include <iostream>
#include <iomanip>
using namespace std;

Station::Station(int customers, double totalSales, double rate, int ostriches, int hoursRented, double amountDue){
    m_customers = customers;
    m_totalSales = totalSales;
    m_rate = rate;
    m_ostriches = ostriches;
    m_hoursRented = hoursRented;
    m_amountDue = amountDue;
    return;
}

void Station::greetings(){
    cout << "*** Jolly Farms Self Pay Ostrich Pen ***\n" << endl;
}

void Station::check_in(int ostriches, int hoursRenting){
    m_ostriches = ostriches;
    m_hoursRented = hoursRenting;
    return;
}

void Station::check_out(){
    const double tax = 0.08;
    double amountBeforeTax = m_rate * m_ostriches * m_hoursRented;
    m_amountDue = amountBeforeTax + (amountBeforeTax * tax);
    m_rate += 0.75;
    m_customers += 1;
    m_totalSales += amountBeforeTax;
    return;
}

void Station::report(){
    cout << endl;
    cout << "REPORT:\n";
    cout << "Customers Served = " << m_customers << endl;
    cout << fixed << setprecision(2) << "Total Sales = $" << m_totalSales << endl;
}