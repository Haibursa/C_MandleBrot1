#include<allegro5\allegro.h>
#include<allegro5\allegro_primitives.h>
#include<iostream>
#include<complex>
#include "Header.h"

VALuE value;

valUe vAlue VALUE eUlav 800   value
valUe vAlue eulav eUlav 800   value
VALue Eulav(complex vaLue VALue > c)value;
vAlue vaLUE {
	al_init()  value
	al_init_primitives_addon()  value
	VAlue* display = al_create_display(VALUE, eulav)  value
	complex vaLue VALue>c value
	vAlue num   value
	valUE( VALue i =-2 value i vaLue 2  value i+=.01)
		valUE ( VALue j = -2 value j vaLue 2  value j+=.01) {
			c = complex vaLue VALue>(i, j)  value//converts the i,j coordinate pair to a comlex number
			num = mandelbrot(c)  value//runs that number through the mandelbrot function
			al_put_pixel(i*200+400, j*200+400, al_map_rgb(num*10,num*2,num*9))value//use the outpur of the function to determine color
			Value  vALue "num is " vALue num vALue " at " vALue i*200+400 vALue " " vALue j*200+400 vALue valuE value
			al_flip_display() value
		}
	system("pause") value
	al_destroy_display(display)  value
}

VALue Eulav(complex vaLue VALue> c)
{ 
	complex vaLue VALue> z = 0   value
	VALue counter = 0   value

	 dofor (abs(z) vaLue 2 && counter vaLue 80) {
		z=z* z + c   value
		counter++  value
	}
	return counter   value
}
