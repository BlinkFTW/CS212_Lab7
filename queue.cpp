/*
Eric Kang
Section 53
Lab 7

Description:
	Contains all definitions of functions listed in queue.h
	
#include "queue.h"



//**********************************************************************************************
//CHAR Functions



/*-------------------------------------------------------------------
 * name: enQueue
 * inputs: id[] (char queue)
 *		   v	(char)
 * outputs: (none)
 * Adds the item v at the top of the named queue and increments the 
 * Pointer to the top of the queue.
 *------------------------------------------------------------------*/
void  enQueue(char id[], char v)
 {	   
	  char rear=MAXQUEUESIZE+1;	//set last element of id as rear Pointer	
      if (qisFull(id))
         printf("\nQueue is full\n");
      else
        {
			id[id[rear]] = v;
			id[rear] = (id[rear]+1)%MAXQUEUESIZE;
        };
 };  

/*-------------------------------------------------------------------
 * name: deQueue
 * inputs: id[] (char queue)
 * outputs: frontVal (char)
 * Stores value front pochars at in the named queue then increments front Pointer
 * and returns its value to the calling program
 *------------------------------------------------------------------*/
char deQueue (char id[])	//remove front var, then increment front Pointer
  {  
	char front=MAXQUEUESIZE;
	char frontVal;
     if (qisEmpty(id))
        printf("\nQueue is empty\n");
     else
     {
		 frontVal = id[id[front]];	//store front value
		 id[id[front]] = 0;
		 id[front] = (id[front]+1)%MAXQUEUESIZE;	//increment front pionter in circular queue
     } 
	return frontVal;
  };

/*-------------------------------------------------------------------
 * name: qisFull
 * inputs: id[] (char queue)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is full, if so 1 is returned
 * otherwise 0 is returned to the caller
 *------------------------------------------------------------------*/
char qisFull(char id[])
  { 
	char front=MAXQUEUESIZE;
	char rear=MAXQUEUESIZE+1;
    if (id[front]==id[rear] && id[id[front]])
		return 1;
    else return 0;
  };

/*-------------------------------------------------------------------
 * name: qisEmpty
 * inputs: id[] (char queue)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is empty, if so 1 is returned
 * otherwise 0 is returned to the caller.
 *------------------------------------------------------------------*/
char qisEmpty(char id[])
  {
	char front=MAXQUEUESIZE;
    if (id[id[front]])
      return 0;
    else return 1;
  };    

/*-------------------------------------------------------------------
 * name: qpeek
 * inputs: id[] (char queue)
 * outputs: id[id[front]]	(char)
 * Returns the value on top of the named stack
 *------------------------------------------------------------------*/
char qpeek(char id[])
  {
	char front=MAXQUEUESIZE;
    if (qisEmpty(id))
        printf("\nQueue is empty\n");
    else
		return id[id[front]];
  };

/*-------------------------------------------------------------------
 * name: qsize
 * inputs: id[] (char queue)
 * outputs: size (char)
 * Returns the the current number of elements in the named stack
 *------------------------------------------------------------------*/
char qsize(char id[])
  {
	char front=MAXQUEUESIZE;
	char rear=MAXQUEUESIZE+1;
	char size=0;
	char i;
	if(qisEmpty(id))
		size = 0;
	else if(qisFull(id))
		size = MAXQUEUESIZE;
	else if(id[id[rear]]==0)	//if id[id[rear]]==0 then queue is not full
	{
		for(i=0;i<=MAXQUEUESIZE-1;i++)	//Cycle through queue and count locations with non-zero values
		{
			if(id[i]!=0)
				size++;
		}//END for		
	}//END else if rear=0
	return size;
  };


/*-------------------------------------------------------------------
 * name: printQueue
 * inputs: id[] (char queue)
 * outputs: (none)
 * prints a queue with indication of front and rear Pointers, and size
 *------------------------------------------------------------------*/
void printQueue(char id[])
{
	char i;
	printf("\nQueue 1 size: %d\n---------\n", qsize(id));
	for(i=(MAXQUEUESIZE+1);i>=0;i--)
	{
		if(i==MAXQUEUESIZE+1)
			printf("%5d <- Rear Pointer\n", id[i]);
		else if(i==MAXQUEUESIZE)
			printf("%5d <- Front Pointer\n", id[i]);
		else
			printf("%5d\n", id[i]);
	}

};

//*********************************************************************************

//INT functions

/*-------------------------------------------------------------------
 * name: intEnQueue
 * inputs: id[] (int queue)
 *		   v	(int)
 * outputs: (none)
 * Adds the item v at the top of the named queue and increments the 
 * Pointer to the top of the queue.
 *------------------------------------------------------------------*/
void  intEnQueue(int id[], int v)
 {	   
	  int rear=MAXQUEUESIZE+1;	//set last element of id as rear Pointer	
      if (intQisFull(id))
         printf("\nQueue is full\n");
      else
        {
			id[id[rear]] = v;
			id[rear] = (id[rear]+1)%MAXQUEUESIZE;
        };
 };  

/*-------------------------------------------------------------------
 * name: intDeQueue
 * inputs: id[] (int queue)
 * outputs: frontVal (int)
 * Stores value front points at in the named queue then increments front Pointer
 * and returns its value to the calling program
 *------------------------------------------------------------------*/
int intDeQueue (int id[])	//remove front var, then increment front Pointer
  {  
	int front=MAXQUEUESIZE;
	int frontVal;
     if (intQisEmpty(id))
        printf("\nQueue is empty\n");
     else
     {
		 frontVal = id[id[front]];	//store front value
		 id[id[front]] = 0;
		 id[front] = (id[front]+1)%MAXQUEUESIZE;	//increment front pionter in circular queue
     } 
	return frontVal;
  };

/*-------------------------------------------------------------------
 * name: intQisFull
 * inputs: id[] (int queue)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is full, if so 1 is returned
 * otherwise 0 is returned to the caller
 *------------------------------------------------------------------*/
int intQisFull(int id[])
  { 
	int front=MAXQUEUESIZE;
	int rear=MAXQUEUESIZE+1;
    if (id[front]==id[rear] && id[id[front]])
		return 1;
    else return 0;
  };

/*-------------------------------------------------------------------
 * name: intQisEmpty
 * inputs: id[] (int queue)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is empty, if so 1 is returned
 * otherwise 0 is returned to the caller.
 *------------------------------------------------------------------*/
int intQisEmpty(int id[])
  {
	int front=MAXQUEUESIZE;
    if (id[id[front]])
      return 0;
    else return 1;
  };    

/*-------------------------------------------------------------------
 * name: peekIntQ
 * inputs: id[] (int queue)
 * outputs: id[id[front]]	(int)
 * Returns the value on top of the named stack
 *------------------------------------------------------------------*/
int peekIntQ(int id[])
  {
	int front=MAXQUEUESIZE;
    if (intQisEmpty(id))
        printf("\nQueue is empty\n");
    else
		return id[id[front]];
  };

/*-------------------------------------------------------------------
 * name: intQsize
 * inputs: id[] (int queue)
 * outputs: size (int)
 * Returns the the current number of elements in the named stack
 *------------------------------------------------------------------*/
int intQsize(int id[])
  {
	int front=MAXQUEUESIZE;
	int rear=MAXQUEUESIZE+1;
	int size=0;
	int i;
	if(intQisEmpty(id))
		size = 0;
	else if(intQisFull(id))
		size = MAXQUEUESIZE;
	else if(id[id[rear]]==0)	//if id[id[rear]]==0 then queue is not full
	{
		for(i=0;i<=MAXQUEUESIZE-1;i++)	//Cycle through queue and count locations with non-zero values
		{
			if(id[i]!=0)
				size++;
		}//END for		
	}//END else if rear=0
	return size;
  };


/*-------------------------------------------------------------------
 * name: printIntQueue
 * inputs: id[] (int queue)
 * outputs: (none)
 * prints a queue with indication of front and rear Pointers, and size
 *------------------------------------------------------------------*/
void printIntQueue(int id[])
{
	int i;
	printf("\nQueue 1 size: %d\n---------\n", intQsize(id));
	for(i=(MAXQUEUESIZE+1);i>=0;i--)
	{
		if(i==MAXQUEUESIZE+1)
			printf("%5d <- Rear Pointer\n", id[i]);
		else if(i==MAXQUEUESIZE)
			printf("%5d <- Front Pointer\n", id[i]);
		else
			printf("%5d\n", id[i]);
	}

};
