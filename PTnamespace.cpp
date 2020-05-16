namespace PT

{

void PrintTicket(string CurrentCity, string CompanyName, string DestinationCity[4], string FlightTimmings[4], string Classes[3],
              int Destination, int FlightTime, int ClassType, int FlightInfo[4][4][3][5], 
              int seats_count[4][4][3], string Customer[5], string CustomerInfo[4][4][3][5][5] )
{
    /* 
     Variable that stores input from the user to print his/her ticket 
    */
    int seat_num;

    

    again_ticket_destination:
    cout <<setw(93)<<"PLEASE PROVIDE THE THE FOLLOWING INFORMATION ABOUT YOUR SEAT BOOKING";
    cout <<endl<<endl<<endl;
    cout <<setw(64)<<"DESTINATIONS "<<endl<<endl<<endl
         <<setw(40)<<"1. "<<DestinationCity[0]<<endl
         <<setw(40)<<"2. "<<DestinationCity[1]<<endl
         <<setw(40)<<"3. "<<DestinationCity[2]<<endl
         <<setw(40)<<"4. "<<DestinationCity[3]<<endl
         <<setw(40)<<"5. "<<"BACK"<<endl<<endl<<endl;
    cout <<setw(85)<<"PRESS THE CORRESPONDING NUMBER TO SELECT A CITY!";
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>Destination;
    cout <<endl<<endl<<endl;
    switch(Destination)
    {  
    case 1:
    case 2:
    case 3:
    case 4:
    again_ticket_timmings: 
    cout <<setw(64)<<"TIMMINGS"<<endl<<endl<<endl
         <<setw(40)<<"1. "<<FlightTimmings[0]<<endl
         <<setw(40)<<"2. "<<FlightTimmings[1]<<endl
         <<setw(40)<<"3. "<<FlightTimmings[2]<<endl
         <<setw(40)<<"4. "<<FlightTimmings[3]<<endl
         <<setw(40)<<"5. "<<"BACK"<<endl<<endl<<endl;
         
    cout <<setw(98)<<"PRESS THE CORRESPONDING NUMBER TO SELECT  YOUR FLIGHT's TIME!";    
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin  >>FlightTime;
    cout <<endl<<endl<<endl;
    switch(FlightTime)
    {

    case 1 :
    case 2 :
    case 3 :
    case 4 :
    again_ticket_class:
    cout <<setw(68)<<"CLASSES"<<endl<<endl<<endl
         <<setw(41)<<"1. "<<Classes[0]<<endl
         <<setw(41)<<"2. "<<Classes[1]<<endl
         <<setw(41)<<"3. "<<Classes[2]<<endl
         <<setw(41)<<"4. "<<"BACK"<<endl<<endl<<endl;

    cout <<setw(85)<<"PRESS THE CORRESPONDING NUMBER TO SELECT A CLASS";    
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin  >>ClassType;     
    cout <<endl<<endl; 
    switch(ClassType)
    {
    
    case 1 :
    case 2 :
    case 3 :

    cout <<setw(64)<<"SEAT NUMBER"<<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin  >>seat_num;
    cout <<endl<<endl<<endl;
    if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][seat_num-1] == 1)
    {
      
      
         cout <<setw(67)<<"YOUR TICKET"; 
           cout <<endl<<endl;   
           cout <<setw(24) <<Customer[0]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][seat_num][0];
           cout <<setw(24) <<"FROM       "<<"     "<<setw(25)<<CurrentCity;    
           cout <<endl<<endl;
           cout <<setw(24) <<Customer[1]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][seat_num][1];
           cout <<setw(24) <<"DESTINATION"<<"     "<<setw(25)<<DestinationCity[Destination-1];  
           cout <<endl<<endl;
           cout <<setw(24) <<Customer[2]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][seat_num][2];
           cout <<setw(24) <<"FLIGHT TIME"<<"     "<<setw(25)<<FlightTimmings[FlightTime-1]; 
           cout <<endl<<endl;
           cout <<setw(24) <<Customer[3]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][seat_num][3];
           cout <<setw(24) <<"CLASS TYPE "<<"     "<<setw(25)<<Classes[ClassType-1]; 
           cout <<endl<<endl<<endl;
           cout <<setw(70)<<"THANK YOU FOR CHOOSING "<<CompanyName; 
           cout <<endl<<endl<<endl<<endl<<endl;
           break;
    } 
     else 
    {
      cout <<setw(70)<<"THIS SEAT IS NOT BOOKED."<<endl<<endl
           <<setw(88)<<"PLEASE PROVIDE CORRECT INFORMATION TO PRINT YOUR TICKET"<<endl<<endl<<endl;
    }
   
    break;


    default:
    cerr <<setw(61)<<"ERROR!"<<endl
         <<setw(98)<<"YOU CAN CHOOSE A CLASS ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
    cout <<endl<<endl<<endl;
             goto again_ticket_class;
    }
    break;

    case 5 :
    goto again_ticket_destination;
    
    break;
    
    default:
     cerr <<setw(61)<<"ERROR!"<<endl
          <<setw(98)<<"YOU CAN CHOOSE A TIME ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
     cout <<endl<<endl<<endl;
             goto again_ticket_timmings;


    }
    break;

    case 5 :
    break;

    break;

    default:
    cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A DESTINATION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_ticket_destination;
  }
}

}