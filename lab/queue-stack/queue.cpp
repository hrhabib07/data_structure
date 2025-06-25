
#include <bits/stdc++.h>
using namespace std;
int queue_[1000];
int n; 
int front = -1;
int rear = -1;

void enqueue(){
    cout<<"Enter  the value you want to enque: ";
    int x; 
    cin>>x;
    if(front==-1) {front++;rear++; queue_[front]=x;}
    else if(rear==n-1){cout<<"Queue Overflow"<<endl<<endl;}
    else {
        rear++;
        queue_[rear] = x;
    }
}
void deque_(){
    if(front==-1) cout<<"Queue Underflow"<<endl;
    else if(front==rear) {front=-1; rear=-1;}
    else if(front<rear){
        front++;
    }
}

void display(){
    for (int i = front; i<=rear; i++)
    {
        cout<<queue_[i]<<" ";
    }
    cout<<endl;
}
void peak(){
    if(front!=-1){
        cout<<queue_[front];
    } else{
        cout<<"Not a valid operation"<<endl;
    }

    cout<<endl;
}

int main() {

    cout<<"Insert the size of your queue : ";
    cin>>n;
    int op = 99;
    while (op)
    {
        cout<<"Please Select your option:"<<endl;
        cout<<"Option 1: Enqueue"<<endl;
        cout<<"Option 2: Deque"<<endl;
        cout<<"Option 3: Peak "<<endl;
        cout<<"Option 4: Display "<<endl;
        cout<<"Exit: Press 0"<<endl;
        cin>>op;
        if(op==1){
            enqueue();
        } 
        else if(op==2){
            deque_();
        } 
        else if(op==3){
            peak();
        } 
        else if(op==4){
            display();
        }
    }
    

    return 0;
}