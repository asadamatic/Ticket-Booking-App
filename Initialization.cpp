
namespace IFI
{

void InitialFightInfo(int FlightInfo[4][4][3][5])
{
  for(int a = 0; a <= 3; a++)
   {  
    for(int b = 0; b <= 3; b++)
    {
    for(int c = 0; c <= 2; c++)
    {
    for(int d = 0; d <= 4; d++)
    { 
      FlightInfo[a][b][c][d] = 0;
    }
    }  
    }  
   }
}

}

namespace ISC
{
void InitialSeatCount(int SeatCount[4][4][3])
{
    for(int a = 0; a <= 3; a++)
    {
    for(int b = 0; b <= 3; b++)
    {
    for(int c = 0; c <= 2; c++)
    { 
        SeatCount[a][b][c] = 0;
    }
    }  
    }  
}

}