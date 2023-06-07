#include <iostream> 
 
struct Node { 
	public: 
		int data; 
		Node* next; 
 
		explicit Node(int data) { 
			this->data = data; 
			this->next = nullptr; 
		} 
}; 
struct LinkedList {	 
	public: 
		Node *head; 
		Node *tail; 
		size_t n; 
		 
		explicit LinkedList() { 
			this->head = nullptr; 
			this->tail = nullptr; 
			this->n = 0; 
		} 
 
		void push_back(int elem) { 
			// Pushes one element at the end of the linked list 
			if (head == nullptr) { 
				// None of the elements are added 
				head = new Node(elem); 
				tail = head; 
			}else{ 
				// Atleast on element is present; 
				Node *temp = new Node(elem); 
				this->tail->next = temp; 
				this->tail = this->tail->next; 
			} 
			n++; 
		} 
 
		void print() { 
			Node *loop = this->head; 
			while (loop) { 
				std::cout << loop->data; 
				loop = loop->next; 
			} 
			std::cout << std::endl; 
		} 
 
		void push_front(int elem) { 
			if (head == nullptr) { 
				// No element is pushed yet 
				head = new Node(elem); 
				tail = head; 
			}else{ 
				// Atleast one element is pushed 
				Node *temp = new Node(elem); 
				temp->next = head; 
				head = temp; 
			} 
			n++; 
		} 
 
		int rat(int index) { 
			int i = n-index-1; 
			Node *loop = head; 
			while (i-- and loop) { 
				loop = loop->next; 
			} 
 
			return loop->data; 
		} 
 
		void update(int index, int elem) { 
			int i = n-index-1; 
			Node *loop = head; 
			while (i-- and loop) { 
				loop = loop->next; 
			} 
			loop->data = elem; 
		} 
}; 
 
LinkedList *bigFactorial(int number) { 
	LinkedList *ll = new LinkedList(); 
	ll->push_front(1); 
	for(int i=2; i<=number; i++) { 
		int carry = 0; 
		for(int j=0; j < ll->n; j++) { 
			int k = ll->rat(j) * i + carry; 
			int s = k%10; 
			carry = k/10; 
			ll->update(j, s); 
		} 
 
		if (carry != 0) { 
			// Add extra numbers 
			while (carry > 0) { 
				int r = carry%10; 
				ll->push_front(r); 
				carry /= 10; 
			} 
		} 
	} 
	return ll; 
} 
 
 
int main() { 
	// int num; 
	// std::cin >> num; 
	LinkedList *ll = bigFactorial(1000); 
	ll->print(); 
	return 0; 
} 