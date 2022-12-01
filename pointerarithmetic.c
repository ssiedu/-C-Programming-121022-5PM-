#include<stdio.h>
void main()
{
	int num=50,a=10;
	int *ptr = &num;
	int *ptr1 = &a;
//	printf("\n address of ptr : %u",ptr);
	/*++ptr; // ptr= ptr+1
	//ptr++;//new_address = current_add + i*sizeof(datatype)
	printf("\n address of ptr after increment : %u",ptr);*/
	
	// Decrement
	/*ptr--;//new_address = current_add - i*sizeof(datatype)
	printf("\n address of ptr after decrement : %u ",ptr);*/
	
	// Addition
	
	/*ptr=ptr+3;
	printf("\n new address of ptr Addition : %u ",ptr);
	
	//Substraction
	
	ptr=ptr-2;
	printf("\n new address of ptr Subtraction : %d",ptr);*/
	
	//Addition of address
	
	ptr = ptr - ptr1;
	printf("\n Addition of two address : %u",ptr1);
	
	getch();
}
