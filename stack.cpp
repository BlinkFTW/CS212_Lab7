/*
Eric Kang
Section 53
Lab 7

Description:
	Contains all definitions of functions listed in stack.h
	
*/

#include "stack.h"

/*-------------------------------------------------------------------
 * name: push
 * inputs: id[]	(char stack)
 *		   v	(char)
 * outputs: 
 * Adds the item v at the top of the named stack and increments the 
 * pointer to the top of the stack.
	 		   id
			|_____|	4
			|_____|	3
 id[id[0]]->|_____|	2  //id[id[0]] == id[2]
			|__v__|	1
 id[0]	->	|__2__|	0

 *------------------------------------------------------------------*/
void  push(char id[] ,char v)
  {   
      if (sisFull(id))
         printf("stack is full\n");
      else
        {
          id[id[0]] = v;
          id[0]++;
        } ;
  };   

/*-------------------------------------------------------------------
 * name: pop
 * inputs:  id[]	(char stack)
 * outputs: topVal	(char)
 * Decrements the pointer to the top of the named stack and returns
 * its value to the calling program
 *------------------------------------------------------------------*/
char pop (char id[])
  {  
	char topVal;
     if (sisEmpty(id))
        printf("Stack is empty\n");
     else
     { 
       id[0]--;
	   topVal = id[id[0]];	//Store top value before clearing
	   id[id[0]] = 0;	//Clear
       return topVal;
     } 
  };

/*-------------------------------------------------------------------
 * name: isFull
 * inputs:  id[]	(char stack)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is full, if so 1 is returned
 * otherwise 0 is returned to the caller
 *------------------------------------------------------------------*/
char sisFull(char id[])
  { 
    if (id[0] == MAXSTACKSIZE)
      return 1;
    else return 0;
  };

/*-------------------------------------------------------------------
 * name: sisEmpty
 * inputs:  id[]	(char stack)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is empty, if so 1 is returned
 * otherwise 0 is returned to the caller.
 *------------------------------------------------------------------*/
char sisEmpty(char id[])
  {
    if (id[0] == 1)
      return 1;
    else return 0;
  };    

/*-------------------------------------------------------------------
 * name: peek
 * inputs:  id[]	(char stack)
 * outputs: id[id[0]-1]	(char)
 * Returns the value on top of the named stack
 *------------------------------------------------------------------*/
char speek(char id[])
  {
    if (sisEmpty(id))
        printf("Stack is empty\n");
    else
		return (id[id[0]-1]);
  };

/*-------------------------------------------------------------------
 * name: ssize
 * inputs:  id[]	(char stack)
 * outputs: 0 or id[0]-1	(char)
 * Returns the the current number of elements in the named stack
 *------------------------------------------------------------------*/
char ssize(char id[])
  {
	if(sisEmpty(id))
		return 0;
	else
		return id[0]-1;			
  };

/*-------------------------------------------------------------------
 * name: printStack
 * inputs:  id[]	(char stack)
 * outputs: (none)
 * prints named stack to illustrate the workings of a stack
 *------------------------------------------------------------------*/
void printStack(char id[])
{
	char i;
	printf("\nStack 1 size: %d\n---------\n", ssize(id));
	for(i=(MAXSTACKSIZE-1);i>=0;i--)
	{
		if(i==0)
			printf("%5d <- Stack pointer\n\n", id[i]);
		else
			printf("%5d\n", id[i]);
	}
};

//**************************************************************************************
//INT functions

/*-------------------------------------------------------------------
 * name: intpush
 * inputs: id[]	(int stack)
 *		   v	(int)
 * outputs: 
 * Adds the item v at the top of the named stack and increments the 
 * pointer to the top of the stack.
	 		   id
			|_____|	4
			|_____|	3
 id[id[0]]->|_____|	2  //id[id[0]] == id[2]
			|__v__|	1
 id[0]	->	|__2__|	0

 *------------------------------------------------------------------*/
void  intpush(int id[] ,int v)
  {   
      if (intsisFull(id))
         printf("stack is full\n");
      else
        {
          id[id[0]] = v;
          id[0]++;
        } ;
  };   

/*-------------------------------------------------------------------
 * name: intpop
 * inputs:  id[]	(int stack)
 * outputs: topVal	(int)
 * Decrements the pointer to the top of the named stack and returns
 * its value to the calling program
 *------------------------------------------------------------------*/
int intpop (int id[])
  {  
	int topVal;
     if (intsisEmpty(id))
        printf("Stack is empty\n");
     else
     { 
       id[0]--;
	   topVal = id[id[0]];	//Store top value before clearing
	   id[id[0]] = 0;	//Clear
       return topVal;
     } 
  };

/*-------------------------------------------------------------------
 * name: isFull
 * inputs:  id[]	(int stack)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is full, if so 1 is returned
 * otherwise 0 is returned to the caller
 *------------------------------------------------------------------*/
int intsisFull(int id[])
  { 
    if (id[0] == MAXSTACKSIZE)
      return 1;
    else return 0;
  };

/*-------------------------------------------------------------------
 * name: intsisEmpty
 * inputs:  id[]	(int stack)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is empty, if so 1 is returned
 * otherwise 0 is returned to the caller.
 *------------------------------------------------------------------*/
int intsisEmpty(int id[])
  {
    if (id[0] == 1)
      return 1;
    else return 0;
  };    

/*-------------------------------------------------------------------
 * name: peek
 * inputs:  id[]	(int stack)
 * outputs: id[id[0]-1]	(int)
 * Returns the value on top of the named stack
 *------------------------------------------------------------------*/
int intspeek(int id[])
  {
    if (intsisEmpty(id))
        printf("Stack is empty\n");
    else
		return (id[id[0]-1]);
  };

/*-------------------------------------------------------------------
 * name: intssize
 * inputs:  id[]	(int stack)
 * outputs: 0 or id[0]-1	(int)
 * Returns the the current number of elements in the named stack
 *------------------------------------------------------------------*/
int intssize(int id[])
  {
	if(intsisEmpty(id))
		return 0;
	else
		return id[0]-1;			
  };

/*-------------------------------------------------------------------
 * name: printIntStack
 * inputs:  id[]	(int stack)
 * outputs: (none)
 * prints named stack to illustrate the workings of a stack
 *------------------------------------------------------------------*/
void printIntStack(int id[])
{
	int i;
	printf("\nStack 1 size: %d\n---------\n", intssize(id));
	for(i=(MAXSTACKSIZE-1);i>=0;i--)
	{
		if(i==0)
			printf("%5d <- Stack pointer\n\n", id[i]);
		else
			printf("%5d\n", id[i]);
	}
};
