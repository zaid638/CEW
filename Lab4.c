#include<stdio.h>
#include<stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};
// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}
// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
// Function to insert a node after a specific node
struct Node* insertAfter(struct Node* head, int data, int searchValue) {
     struct Node* newNode = createNode(data);
     struct Node* current = head;
     while (current != NULL && current->data != searchValue) {
        current = current->next;
     }
     if (current == NULL) {
        printf("Node with search value not found\n");
        free(newNode); // Free the allocated node
        return head;
     }
     newNode->next = current->next;
     current->next = newNode;
     return head;
}

// Function to delete a node with a specific value
struct Node* deleteNode(struct Node* head, int data) {
     struct Node* current = head;
     struct Node* prev = NULL;
     while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
     }
     if (current == NULL) {
        printf("Node with value not found\n");
        return head;
     }
     if (prev == NULL) {
        head = current->next;
     } else {
        prev->next = current->next;
     }
     free(current);
     return head;
}
// Function to search for a node with a specific value
struct Node* searchNode(struct Node* head, int data) {
     struct Node* current = head;
     while (current != NULL) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
     }
     return NULL; // Node not found
}
// Function to print the linked list
void printList(struct Node* head) {
     struct Node* current = head;
     while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
     }
     printf("NULL\n");
}
// Function to free the memory used by the linked list
void freeList(struct Node* head) {
     struct Node* current = head;
     while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
     }
}
// int main() {
//     struct Node* head = NULL;
//     // Insert nodes at the beginning
//     head = insertAtBeginning(head, 3);
//     head = insertAtBeginning(head, 2);
//     head = insertAtBeginning(head, 1);
//     // Insert nodes at the end
//     head = insertAtEnd(head, 4);
//     head = insertAtEnd(head, 5);
//     // Insert a node after a specific value
//     head = insertAfter(head, 6, 3);
//     // Print the linked list
//     printf("Linked List: ");
//     printList(head);
//     // Search for a node
//     int searchValue = 4;
//     struct Node* foundNode = searchNode(head, searchValue);
//     if (foundNode != NULL) {
//         printf("Node with value %d found\n", searchValue);
//     } else {
//         printf("Node with value %d not found\n", searchValue);
//     }
//     // Delete a node
//     int deleteValue = 2;
//     head = deleteNode(head, deleteValue);
//     // Print the linked list after deletion
//     printf("Linked List after deletion: ");
//     printList(head);
//     // Free the memory
//     freeList(head);
//     return 0;
// }




//### Question 01 ###

// struct Contact {
//     char name[50];
//     char email[50];
//     char phoneNumber[20];
// };

// void addContact(struct Contact **addressBook, int *size) {
//     (*size)++;
    
//     *addressBook = realloc(*addressBook, (*size) * sizeof(struct Contact));

//     if (*addressBook == NULL) {
//         printf("Memory allocation failed. Exiting...\n");
//         return;
//     }

//     printf("Enter Name: ");
//     scanf("%s", (*addressBook)[*size - 1].name);

//     printf("Enter Email: ");
//     scanf("%s", (*addressBook)[*size - 1].email);

//     printf("Enter Phone Number: ");
//     scanf("%s", (*addressBook)[*size - 1].phoneNumber);

//     printf("Contact added successfully!\n");
// }

// void deleteContact(struct Contact **addressBook, int *size) {
//     if (*size == 0) {
//         printf("Address book is empty. Cannot delete a contact.\n");
//         return;
//     }

//     printf("Contacts in the address book:\n");
//     for (int i = 0; i < *size; i++) {
//         printf("%d. %s\n", i + 1, (*addressBook)[i].name);
//     }

//     int choice;
//     printf("Enter the number of the contact to delete: ");
//     scanf("%d", &choice);

//     if (choice < 1 || choice > *size) {
//         printf("Invalid choice. Exiting...\n");
//         return;
//     }

//     for (int i = choice - 1; i < *size - 1; i++) {
//         (*addressBook)[i] = (*addressBook)[i + 1];
//     }

//     (*size)--;

//     *addressBook = realloc(*addressBook, (*size) * sizeof(struct Contact));

//     printf("Contact deleted successfully!\n");
// }

// void displayContacts(const struct Contact *addressBook, int size) {
//     if (size == 0) {
//         printf("Address book is empty.\n");
//         return;
//     }

//     printf("Contacts in the address book:\n");
//     for (int i = 0; i < size; i++) {
//         printf("Name: %s\n", addressBook[i].name);
//         printf("Email: %s\n", addressBook[i].email);
//         printf("Phone Number: %s\n", addressBook[i].phoneNumber);
//         printf("------------\n");
//     }
// }


// int main() {
//     struct Contact *addressBook = NULL;
//     int size = 0;
//     int choice;

//     do {
//         printf("\nAddress Book Menu:\n");
//         printf("1. Add Contact\n");
//         printf("2. Delete Contact\n");
//         printf("3. Display Contacts\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 addContact(&addressBook, &size);
//                 break;
//             case 2:
//                 deleteContact(&addressBook, &size);
//                 break;
//             case 3:
//                 displayContacts(addressBook, size);
//                 break;
//             case 4:
//                 break;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }

//     } while (choice != 4);

//     free(addressBook);

//     return 0;
// }


//### Question 02 ###

// struct Node* mergeList(struct Node* head1, struct Node* head2) {
//     struct Node* current = head1;
//     while (current->next != NULL) {
//         current = current->next;
//     }
//     current->next = head2;
//     return head1;
// }

// int main() {
//     struct Node* head1 = NULL;
//     struct Node* head2 = NULL;


//     head1 = insertAtEnd(head1, 1);
//     head1 = insertAtEnd(head1, 2);
//     head1 = insertAtEnd(head1, 3);

//     head2 = insertAtEnd(head2, 4);
//     head2 = insertAtEnd(head2, 5);
//     head2 = insertAtEnd(head2, 6);

//     printf("Linked List1: ");
//     printList(head1);

//     printf("Linked List2: ");
//     printList(head2);

//     mergeList(head1,head2);

//     printf("Linked List after merged: ");
//     printList(head1);

//     freeList(head);

//     return 0;
// }


//### Question 03 ###

// struct Node* convertToArray(struct Node* head,int size) {
//     struct Node* current = head;
//     int* arr;
//     int i = 0;
//     arr = (int*)malloc(size*sizeof(int));

//     while (current != NULL) {
//         arr[i] = current->data;
//         current = current->next;
//         i++;
//     }
//     for (int j = 0; j < size; j++)
//     {
//         printf("%d,", arr[j]);
//     }
    
//     return arr;
// }


// int main() {
//     struct Node* head = NULL;

//     head = insertAtEnd(head, 1);
//     head = insertAtEnd(head, 2);
//     head = insertAtEnd(head, 3);
//     head = insertAtEnd(head, 4);
//     head = insertAtEnd(head, 5);
//     head = insertAtEnd(head, 6);

//     printf("Linked List1: ");
//     printList(head);

//     printf("Array after converted: ");
//     convertToArray(head,6);

//     freeList(head);

//     return 0;
// }

//### Question 04 ###

// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a new node at the end of the linked list
// void insertNode(struct Node** head, int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed. Exiting...\n");
//         exit(EXIT_FAILURE);
//     }

//     newNode->data = data;
//     newNode->next = NULL;

//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// // Function to remove elements with odd indices from the linked list
// void removeOddIndexed(struct Node** head) {
//     if (*head == NULL) {
//         printf("List is empty. Cannot remove odd-indexed elements.\n");
//         return;
//     }

//     struct Node* current = *head;
//     struct Node* nextNode;

//     // Remove the first element (index 1) if it exists
//     if (current != NULL) {
//         *head = current->next;
//         //free(current);
//         current = *head;
//     }

//     // Traverse the list and remove elements with odd indices
//     while (current != NULL && current->next != NULL) {
//         nextNode = current->next;
//         current->next = nextNode->next;
//         free(nextNode);
//         current = current->next;
//     }
// }

// // Function to display the linked list
// void displayList(struct Node* head) {
//     struct Node* current = head;
//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");
// }

// // Function to free the memory allocated for the linked list
// void freeList(struct Node* head) {
//     struct Node* current = head;
//     struct Node* nextNode;

//     while (current != NULL) {
//         nextNode = current->next;
//         free(current);
//         current = nextNode;
//     }
// }

// int main() {
//     struct Node* head = NULL;

//     // Insert elements into the linked list
//     insertNode(&head, 1);
//     insertNode(&head, 2);
//     insertNode(&head, 3);
//     insertNode(&head, 4);
//     insertNode(&head, 5);
//     insertNode(&head, 6);    

//     printf("Original list: ");
//     displayList(head);

//     // Remove elements with odd indices
//     removeOddIndexed(&head);

//     printf("List after removing elements with odd indices: ");
//     displayList(head);

//     // Free allocated memory before exiting
//     freeList(head);

//     return 0;
// }