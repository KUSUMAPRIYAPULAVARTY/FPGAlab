.include "m328Pdef.inc"

Start:
        ldi r17, 0b11110011 ; identifying input pins as 10,11
        out DDRB,r17            ; declaring pins as input
        ldi r17, 0b11111111 ;
        out PORTB,r17           ;   
        in r17,PINB

	ldi r20,0b00000010 ;counter 
	rcall loopin

	ldi r21,0b00000001
	and r21,r17 ;getting value of Y

	lsr r17
	ldi r22,0b00000001
        and r22,r17 ;getting value of X

	ldi r24,0b00000001 ; to generate compliments
	eor r21,r24 ; Y'
	or r22,r21  ; X+Y'

	ldi r20,0b00000010
	rcall loopout

	ldi r16, 0b00111100     ;identifying output pins 2,3,4,5
	out DDRD,r16		;declaring pins as output
	out PORTD,r22		;writing output to pins 2,3,4,5

	rjmp Start

loopin:	lsr r17
	dec r20
	brne loopin
	ret
loopout:lsl r22
	dec r20
	brne loopout
	ret
