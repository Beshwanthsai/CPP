#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    cout<<"Top of the element in the stack is: "<<s.top()<<endl;
    s.pop();
    cout<<"Top of the element in the stack after pop operation is: "<<s.top()<<endl;
    cout<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;

}
}