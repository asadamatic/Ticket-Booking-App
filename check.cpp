#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>

using namespace std;

//Main function starts here
int main()
{

    /* 
      Assigning the names of  'Current Location, 'Airline',
      'Destinations', 'Timmings for Flight', 'Class names ofr flight',
      To provide the ease of editing if needed.

      Furthermore, this assigning helps in generalizing 
      the code adn creating one module for diferent cases
    
    */
    string current_city           = "ISLAMABAD";
    string company_name           = "UET AIR";
    string destination_city[4]    = {"LAHORE" , "KARACHI" , "PESHAWAR" , "QUETTA"};
    string flight_timmings[4]     = {"9:00 AM" , "11:00 AM" , "1:00 PM" , "3:00 AM"};
    string classes[3]             = {"ECONOMY CLASS" , "FIRST CLASS" , "BUSINESS CLASS"};
    
    

    int service, destination, flight_time, class_type, class_transition;
    
    int seats_count[4][4][3] ;

    /*
      Variable array CustomerInfo, stores the information about the customer
      Last entry '5' in the array shows that, customer has to fill five blanks in order to book his/her seat.
      Second last Entry '5' shows the numbers of seats for which the customer has to provide information
    */
    string CustomerInfo[4][4][3][5][5];
    

    /* 
      Variable to count the number of times admin has logged in to his account,
      to decide whether to take him to set the credentials or just login straight 
    */
    int AdminLogin = 0;

    string admin[2], admin_check[2];

    /* 
     Variable that stores input from the user to cancel his/her seat 
    */
    int seat_num;

    /*
      This variable aray is the core of our program. It stores information about the seat bookings.
      Entry '1' shows the booked seat while '0' is for unbooked seat.
      first Entry '4' shows the number of destinations.
      Second Entry '4' Shows the number of flights that will fly on a certain time for a specific destionation.
      third Entry '3' shows the number of classes each flight has.
      fourth Entry '5' Shows the number of seats each class contains.
     */ 
    int f_info[4][4][3][5];
    



}