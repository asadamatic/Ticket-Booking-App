#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>
#include <sstream>
using namespace std;
 





#include "Askclass.cpp"
#include "Asktransition.cpp"
#include "PTnamespace.cpp"
#include "CBnamespace.cpp"
#include "APnamespace.cpp"
#include "Initialization.cpp"
#include "SRnamespace.cpp"
#include "STnamespace.cpp"
int main()
{   

   
    /* 
     This is variable is of a specific type and is responsible to display current 
     time on the top right corner of the program screen.
    */ 
    time_t current_time = time(0);

    /* 
      Assigning the names of  'Current Location, 'Airline',
      'Destinations', 'Timmings for Flight', 'Class names ofr flight',
      To provide the ease of editing if needed.

      Furthermore, this assigning helps in generalizing 
      the code adn creating one module for diferent cases
    
    */
    string CurrentCity           = "ISLAMABAD";
    string CompanyName           = "UET AIR";
    string DestinationCity[4]    = {"LAHORE" , "KARACHI" , "PESHAWAR" , "QUETTA"};
    string FlightTimmings[4]     = {"9:00 AM" , "11:00 AM" , "1:00 PM" , "3:00 AM"};
    string Classes[3]             = {"ECONOMY CLASS" , "FIRST CLASS" , "BUSINESS CLASS"};
    
    

    int service, Destination, FlightTime, ClassType, ClassTransition;
    
    int SeatCount[4][4][3] ;

    /*
      Variable array CustomerInfo, stores the information about the Customer
      Last entry '5' in the array shows that, Customer has to fill five blanks in order to book his/her seat.
      Second last Entry '5' shows the numbers of seats for which the Customer has to provide information
    */
    string CustomerInfo[4][4][3][5][5];
    string Customer[5] = {"FULL NAME      " , "AGE            " , " CNIC           " , "PASSPORT NUMBER", "PASSWORD       " };
    
    /* 
     Variable that stores input from the user to cancel his/her seat 
    */
    int seat_num;

    /* 
      Variable to count the number of times admin has logged in to his account,
      to decide whether to take him to set the credentials or just login straight 
    */
    int AdminLogin = 0;
    string Admin[2], AdminCheck[2];

    /*
      This variable aray is the core of our program. It stores information about the seat bookings.
      Entry '1' shows the booked seat while '0' is for unbooked seat.
      first Entry '4' shows the number of destinations.
      Second Entry '4' Shows the number of flights that will fly on a certain time for a specific destionation.
      third Entry '3' shows the number of Classes each flight has.
      fourth Entry '5' Shows the number of seats each class contains.
     */ 
    int FlightInfo[4][4][3][5];
    
    /*Declaring a string to take input fro the fles conatining 'SeatCount' 
    and then converting that to integer values to store in array 'SeatCount'

    Delaring second string for 'FlightInfo' for the  same reason as above
    */
    string SC[4][4][3]; 
    
    /*Code to take input fro the files containing the 'SeactCount'
      Advantage: Whenever the program runs, tit proceeds based on the previous data 
    */
    ifstream Lahore1;
    Lahore1.open("Countlahore.csv");
    ifstream Karachi1;
    Karachi1.open("Countkarachi.csv");
    ifstream Peshawar1;
    Peshawar1.open("Countpeshawar.csv");
    ifstream Quetta1;
    Quetta1.open("Countquetta.csv");
     
   while(Lahore1.good())
   {

	 for(int z = 0; z <= 3; z++)
	 {
	   
     getline(Lahore1, SC[0][z][0]);
     getline(Lahore1, SC[0][z][0],',');
     getline(Lahore1, SC[0][z][0]);
     //
     getline(Lahore1, SC[0][z][1]);
     getline(Lahore1, SC[0][z][1],',');
     getline(Lahore1, SC[0][z][1]);
     //
     getline(Lahore1, SC[0][z][2]);
     getline(Lahore1, SC[0][z][2],',');
     getline(Lahore1, SC[0][z][2]);
     
     //Karachi

     getline(Karachi1, SC[1][z][0]);
     getline(Karachi1, SC[1][z][0],',');
     getline(Karachi1, SC[1][z][0]);
     //
     getline(Karachi1, SC[1][z][1],',');
     getline(Karachi1, SC[1][z][1]);
     //
     getline(Karachi1, SC[1][z][2],',');
     getline(Karachi1, SC[1][z][2]);

     //Peshawar
     getline(Peshawar1, SC[2][z][0]);
     getline(Peshawar1, SC[2][z][0],',');
     getline(Peshawar1, SC[2][z][0]);
     //
     getline(Peshawar1, SC[2][z][1],',');
     getline(Peshawar1, SC[2][z][1]);
     //
     getline(Peshawar1, SC[2][z][2],',');
     getline(Peshawar1, SC[2][z][2]);

     //Quetta

     getline(Quetta1, SC[3][z][0]);
     getline(Quetta1, SC[3][z][0],',');
     getline(Quetta1, SC[3][z][0]);
     //
     getline(Quetta1, SC[3][z][1],',');
     getline(Quetta1, SC[3][z][1]);
     //
     getline(Quetta1, SC[3][z][2],',');
     getline(Quetta1, SC[3][z][2]);


     }
	  } 

    Lahore1.close();
    Karachi1.close();
    Peshawar1.close();
    Quetta1.close();
    for(int abc = 0; abc <= 3; abc++)
    {
    for(int xyz = 0; xyz <=3; xyz++) 	
	  {
	  for(int jkl = 0; jkl <= 2; jkl++)
	  {	
	  
    stringstream  geek(SC[abc][xyz][jkl]);
    geek >>SeatCount[abc][xyz][jkl];
    
    } 
    } 
	  }

  IFI::InitialFightInfo(FlightInfo);


   while(service != 5)
   {

    again_service:
    cout <<CurrentCity<<setw(50)<<"WELCOME TO "<<CompanyName<<setw(52)<<ctime(&current_time)<<endl;
    cout <<endl<<endl<<endl<<endl<<endl;
    
    cout <<setw(72)<<"WE OFFER THE FOLLOWING SERVICES!"<<endl<<endl<<endl;
    cout <<setw(80)<<"1. Login As  Admin To Check For The Bookings"<<endl<<endl
         <<setw(50)<<"2. Book A Seat"<<endl<<endl
         <<setw(58)<<"3. Cancel Your Booking"<<endl<<endl
         <<setw(56)<<"4. Print Your Ticket"<<endl<<endl
         <<setw(43)<<"5. Exit"<<endl<<endl;
    cout <<endl<<endl;     
    cout <<setw(87)<<"PRESS THE CORRESPONDING NUMBER TO SELECT A SERVCIE!";
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>service;
    cout <<endl<<endl;

   
    
    switch(service)
    {
    
       case 1 :

       AP::AdminPortal(AdminLogin, Admin, AdminCheck, DestinationCity, 
     	FlightTimmings, Classes, Destination, FlightTime, FlightInfo);
      
       break;
     
       case 2 :
    again_destination:
    cout <<setw(64)<<"DESTINATIONS "<<endl<<endl<<endl
         <<setw(40)<<"1. "<<DestinationCity[0]<<endl
         <<setw(40)<<"2. "<<DestinationCity[1]<<endl
         <<setw(40)<<"3. "<<DestinationCity[2]<<endl
         <<setw(40)<<"4. "<<DestinationCity[3]<<endl<<endl;
         
    cout <<setw(85)<<"PRESS THE CORRESPONDING NUMBER TO SELECT A CITY!";
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>Destination;
    cout <<endl<<endl<<endl;
    //SWICTH FOR DESTINATION
    switch(Destination)
    {
        case 1 :
       
        case 2 :

        case 3 :

        case 4 :

        ST::SelectingTime( Destination, FlightTime, ClassType, FlightInfo, SeatCount,  DestinationCity, 
         FlightTimmings, Classes, CustomerInfo, CurrentCity, Customer, CompanyName, ClassTransition );
 
        break;
        
        default :
            
    cerr <<setw(61)<<"ERROR!"<<endl
         <<setw(98)<<"YOU CAN CHOOSE A CITY ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
    cout <<endl<<endl<<endl;

        goto again_destination;
    }
 
        break;
           

        case 3 :
        
        CB::CancelBooking( DestinationCity, FlightTimmings, Classes, Destination, 
                           FlightTime, ClassType, FlightInfo, SeatCount);
      

        break;

        break;
        case 4 :
        
        PT::PrintTicket(CurrentCity, CompanyName, DestinationCity, FlightTimmings, Classes, 
        	Destination, FlightTime, ClassType, FlightInfo, SeatCount, Customer, CustomerInfo);
        
        break;

        case 5:
        break;
        

    default :
    cerr <<setw(61)<<"ERROR!"<<endl
         <<setw(98)<<"YOU CAN CHOOSE A SERVICE ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
    cout <<endl<<endl<<endl;

        goto again_service;
    }
    
    }
  
  /*
   Storing the values of seat count of different cities to keep the program up to date when whenever it runs
  */

   
   ofstream Countlahore;
   Countlahore.open("countlahore.csv");

   
   

   for(int ad = 0; ad <= 3; ad++ )
   {
    
    Countlahore <<","<<","<<FlightTimmings[ad]<<","<<","<<endl;
   for(int as = 0; as <= 2; as++)
   {  
      
    
    Countlahore <<Classes[as]<<",";
    Countlahore <<SeatCount[0][ad][as]<<endl;
    
    }
    }
    
   //Karachi
   ofstream Countkarachi;
   Countkarachi.open("countkarachi.csv");


   for(int a = 0; a <= 3; a++ )
   {
   	Countkarachi <<","<<","<<FlightTimmings[a]<<","<<","<<endl;
   for(int b = 0; b <= 2; b++)
   {	

    Countkarachi <<Classes[b]<<",";
    Countkarachi <<SeatCount[1][a][b]<<endl;
    
    }
    }
    
   //Peshawar
   ofstream Countpeshawar;
   Countpeshawar.open("countpeshawar.csv");

   
   
   for(int d = 0; d <= 3; d++ )
   {

    Countpeshawar <<","<<","<<FlightTimmings[d]<<","<<","<<endl;
   
   for(int e = 0; e <= 2; e++)
   {  

    Countpeshawar <<Classes[e]<<",";
    Countpeshawar <<SeatCount[2][d][e]<<endl;

    }
    
    }
   
   //Quetta
   ofstream Countquetta;
   Countquetta.open("countquetta.csv");

   
   for(int g = 0; g <= 3; g++ )
   {
    
    Countquetta <<","<<","<<FlightTimmings[g]<<","<<","<<endl;

   for(int h = 0; h <= 2; h++)
   {  
    
    Countquetta <<Classes[h]<<",";
    Countquetta <<SeatCount[3][g][h]<<endl;
   }
   }

return 0;
}







   

