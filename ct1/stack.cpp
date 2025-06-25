#include <bits/stdc++.h>
using namespace std;
int stack_[1000];
int n;
int top = 0;
void push()
{
    if (top == n)
        cout << "Stack Overflow" << endl;
    else
    {
        cout << "Insert the value : ";
        cin >> stack_[top];
        top++;
    }
}
void pop()
{
    if (top == 0)
        cout << "Stack Underflow" << endl;
    else
    {
        top--;
        cout << "Pop Successfull" << endl;
    }
}

void isEmpty()
{
    if (top == 0)
        cout << "Yes. It is Empty now." << endl;
    else
        cout << "No. The stack is not Empty now." << endl;
}
void isFull()
{
    if (top == n)
        cout << "Yes. It is Full now." << endl;
    else
        cout << "No. The stack is not Full now." << endl;
}
void peak()
{
    if (top == 0)
        cout << "Stack is empty." << endl;
    else
        cout << "Top is : " << stack_[top - 1] << endl;
}

void display()
{
    if (top == 0)
        cout << "Empty" << endl;
    else
    {

        for (int i = top - 1; i >= 0; i--)
        {
            cout << stack_[i] << " ";
        }
    }
    cout << endl;
}

int main()
{

    cout << "Size of your stack : ";
    cin >> n;
    int choise = INT_MAX;
    while (choise)
    {
        switch (choise)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        default:
            break;
        }

        cout << "Current Stuck : ";
        display();
        cout << "Select your option : " << endl;
        cout << "Press 1 : Push in the stack " << endl;
        cout << "Press 2 : Pop from the stack " << endl;
        cout << "Press 3 : Top of  the stack " << endl;
        cout << "Press 4 : Is Empty" << endl;
        cout << "Press 5 : Is Full" << endl;
        cout << "Press 0 : Exit " << endl;
        cin >> choise;
    }

    return 0;
}
