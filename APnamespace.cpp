
namespace AP

{
	
  void AdminPortal(int &AdminLogin, string Admin[2], string AdminCheck[2], string DestinationCity[4], string FlightTimmings[4], string Classes[3],
              int Destination, int FlightTime, int FlightInfo[4][4][3][5])
{
    
    

    ifstream Fileadmin;
    Fileadmin.open("admin.txt");
    
  

    Fileadmin >>Admin[0];
    Fileadmin >>Admin[1];  
    Fileadmin >>AdminLogin;
    Fileadmin.close();
    
    
    
    if(AdminLogin == 0)
    {

    cout <<setw(90)<<"CHOOSE A USER NAME ANE PASSWORD TO MAKE YOUR ACCOUNT SECURE"<<endl<<endl<<endl
         <<setw(62)<<"USER NAME"<<endl<<endl<<endl;
    cout <<setw(57)<<" ";
    cin >>Admin[0];

    cout <<endl<<endl;    
    cout <<setw(62)<<"PASSWORD"<<endl<<endl<<endl;
    cout <<setw(57)<<" ";
    cin >> Admin[1];
    
    AdminLogin++;
    ofstream Fileadmin1;
    Fileadmin1.open("admin.txt");
    Fileadmin1 <<Admin[0]<<endl;
    Fileadmin1 <<Admin[1]<<endl;
    Fileadmin1 <<AdminLogin;
    } 
    else if(AdminLogin > 0 )
    {
    again_admin:      
    cout <<setw(62)<<"USER NAME"<<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>AdminCheck[0];
    cout <<endl<<endl; 
    cout <<setw(62)<<"PASSWORD"<<endl<<endl<<endl;
    cout <<setw(57)<<" ";cin >>AdminCheck[1];
    cout <<endl<<endl<<endl;
    if(AdminCheck[0] == Admin[0] && AdminCheck[1] == Admin[1])
    {
        
    
    again_admin_destination:
    cout <<setw(64)<<"DESTINATIONS "<<endl<<endl<<endl
         <<setw(40)<<"1. "<<DestinationCity[0]<<endl
         <<setw(40)<<"2. "<<DestinationCity[1]<<endl
         <<setw(40)<<"3. "<<DestinationCity[2]<<endl
         <<setw(40)<<"4. "<<DestinationCity[3]<<endl
         <<setw(46)<<"5. LOGOUT"<<endl<<endl;
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
    again_admin_timmings: 
    cout <<setw(64)<<"TIMMINGS "<<endl<<endl<<endl
         <<setw(40)<<"1. "<<FlightTimmings[0]<<endl
         <<setw(40)<<"2. "<<FlightTimmings[1]<<endl
         <<setw(40)<<"3. "<<FlightTimmings[2]<<endl
         <<setw(40)<<"4. "<<FlightTimmings[3]<<endl
         <<setw(40)<<"5. "<<"BACK"<<endl
         <<setw(40)<<"6. "<<"LOGOUT"<<endl<<endl;
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
    cout <<setw(60)<<DestinationCity[Destination-1]<<endl<<endl;
    cout <<setw(61)<<FlightTimmings[FlightTime-1]<<endl<<endl;
    for(int i = 0; i <= 2; i++)
    {
    cout <<setw(55)<<Classes[i]<<"    ";
    for(int n = 0; n <= 4; n++)
    {  
    cout <<FlightInfo[Destination-1][FlightTime-1][i][n]<<"  ";
    
    }
    cout <<endl<<endl;
    }cout <<endl<<endl;
    break;

    case 5 :
    goto again_admin_destination;
    
    case 6 :
    break;
    default:
     cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A TIME ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_admin_timmings;


    }
    break;

    case 5 :
    break;

    default:
    cerr <<setw(61)<<"ERROR!"<<endl
             <<setw(98)<<"YOU CAN CHOOSE A DESTINATION ONLY BY PRESSING THE NUMBER CORRESPONDING TO IT.";
             cout <<endl<<endl<<endl;
             goto again_admin_destination;
    }


    }  
    else 
    { 

    cerr <<setw(75)<<"USERNAME OR PASSWORD IS INCORRECT!";
    cout <<endl<<endl<<endl;    
    goto again_admin;


    } 

   
    }
    

} 

} 
