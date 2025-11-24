#include<stdio.h>
int queue[size];
int front=-1;
int rear=-1;

if queue==empty()
{
	return(front==-1)
}
void enqueue(value)
{
	if queue==isfull()
	{
		printf("Queue is full and insertion can't be done");
		return;
	}
	else
	{
		rear=value;
		printf("The elements in queue are:",queue);
	}
}
void dequeue()
{
	if queue==empty()
	{
		printf("No elements in the queue");
		return(front==-1)
	}
	else
	{
		front=front+1;
