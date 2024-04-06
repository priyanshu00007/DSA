#include<iostream>
using namespace std;
class queue1
{
    private:
    const int max_size = 100;
    int front1;
    int rear;
    int n[100];
    public:
    queue1()
    {
        front1 = -1;
        rear = -1;
    }
   void insert1(int val) {
        if (rear == max_size - 1) {
            cout << "The queue is overflow" << endl;
            return;
        }
        else {
            if (front1 == -1)
                front1 = 0; // Set front to 0 if queue was empty
            rear++;
            n[rear] = val;
            cout<<val<<endl;
        }
    }
      void delete1() {
        if (front1 == -1 || front1 > rear) {
            cout << "The queue is empty" << endl;
            return;
        }
        cout << "Deleted element: " << n[front1] << endl;
        // Shift elements to the front
        for (int i = front1; i < rear; i++) {
            n[i] = n[i + 1];
        }
        rear--;
    }
};
int main()
{
    queue1 q;
    q.insert1(1);
    q.insert1(2);
    q.insert1(3);
    q.delete1();
    return 0;
}
