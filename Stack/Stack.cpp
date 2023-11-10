// Imp of Stack : 
using namespace std;
#include<iostream>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int item)
{
	if (top == MAX - 1)
	{
		cout << "Stack is full !" << endl;
		return;
	}
	top = top + 1;
	stack[top] = item;
	return;
}
int pop()
{
	int item;
	if (top == -1)
	{
		cout << "Stack is empty !" << endl;
		return -1;
	}
	item = stack[top];
	top = top - 1;
	return item;
}
int peek()
{
	int item;
	if (top == -1)
	{
		cout << "Stack is empty !" << endl;
		return -1;
	}
	item = stack[top];
	return item;
}
void display()
{
	int i;
	if (top == -1)
	{
		cout << "Stack is empty !" << endl;
		return;
	}
	cout << "The elements in stack is :" << endl;
	for (i = top; i >= 0; i--)
	{
		cout << stack[i] << endl;
	}
	return;
}
int main()
{
	int choice, value;
	do
	{
		cout << " 1.Push 2. Pop 3. Peek 4. Display 5. Exit \n Enter the choice :  ";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Enter value to push : ";
			cin >> value;
			push(value);
			break;
		case 2: value = pop();
			cout << "The value is poped : " << value << endl;
			break;
		case 3: value = peek();
			cout << "The value is peeked : " << value << endl;
			break;
		case 4: display();
			break;
		default: cout << "Exiting....." << endl;
			choice = 5;
		}
	} while (choice != 5);
}