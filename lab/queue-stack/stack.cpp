#include <bits/stdc++.h>
using namespace std;

int top = -1;
int n;
int stack_[1000];

void push(){
    cout<<"Please give your value";
    int x; cin>>x;
    if(top==n-1){
        cout<<"stack overflow"<<endl;
    } else{
        top++;
        stack_[top]=x;
    };
    cout<<endl;
    cout<<endl;
    cout<<endl;
}


void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    } else{
        top--;
    };
    cout<<"Last item is removed"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

void peak(){
    if(top==-1){
            cout<<"Your stack is empty"<<endl;
        }
        cout<<stack_[top];
        cout<<endl;
    cout<<endl;
    cout<<endl;
}


void isFull(){
    if(top==n-1) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
void isEmpty(){
    if(top==-1) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
void display(){
    for (int i = top; i >=0; i--)
    {
        cout<<stack_[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

int main() {
    cout<<"Please insert the size of your stack_: ";
    cin>>n;
    int op=99;
    while (op)
    {
        cout<<"Please Select your option:"<<endl;
        cout<<"Option 1: Push a value"<<endl;
        cout<<"Option 2: Pop an element"<<endl;
        cout<<"Option 3: Peak value"<<endl;
        cout<<"Option 4: Is full"<<endl;
        cout<<"Option 5: Is Empty"<<endl;
        cout<<"Option 6: Display"<<endl;
        cout<<"Exit: Press 0"<<endl;
        cin>>op;
        if(op==1){
            push();
        } else if(op==2){
            pop();
        } else if(op==3){
            peak();
        } else if(op==4){
            isFull();
        }
        else if(op==5){
            isEmpty();
        }
         else if(op==6){
            display();
        } 
        
    }
    
    return 0;
}