#include <iostream>

using namespace std;

template <class t>
class linkQueue {
private:
    struct node {
        t item;
        node* next;
    };
    //  المؤشر الذي يشير لأول عنصر
    node* front;
    // المؤشر الذي يشير لآخر عنصر
    node* rear;
    // لمعرفة كم عنصر تم اضافته إلى الطابور
    int length;
public:
    linkQueue() : front(NULL), rear(NULL), length(0) {}

    bool isEmpty() {
        return (rear == NULL);
    }

    

    // الاضافة في أول الطابور
    void enQueue_first(t element) {
        node* newElement = new node;
        newElement->item = element;

        if (length == 0) {
            front = rear = newElement;
            newElement->next = NULL;
        }
        else {

            newElement->next = front;
            front = newElement;
        }
        length++;
    }


    // الاضافة في آخر الطابور
    void enQueue_last(t element) {
        node* newElement = new node;
        newElement->item = element;

        if (length == 0) {
            front = rear = newElement;
            newElement->next = NULL;
        }
        else {

            rear->next = newElement;
            newElement->next = NULL;
            rear = newElement;
        }

        length++;
    }


    // دالة الإضافة حسب قيمة النود
    void enQueue(t afterN, t element) {

            node* newElement = new node;
            newElement->item = element;

            // البحث عن النود
                node* current = front;
                while (current != NULL) {
                    if (current->item == afterN)
                        break;
                    current = current->next;
                }
                // اذا لم يجد العنصر الذي يبحث عنه
                if (current == NULL)
                    cout << "not found..!" << endl;
                // إذا وجده
                else {
                    newElement->next = current->next;
                    current->next = newElement;
                    length++;
                }
            


        }
    


    // الحدف في أول الطابور

    void deQueue_first() {

        // في حال الطابور فارغ
        if (isEmpty())
            cout << "Empty Queue, Cannot Dequeue...!" << endl;
        else
        {
            node* temp = front;
            // في حال الطابور به عنصر واحد
            if (rear == front)
            {
                rear = front = NULL;
                length = 0;
            }
            // في حال الطابور به أكثر من عنصر
            else {
                front = front->next;
                temp->next = NULL;
                delete temp;
                length--;
            }
        }
    }

    // الحدف في آخر الطابور

    void deQueue_last() {

        // في حال الطابور فارغ
        if (isEmpty())
            cout << "Empty Queue, Cannot Dequeue...!" << endl;
        else
        {
            // في حال الطابور به عنصر واحد
            if (rear == front)
            {
                rear = front = NULL;
                length = 0;
            }
            // في حال الطابور به أكثر من عنصر
            else {
                node* temp = front->next;
                node* prev = front;

                while (temp != rear) {
                    prev = temp;
                    temp = temp->next;
                }

                delete temp;
                prev->next = NULL;
                rear = prev;
                length--;
            }
        }
    }
    

    // دالة الحدف حسب قيمة النود

    void deQueue(t element) {

        // في حال الطابور فارغ
        if (isEmpty())
            cout << "Empty Queue, Cannot Dequeue...!" << endl;
        // في حال يوجد عناصر في الطابور
        else {
            node* temp = front->next;
            node* prev = front;

            // في حال قيمة العنصر في أول نود
            if (front->item == element)
            {
                front->next= temp->next;
                delete temp;
                length--;
                if (length == 0)
                    rear = NULL;
            }
            else {
                while (temp != NULL) {
                    if (prev->item == element)
                        break;
                    prev = temp;
                    temp = temp->next;
                }
                // اذا لم يجد العنصر الذي يبحث عنه
                if (temp == NULL)
                    cout << "not found..!" << endl;
                // إذا وجده يقوم بحذفه
                else {
                    prev->next = temp->next;
                    delete temp;
                    length--;
                    cout << "The node after (" << element << ") has been deleted" << endl;
                }
            }

        }
    }


    // دالة تفريغ الطابور

    void clearQueue() {
        node* current;

        while (front != NULL) {
            current = front;
            front = front->next;
            delete current;
        }

        rear = NULL;
        length = 0;

    }


    t getFront() {
        if (isEmpty())
            cout << "Empty Queue...!" << endl;
        else
            return front->item;
    }

    t getRear(t) {
        if (isEmpty())
            cout << "Empty Queue...!" << endl;
        else
            return rear->item;
    }



    int getSize() {
        return length;
    }


    void dispaly() {

        node* current = front;
        cout << "items in Queue: " << endl;
        cout << "[";
        while (current != NULL)
        {

            if (current->next == NULL) {
                cout << current->item;
                current = current->next;
            }
            else {
                cout << current->item << ", ";
                current = current->next;
            }

        }
        cout << "]" << endl;
    }

};

int main()
{
    int searsh, choose, element;
    
    linkQueue <int> s;
    s.enQueue_last(10);
    s.enQueue_last(20);
    s.enQueue_last(30);
    s.enQueue_last(40);
    s.enQueue_last(50);
    s.enQueue_last(60);
    s.enQueue_last(70);
    s.enQueue_last(80);
    s.enQueue_last(90);

    cout << "first show:" << endl;
    s.dispaly();
    cout << "size of queue = " << s.getSize() << endl;
    cout << "\n-------------------\n\n";


    cout << "Enter value want search for" << endl;
    cout << ">> ";
    cin >> searsh;

    cout << "Do you want to add or delete an item ?" << endl;
    cout << "inter (1) for add\ninter (2) for delete\n";
    cout << ">> ";
    cin >> choose;

    switch (choose)
    {
    case 1:
        cout << "Enter the value you want to add after (" << searsh << "):\n";
        cout << ">> ";
        cin >> element;
        s.enQueue(searsh, element);
        cout << "size of queue = " << s.getSize() << endl;
        s.dispaly();
        break;

    case 2:
        s.deQueue(searsh);
        break;
    default:
        cout << "error..!" << endl;
        break;
    }

    cout << "\n-------------------\n\n";
   
    cout << "second show:" << endl;
    s.dispaly();
    cout << "size = " << s.getSize() << endl;
    cout << "\n-------------------\n\n";

    cout << "third show:" << endl;
    cout << "Clear Queue:" << endl;
    s.clearQueue();
    s.dispaly();
    cout << "size = " << s.getSize() << endl;
    cout << "\n-------------------\n\n";
    


}