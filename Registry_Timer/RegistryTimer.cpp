// RegistryTimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"stdio.h"
int main() {
	unsigned char amba=0;
	//initial value of the amba register
	printf("After initialization, amba = 0x%X\n",amba);
	//set 'Mode bit' and 'Enable bit' high
	amba = 0xC0; 
	//you need to change this line!
	printf("After mode and enable bits set, amba = 0x%X\n",amba);
	//alsoset the 'prescale' bits so 'clock divide by' is 16
	amba = 0x8; //you need to change this line!
	printf("After setting prescale bits, amba = 0x%X\n",amba);
	//clear the 'Mode bit', leaving other bits alone
	amba = amba & 0x80;
	//you need to change this line!
	printf("After clearing the mode bit, amba = 0x%X\n",amba);
	return 0;
}





