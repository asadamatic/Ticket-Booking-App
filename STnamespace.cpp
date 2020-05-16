
namespace ST

{
 
 void SelectingTime(int Destination, int FlightTime, int ClassType, int FlightInfo[4][4][3][5], int SeatCount[4][4][3], string DestinationCity[4], 
        string FlightTimmings[4], string Classes[3], string CustomerInfo[4][4][3][5][5], string CurrentCity, string Customer[5], string CompanyName, int ClassTransition )
  {
    again_time:

    again_f_timmings0:
    cout <<setw(70)<<"TIMMINGS FOR FLIGHTS"<<endl<<endl<<endl
         <<setw(40)<<"1. "<<FlightTimmings[0]<<endl
         <<setw(40)<<"2. "<<FlightTimmings[1]<<endl
         <<setw(40)<<"3. "<<FlightTimmings[2]<<endl
         <<setw(40)<<"4. "<<FlightTimmings[3]<<endl<<endl;
    cout <<setw(98)<<"PRESS THE CORRESPONDING NUMBER TO SELECT  YOUR FLIGHT's TIME!";    
    cout <<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin  >>FlightTime;
    cout <<endl<<endl;
    //SWITCH FOR FLIGHT TIME
    switch(FlightTime)
    {
        case 1 :
        again_class00:
        again_f_class000:
        AskC::AskClass( ClassType, Classes );
        cout <<setw(57)<<" ";cin  >>ClassType;     
        cout <<endl<<endl<<endl;
    //SWITCH FOR CLASS TYPE
    switch(ClassType)
    { 
        case 1 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {

        if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {   
            
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
           //ASKING CUSTOMER FOR DATA
            break;
          }
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[0]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
     
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class000;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_fc_transitions00;
               

          }  break;
            
          }  
          else continue;
             
        }
        break;
        case 2 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
        if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
           
           
            break;
          
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[1]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_fc_transitions00: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
     
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class000;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_fc_transitions00;

    } break;
            
          }  
          else continue;
             
        }
        
        break;
        case 3 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
        if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
           //ASKING CUSTOMER FOR DATA
            break;
          
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[2]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_bc_transition00: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class000;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_bc_transition00;

    } break;
            
          }  
          else continue;
             
        }
        
        break;

        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A CLASS ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_class00;

    }
        break;

        case 2 :


        again_class01:
        again_f_class001:
        AskC::AskClass( ClassType, Classes );
        cout <<setw(57)<<" ";cin  >>ClassType;     
        cout <<endl<<endl<<endl;
    //SWITCH FOR CLASS TYPE
    switch(ClassType)
    {
        case 1 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
        if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[0]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_ec_transition01: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class001;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_ec_transition01;

    } break;
            
          }  
          else continue;
             
        }
        break;
        case 2 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
         if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[1]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_fc_transitions01: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class001;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_fc_transitions01;

    } break;
            
          }  
          else continue;
             
        }
        
        break;
        case 3 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
         if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[2]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_bc_transition01: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class001;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_bc_transition01;

    } break;
            
          }  
          else continue;
             
        }
        
        break;

        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A CLASS ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_class01;

    }
        
        break;
        case 3 :

        again_class02:
        again_f_class002:
        AskC::AskClass( ClassType, Classes );
        cout <<setw(57)<<" ";cin  >>ClassType;     
        cout <<endl<<endl<<endl;
    //SWITCH FOR CLASS TYPE
    switch(ClassType)
    {
        case 1 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
         if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[0]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_ec_transition02: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class002;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_ec_transition02;

    } break;
            
          }  
          else continue;
             
        }
        break;
        case 2 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
         if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[1]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_fc_transitions02: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class002;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_fc_transitions02;

    } break;
            
          }  
          else continue;
             
        }
        
        break;
        case 3 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
        if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[2]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_bc_transition02: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class002;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_bc_transition02;

    } break;
            
          }  
          else continue;
             
        }
        
        break;

        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A CLASS ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_class02;

    }
        
        break;
        case 4 :

        again_class03:
        again_f_class003:
        AskC::AskClass( ClassType, Classes );
        cout <<setw(57)<<" ";cin  >>ClassType;     
        cout <<endl<<endl<<endl;
    //SWITCH FOR CLASS TYPE
    switch(ClassType)
    {
        case 1 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
         if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1]>= 5)
          {
            cout <<setw(50)<<Classes[0]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_ec_transition03: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class003;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_ec_transition03;

    } break;
            
          }  
          else continue;
             
        }
        break;
        case 2 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
         if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[1]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_fc_transitions03: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;         
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class003;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_fc_transitions03;

    } break;
            
          }  
          else continue;
             
        }
        
        break;
        case 3 :
        while(SeatCount[Destination-1][FlightTime-1][ClassType-1] <= 240)
        {   
        if(FlightInfo[Destination-1][FlightTime-1][ClassType-1][SeatCount[Destination-1][FlightTime-1][ClassType-1]] == 0 && SeatCount[Destination-1][FlightTime-1][ClassType-1] < 5)
          {
            SR::SeatReservation( Destination,  FlightTime,  ClassType, FlightInfo, SeatCount, DestinationCity, 
            FlightTimmings,  Classes,  CustomerInfo,  CurrentCity,  Customer, CompanyName );
            break;
          } 
          else if(SeatCount[Destination-1][FlightTime-1][ClassType-1] >= 5)
          {
            cout <<setw(50)<<Classes[2]<<" FOR THIS FLIGHT HAS BEEN BOOKED COMPLETELY!"<<endl<<endl;  
            again_bc_transition03: 
            AskT::AskTransition( ClassTransition );
            cout <<setw(57)<<" ";cin  >>ClassTransition;
            cout <<endl<<endl<<endl;
    
    //SWITCH FOR CLASS TRANSITION
    switch(ClassTransition)
    {
        case 1 :
        goto again_f_class003;
        break;
        
        case 2 :
        goto again_f_timmings0;
        break;

        case 3 :
        break;
        break;
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE AN OPTION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_bc_transition03;

    } break;
            
          }  
          else continue;
             
        }
        
        break;

        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A CLASS ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_class03;

    }
        
        break;
        
        default :
        cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A TIME ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_time;
        
    }

    
        
}
  


}
