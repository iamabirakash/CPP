// You are using GCC
#include <bits/stdc++.h>

struct link {
	int info;
	struct link* next;
};

struct link* start = NULL;

struct link* create_header_list(int data)
{
    //Type your code here
    link* newNode = new link;
    newNode->info = data;
    newNode->next = nullptr;
    if(start == nullptr){
        start = newNode;
    } else {
        link* temp = start;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

struct link* display()
{
	struct link* node;
	node = start;

	while (node != NULL) {
		std::cout << node->info << " ";
		node = node->next;
	}
	std::cout << std::endl;

	return start;
}

int main()
{
    int numElements;
    std::cin >> numElements;
    for (int i = 0; i < numElements; i++) {
        int value;
        std::cin >> value;
        create_header_list(value);
    }
	display();

	return 0;
}
