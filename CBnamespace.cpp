
namespace CB

{

  void CancelBooking(string DestinationCity[4], string FlightTimmings[4], string Classes[3],
              int Destination, int FlightTime, int ClassType, int FlightInfo[4][4][3][5], int seats_count[4][4][3])
{
   /* 
     Variable that stores input from the user to cancel his/her seat 
   */
    int seat_num;

   again_cancel_destination:
    cout <<setw(64)<<"DESTINATIONS "<<endl<<endl<<endl
         <<setw(40)<<"1. "<<DestinationCity[0]<<endl
         <<setw(40)<<"2. "<<DestinationCity[1]<<endl
         <<setw(40)<<"3. "<<DestinationCity[2]<<endl
         <<setw(40)<<"4. "<<DestinationCity[3]<<endl
         <<setw(40)<<"5. "<<"BACK"<<endl<<endl; 
         
    cout <<setw(85)<<"PRESS THE CORRESPONDING NUMBER TO SELECT A CITY!";
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>Destination;
    cout <<endl<<endl<<endl;
    switch(Destination)
    {
    case 1 :
    case 2 :
    case 3 :
    case 4 : 
   again_cancel_timmings:
    cout <<setw(70)<<"TIMMINGS FOR FLIGHTS"<<endl<<endl<<endl
         <<setw(40)<<"1. "<<FlightTimmings[0]<<endl
         <<setw(40)<<"2. "<<FlightTimmings[1]<<endl
         <<setw(40)<<"3. "<<FlightTimmings[2]<<endl
         <<setw(40)<<"4. "<<FlightTimmings[3]<<endl
         <<setw(40)<<"5. "<<"BACK"<<endl<<endl;
    cout <<setw(98)<<"PRESS THE CORRESPONDING NUMBER TO SELECT  YOUR FLIGHT's TIME!";    
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin  >>FlightTime;
    cout <<endl<<endl;
    switch(FlightTime)
    {
    case 1 :
    case 2 :
    case 3 :
    case 4 : 
    again_cancel_class:
    cout <<setw(68)<<"CLASSES WE OFFER"<<endl<<endl<<endl
         <<setw(41)<<"1. "<<Classes[0]<<endl
         <<setw(41)<<"2. "<<Classes[1]<<endl
         <<setw(41)<<"3. "<<Classes[2]<<endl
         <<setw(41)<<"4. "<<"BACK"<<endl<<endl;
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
    if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][seat_num-1] == 1)
    {
      FlightInfo[Destination-1][FlightTime-1][ClassType-1][seat_num-1] =0;

      seats_count[Destination-1][FlightTime-1][ClassType-1] -= 1;
      cout <<FlightInfo[Destination-1][FlightTime-1][ClassType-1][seats_count[Destination-1][FlightTime-1][ClassType-1]];
      cout <<seats_count[Destination-1][FlightTime-1][ClassType-1];
      cout <<setw(77)<<"YOUR SEAT BOOKING HAS BEEN CANCELED"<<endl<<endl;
    } 
     else 
    {
      cout <<setw(85)<<"THIS SEAT IS NOT BOOKED."<<endl<<endl
           <<setw(95)<<"PLEASE PROVIDE CORRECT INFORMATION TO CANCEL THE BOOKING"<<endl<<endl<<endl;

    }  
    break;
    case 4 :
    goto again_cancel_timmings;
    break;
    default : 
     cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A CLASS ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_cancel_class;
      }
      break;
      case 5 :
     goto again_cancel_destination;
      break;

      default:
       cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A TIME ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_cancel_timmings;
      }      
      break;

      case 5 :
      
      break;

      default:
       cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A CITY ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_cancel_destination;
     }
        
       

}




}