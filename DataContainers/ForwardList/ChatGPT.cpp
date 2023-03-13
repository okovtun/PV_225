#include <iostream> 

using namespace std;
class Node {

public:     int data;     Node* next;      Node(int data)
{
	this->data = data;
	this->next = nullptr;
}
};

class LinkedList {
public:
	Node* head;
	LinkedList()
	{
		head = nullptr;
	}
	void add(int data)
	{
		Node* node = new Node(data);
		if (head == nullptr)
		{
			head = node;
		}
		else 
		{
			Node* current = head;
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = node;
		}

	}


	void remove(int data) {
		if (head == nullptr) {
			return;
		}

		if (head->data == data)
		{
			Node* temp = head;
			head = head->next;
			delete temp;
			return;
		}


		Node* current = head;

		while (current->next != nullptr) {
			if (current->
				next->data == data) {
				Node* temp = current->next;
				current->next = current->next->next;
				delete temp;

				return;
			}

			current = current->next;
		}
	}

	void print() {
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->data << " ";
			current = current->next;
		}

		cout << endl;
	}
};



int main()

{
	LinkedList list;
	list.add(1);
	list.add(2);
	list.add(3);
	list.add(4);
	list.print(); // 1 2 3 4      
	list.remove(2);
	list.print(); // 1 3 4      
	return 0;
}