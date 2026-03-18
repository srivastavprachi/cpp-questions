#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        Node* next;
        int data;
        
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
        
};

class Stack{
    Node* top;
    public:
        Stack(){
            top = NULL;
        }
        
        void push(int element){
            Node* temp = new Node(element);
            
            if(temp == NULL){
                cout<<"Stack Overflow"<<endl;
            }
            
            temp -> next = top;
            top = temp;
        }
        
        void pop(){
            if(top == NULL){
                cout<<"Stack Underflow"<<endl;
            }
            
            Node* temp = top;
            top = top -> next;
            delete(temp);
        }
        
        int peek(){
            if(top == NULL){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            
            return top -> data;
        }
        
        bool isEmpty(){
            return (top == NULL);
        }
        
        void display(){
            Node* temp = top;
            
            while(temp != NULL){
                cout<<temp -> data<< " ";
                temp = temp -> next;
            }
            cout<<endl;
        }
};

int main(){
    
    Stack st;
    st.push(1);
    st.push(2);
    st.display();
    
    st.push(3);
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    
    cout<<st.isEmpty()<<endl;
    return 0;
    
    
    
    
    
}

