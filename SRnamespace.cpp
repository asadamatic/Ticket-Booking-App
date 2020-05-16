
namespace SR

{

  void SeatReservation(int Destination, int FlightTime, int ClassType, int FlightInfo[4][4][3][5], int SeatCount[4][4][3], string DestinationCity[4], 
  string FlightTimmings[4], string Classes[3], string CustomerInfo[4][4][3][5][5], string CurrentCity, string Customer[5], string CompanyName  )
{
  
        FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] = 1;
            
        SeatCount[Destination-1][FlightTime-1][ClassType-1]++;
        cout <<setw(52)<<"SEAT NUMBER "<<SeatCount[Destination-1][FlightTime-1][ClassType-1]<<" HAS BEEN RESERVED FOR YOU"<<endl<<endl;
        //ASKING CUSTOMER FOR DATA
        cout <<setw(87)<<"PLEASE PROVIDE THIS INFORMATION TO CONFIRM YOUR TICKET"<<endl<<endl<<endl;
         
        cout  <<setw(48)<<Customer[0]
              <<setw(25)<<" ";
        getline(cin, CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][0]);
        getline(cin, CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][0]);
        cout <<endl<<endl<<endl;
          
        for(int c_loop = 1; c_loop <= 4; c_loop++)
        { 

        cout <<setw(48)<<Customer[c_loop]
             <<setw(25)<<" ";

        getline(cin, CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][c_loop]);
        cout <<endl<<endl<<endl;
          }      
          
           
          
           //PRINT TICKET 
           cout <<setw(67)<<"YOUR TICKET"; 
           cout <<endl<<endl;   
           cout <<setw(24) <<Customer[0]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][0];
           cout <<setw(24) <<"FROM       "<<"     "<<setw(25)<<CurrentCity;    
           cout <<endl<<endl;
           cout <<setw(24) <<Customer[1]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][1];
           cout <<setw(24) <<"DESTINATION"<<"     "<<setw(25)<<DestinationCity[Destination-1];  
           cout <<endl<<endl;
           cout <<setw(24) <<Customer[2]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][2];
           cout <<setw(24) <<"FLIGHT TIME"<<"     "<<setw(25)<<FlightTimmings[FlightTime-1]; 
           cout <<endl<<endl;
           cout <<setw(24) <<Customer[3]<<"      "<<setw(25)<<CustomerInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]][3];
           cout <<setw(24) <<"CLASS TYPE "<<"     "<<setw(25)<<Classes[ClassType-1]; 
           cout <<endl<<endl<<endl;
           cout <<setw(70)<<"THANK YOU FOR CHOOSING "<<CompanyName; 
           cout <<endl<<endl<<endl<<endl<<endl;
         
}

}