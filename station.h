#ifndef STATION_H
#define STATION_H

class Station{
    public:

    //Constructor
    Station(int customers = 0, double totalSales = 0, double rate = 0.25, int ostriches = 0, int hoursRented = 0, double amountDue = 0.0);

    //Getters
    int get_customer()const{return m_customers;}
    double get_totalSales()const{return m_totalSales;}
    double get_rate()const{return m_rate;}
    int get_ostriches()const{return m_ostriches;}
    double get_amountDue()const{return m_amountDue;}
    int get_hoursRented()const{return m_hoursRented;}

    //Greets user
    void greetings();

    /*
    Desc: Updates pay station when a user checks in
    Pre: Input the number of ostriches and hours to be rented
    Post: Updates the member variables of the pay station
    */
    void check_in(int ostriches, int hoursRenting);

    /*
    Desc: Updates a pay station when a user checks out from a pen
    Pre: None
    Post: None
    */
    void check_out();

    /*
    Desc: Prints a report of the pay station usage for the day
    Pre: None
    Post: Prints private members within a sentence
    */
    void report();

    private:

    int m_customers;
    double m_totalSales;
    int m_hoursRented;
    double m_rate;
    int m_ostriches;
    double m_amountDue;
};

#endif