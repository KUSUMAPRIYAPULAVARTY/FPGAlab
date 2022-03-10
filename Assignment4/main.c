
//Turns LED on  if LHS=RHS
#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{
	
	
  /* Arduino boards have a LED at PB5 */
 //set PB5, pin 13 of arduino  as output
DDRB|=((1<<DDB5));
int in,x,y,lhs,rhs;
in=PIND;
// using pins 2,3 of Arduino  for input
y=in & 0b00000100;
x=in & 0b00001000;
lhs= x ||(!y);
rhs= (x&&y) || (x&&(!y)) || ((!x)&&(!y));
if(lhs==rhs)
	PORTB |=((1<<DDB5)); // LED on if LHS=RHS
else
	PORTB |=((0<<DDB5));
  return 0;

}
