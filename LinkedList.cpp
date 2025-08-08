#include <iostream>

using namespace std;

template<typename T>
class LinkedList {
private:
	struct Node {
	
		Node* pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node* head;
	Node* tail;
	int Size;
public:
	LinkedList() :head{ nullptr }, tail{ nullptr }, Size{ 0 } { }

	void display() {
		Node* current = head;
		while (current != nullptr) {
			cout << current->data << " ";
			current = current->pNext;
		}
	}
	void push_back(T value) {
		Node* newNode = new Node(value);
		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->pNext = newNode;
			tail = newNode;

		}
		Size++;
	}
	void push_front(T value) {
		Node* newNode = new Node(value);
		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			newNode->pNext = head;
			head = newNode;
		}
		Size++;
	}
	void pop_back() {
		if (head == nullptr) {
			return;
		}
		if (head == tail) {
			delete head;
			head = nullptr;
			tail = nullptr;
		}
		else {
			Node* current = head;
			while (current->pNext != tail) {
				current = current->pNext;
			}
			delete tail;
			tail = current;
			current->pNext = nullptr;
		}
		Size--;
		
	}
	void pop_front() {
		if (head == nullptr) {
			return;
		}
		if (head == tail) {
			delete head;
			head = nullptr;
			tail = nullptr;
		}
		else {
			Node* tmp = head;
			head = head->pNext;
			delete tmp;
		}
		Size--;
	}
	void insert(T value, int index) {
		if (index > Size || index < 0) {
			return;
		}
		if (index == 0) {
			push_front(value);
		}
		else if (index == Size) {
			push_back(value);
		}
		else {
			Node* newNode = new Node(value);
			Node* current = head;
			int currentIndex = 0;
			while (currentIndex < index - 1) {
				current = current->pNext;
				currentIndex++;
			}
			newNode->pNext = current->pNext;
			current->pNext = newNode;
			Size++;
		}
	}
	int size() {
		return Size;
	}
	bool is_empty() {
		return Size == 0;
	}
	void clear() {
		while (Size != 0) {
			pop_front();
		}
	}
	~LinkedList() {
		clear();
	}
};



int main(void) {
	LinkedList<int> list;
	list.push_back(5);
	list.push_back(15);
	list.push_back(25);
	list.insert(32,0);
	list.insert(255, 4);
	list.clear();
	list.display();

}