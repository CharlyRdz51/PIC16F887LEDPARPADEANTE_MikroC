/*SSPPSE
Ing. Jose Jesus Ramos Guillen
Aguilar Rodriguez Carlos AdolfO
215860049
LED Parpadeante
26 de agosto del 2016
*/

void main() 
{
   ANSEL=0x00;
   ANSELH=0x00;
   C1ON_bit=0;
   c2on_bit=0;
   
   TRISC.F0=0;
   TRISA.F2=1;
   PORTC.F0=0;
   
   while(1)
   {
    if(PORTA.F2==0)
    {
     PORTC.F0=1;
     delay_ms(500);
     PORTC.F0=0;
     delay_ms(500);
    }
   }
   



}