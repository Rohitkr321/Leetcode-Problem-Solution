/*
    Linkedlist:-
    Linear data Structure
    Dynamic Data Structure
    Collection of Nodes 
    Each nodes have Data and next node of address
    contigues not required but array in contigues
    run time grow and shrink in Linkedlist



*************Node Creation ************
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node (int data) {
        this -> data = data;
        this  -> next = NULL;
    }
};
int main() {
    int length;
    cin >> length;
    vector<int> data;
    for (int i = 0; i < length; i++) {
        int value;
        cin >> value;
        data.push_back(value);
    }
    for (int i = 0; i < length; i++) {
        Node* node = new Node(data[i]);
          cout << "Node Data: " << node->data << endl;
          cout << "Next Node: " << node->next << endl; 
    };
}
****************End**********************************


********************* Insert new Data At Head Of LinkedList*************************
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node (int data) {
        this -> data = data;
        this  -> next = NULL;
    }
};
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next =head;
    head = temp;
}
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " ";
        cout << temp << " " << endl;
        temp = temp -> next;
    };
    cout << endl;
};
int main() {
          Node* node = new Node(10);
          Node* head = node;
          insertAtHead(head, 11);
          insertAtHead(head, 12);
          insertAtHead(head, 13);
          insertAtHead(head, 14);
          print(head);
}

******************AnyOne main function Can Pick ***************
int main() {
    int length;
    cin >> length;
    vector<int> data;
    for (int i = 0; i < length; i++) {
        int value;
        cin >> value;
        data.push_back(value);
    }
    Node* node;
    for (int i = 0; i < length; i++) {
        node = new Node(data[i]);
        
    };
          Node* head = node;
          insertAtHead(head, 11);
          insertAtHead(head, 12);
          insertAtHead(head, 13);
          print(head);
}
************************End*************************
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int linkedListData;
    Node* linkedListNextNodeAddress;
    Node (int linkedListData) {
        this -> linkedListData = linkedListData;
        this -> linkedListNextNodeAddress = NULL;
    }
};
void insertAtHead(Node* & head, int data) {
    Node* temp = new Node(data);
    temp  -> linkedListNextNodeAddress = head;
    head = temp;
}
void insertAtTail(Node* & tail, int data) {
    Node* temp = new Node(data);
    tail  -> linkedListNextNodeAddress = temp;
    tail = temp;
}
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> linkedListData << "-> ";
        temp = temp -> linkedListNextNodeAddress;
    };
    cout << endl;
};
int main() {
    int length;
    cin>> length;
    vector<int>data(length);
    for (int i=0; i< length; i++) {
        cin>>data[i];
    }
    Node* node = new Node(20);
    Node* head = node;
    Node* tail = node;
    cout <<"Start Inserting At Head " << endl;
    for (int i=0; i< length; i ++) {
        insertAtHead(head, data[i]);
        print(head);
        // Node* node1 = new Node(data[i]);
        // cout << node1->linkedListData << "-> ";
        // cout << node1 ->linkedListNextNodeAddress << " "<< endl;
    }
    cout <<"Start Inserting At Tail " << endl;
    for (int i=0; i< length; i ++) {
        insertAtTail(tail, data[i]);
        print(head);
    }
}

*/