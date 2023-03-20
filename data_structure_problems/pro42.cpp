#include <iostream>
using namespace std;

// Node structure of DLL
struct Node {
   bool data; // binary digit (0 or 1)
   Node* next;
   Node* prev;
};

// Function to insert a node at the end of the DLL
void insertAtEnd(Node** head, bool data) {
   Node* newNode = new Node;
   newNode->data = data;
   newNode->next = NULL;
   if (*head == NULL) {
      newNode->prev = NULL;
      *head = newNode;
      return;
   }
   Node* temp = *head;
   while (temp->next != NULL) {
      temp = temp->next;
   }
   temp->next = newNode;
   newNode->prev = temp;
}

// Function to convert a decimal number to 16-bit binary
void decimalToBinary(int num, Node** head) {
   // Converting a negative number to its 2's complement representation
   if (num < 0) {
      num = pow(2, 16) + num;
   }
   // Converting to binary and storing the binary digits in the DLL
   for (int i = 15; i >= 0; i--) {
      int k = num >> i;
      if (k & 1) {
         insertAtEnd(head, true);
      }
      else {
         insertAtEnd(head, false);
      }
   }
}

int main() {
   int num;
   cout << "Enter a number: ";
   cin >> num;
   Node* head = NULL;
   decimalToBinary(num, &head);
   // Printing the binary number stored in the DLL
   Node* temp = head;
   while (temp != NULL) {
      cout << temp->data;
      temp = temp->next;
   }
   return 0;
}

