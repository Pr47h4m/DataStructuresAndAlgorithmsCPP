#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        Node::data = data;
        Node::next = NULL;
    }
};

class List
{
    Node *head = NULL;

public:
    void clear();             // working
    int length();             // working
    void add(int);            // working
    void display();           // working
    void removeAt(int);       // working
    int elementAt(int);       // working
    int indexWhere(int);      // working
    void insertAt(int, int);  // working
    void replaceAt(int, int); // working
};

void List::add(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void List::insertAt(int data, int index)
{
    Node *newNode = new Node(data);
    int i = 0;
    Node *temp = head;
    if (index < 0)
        throw "Invalid Index";
    if (head == NULL && index != 0)
        throw "Out of Index";
    if (index == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
        return;
    }
    while (i != index - 1)
    {
        if (temp->next == NULL && i < index)
            throw "Out of Index";
        temp = temp->next;
        ++i;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void List::replaceAt(int data, int index)
{
    Node *temp = head;
    int i = 0;
    if (index < 0)
        throw "Invalid Index";
    if (head == NULL && index != 0)
        throw "Out of Index";
    if (index == 0)
    {
        head->data = data;
        return;
    }
    while (i != index)
    {
        temp = temp->next;
        ++i;
    }
    temp->data = data;
}

void List::removeAt(int index)
{
    Node *temp = head;
    int i = 0;
    if (head == NULL)
        return;
    if (index == 0)
    {
        Node *toDelete = head;
        head = head->next;
        delete toDelete;
    }
    else
    {
        while (i != index - 1)
        {
            temp = temp->next;
            ++i;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

int List::length()
{
    Node *temp = head;
    int length = 1;
    if (head == NULL)
        return 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        ++length;
    }
    return length;
}

int List::elementAt(int index)
{
    Node *temp = head;
    int i = 0;
    if (index < 0)
        throw "Invalid Index";
    if (head == NULL && index > 0)
        throw "Out of Index";
    while (i != index)
    {
        if (temp->next == NULL && i < index)
            throw "Out of Index";
        temp = temp->next;
        ++i;
    }
    return temp->data;
}

int List::indexWhere(int key)
{
    Node *temp = head;
    int i = 0;
    if (head == NULL)
        return -1;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return i;
        }
        temp = temp->next;
        ++i;
    }
    if (temp->data == key)
    {
        return i + 1;
    }
    return -1;
}

void List::clear()
{
    Node *toDelete;
    while (head != NULL)
    {
        toDelete = head;
        head = head->next;
        delete toDelete;
    }
}

void List::display()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    while (temp->next != NULL)
    {
        std::cout << temp->data << "=>";
        temp = temp->next;
    }
    std::cout << temp->data << "=>"
              << "NULL" << std::endl;
}

// utility function
void displayMenu()
{
    cout << "MENU" << endl
         << "1. Add element to the list" << endl
         << "2. Insert element in the list" << endl
         << "3. Replace element in the list" << endl
         << "4. Remove element in the list" << endl
         << "5. Select element at index of the list" << endl
         << "6. Find element in the list" << endl
         << "7. Length of the list" << endl
         << "8. Display the list" << endl
         << "9. Clear list" << endl
         << "10. Exit" << endl;
}

// Driver Code
int main()
{
    List list;
    int choice;
    int data, index;
    while (choice != 10)
    {
        displayMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number: ";
            cin >> data;
            list.add(data);
            break;
        case 2:
            cout << "Enter number: ";
            cin >> data;
            cout << "Enter index (0-" << list.length() - 1 << "): ";
            cin >> index;
            list.insertAt(data, index);
            break;
        case 3:
            cout << "Enter number: ";
            cin >> data;
            cout << "Enter index (0-" << list.length() - 1 << "): ";
            cin >> index;
            list.replaceAt(data, index);
            break;
        case 4:
            cout << "Enter index (0-" << list.length() - 1 << "): ";
            cin >> index;
            list.removeAt(index);
            break;
        case 5:
            cout << "Enter index (0-" << list.length() - 1 << "): ";
            cin >> index;
            cout << list.elementAt(index) << endl;
            break;
        case 6:
            cout << "Enter number: ";
            cin >> data;
            cout << list.indexWhere(data) << endl;
            break;
        case 7:
            cout << list.length() << endl;
            break;
        case 8:
            list.display();
            break;
        case 9:
            list.clear();
            break;
        case 10:
            list.clear();
            cout << "Bye" << endl;
            break;
        default:
            cout << "Please select valid choice";
        }
    }
    return 0;
}