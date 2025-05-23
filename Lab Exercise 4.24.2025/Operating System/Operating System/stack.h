//Stack class definition (mystack.h)
//Author: nmessa
//Date: 4.15.2008

#ifndef MYSTACK_H
#define MYSTACK_H
#include "processList.h"

class Stack
{
	private: 
		ProcessList stack;
		int size;
	public:
		Stack();
		void push(Process);
		Process pop();
		bool checkEmpty();
		void display();
};
#endif
