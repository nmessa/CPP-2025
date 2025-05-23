//Queue class definition (queue.h)
//Author: nmessa
//Date 4.15.2008
#ifndef QUEUE_H
#define QUEUE_H
#include "ProcessList.h"

class Queue
{
	private: 
		ProcessList queue;
		int size;
	public:
		Queue();
		void enqueue(Process);
		Process dequeue();
		bool checkEmpty();
		void display();
};
#endif
