#include <bits/stdc++.h>
using namespace std;
const int maxSize = 1000;
int n;
int queue_[maxSize];
int front = -1, rear = -1;
void enqueue()
{
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        cin >> queue_[rear];
    }
    else if (rear < n - 1)
    {
        rear++;
        cin >> queue_[rear];
    }
    else
    {
        cout << "Queue Overflow" << endl;
    }
}
void dequeue()
{
    if (front <= rear)
    {
        front++;
        cout << "Dequeued Successfully." << endl;
    }
    else
    {
        cout << "Queue underflow" << endl;
    }
}
void getFront()
{
    if (front >= 0 && front <= rear)
        cout << queue_[front] << endl;
}
void getRear()
{
    if (front >= 0 && front <= rear)
        cout << queue_[rear] << endl;
}
void isFull()
{
    if (rear == n - 1)
        cout << "Is full: Yes" << endl;
    else
        cout << "Is full: No" << endl;
}
void isEmpty()
{
    if (front > rear || front == -1 && rear == -1)
        cout << "Is Empty: Yes" << endl;
    else
        cout << "Is Empty: No" << endl;
}

void size_()
{
    if (front > rear || front == -1 && rear == -1)
        cout << "Empty" << endl;
    else
        cout << (rear - front) + 1 << endl;
}

void display()
{
    if (front > rear || front == -1 && rear == -1)
        cout << "Empty" << endl;
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue_[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Size of your queue : ";
    cin >> n;
    int choise = INT_MAX;
    while (choise)
    {
        switch (choise)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            getFront();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        case 6:
            getRear();
            break;
        default:
            break;
        }

        cout << "Current Queue : ";
        display();
        cout << "Select your option : " << endl;
        cout << "Press 1 : enqueue in the queue " << endl;
        cout << "Press 2 : dequeue from the queue " << endl;
        cout << "Press 3 : getFront of  the queue " << endl;
        cout << "Press 4 : Is Empty" << endl;
        cout << "Press 5 : Is Full" << endl;
        cout << "Press 6 : getRear of  the queue " << endl;
        cout << "Press 0 : Exit " << endl;
        cin >> choise;
    }

    return 0;
}
