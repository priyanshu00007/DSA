#include<iostream>
using namespace std;
class stack
{
    private:
    int top ;
    int n = 100 ;
    int a[100];
    int max_size;
    public:
        stack()
        {
            top = -1;
            max_size = n;
        }
    void insert(int val)
    {
        if(top >=n-1)
        {
            cout<<"overflow: "<<endl;
        }
        else{
        top++;
        a[top] = val;
        }
    }
    void pop()
    {
        if(top == 0)
        {
            cout<<"underflow"<<endl;
        }
        else{
        top--;
        }
    }
void display()
{
    if(top<0)
    {
        cout<<"the stack is empty";
    }
    for(int i = 0;i<= top;i++)
    {
        cout<<a[i]<<endl;
    }
}
void peep()
{
    if(top == 0)
    {
        cout<<"underflow";
    }
    else
    {
        cout<<"the top values are";
        cout<<a[top];

    }
}
};
int main()
{
    stack s;
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    s.insert(4);

    s.insert(5);

    s.insert(6);

    s.insert(7);

    s.insert(8);
    s.pop();

    s.pop();

    s.peep();
    s.display();
    return 0;
}
