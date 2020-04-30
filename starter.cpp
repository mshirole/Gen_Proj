//starter.cc

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
//code to create a linked list

struct Node
{
	int data;
	Node* next;
};

struct Node* head;

void Insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}
void Print()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
		
	}
	cout << endl;
}
int main()
{
	head = NULL;
	int n, x;
	cout << "How many numbers?\n";
	cin >> n;

	for (int i =0; i<n; i++)
	{
		cout << "Enter the number \n";
		cin >> x;
		Insert(x);
		Print();
	}
return 0;
}