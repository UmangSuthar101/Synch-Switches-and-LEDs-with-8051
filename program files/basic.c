#include<reg51.h>
 
 sbit Switch  = P2^0;    //pin connected to toggle Led 
 sbit Switch2 = P2^1;
 sbit Led =P1^0;  //Pin connected to toggle led
 sbit Led2 = P1^1;
 
int main()
{
   Led  = 0; //configuring as output pin
	Led2 = 0;
   Switch = 1; //Configuring as input pin
	Switch2 = 1;
  while(1) //Continuous monitor the status of the switch.
  {
   
   if(Switch == 0) 
   {
     Led =1; //Led On
 
   } 
   else 
   {
     Led =0; //Led Off
   }
   
   if(Switch2 == 0) 
   {
     Led2 =1; //Led On
 
   } 
   else 
   {
     Led2 =0; //Led Off
   }
  }
}