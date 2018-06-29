#include <iostream>
#include <deque>

using namespace std;

void show(const char *msg,deque<int> q);

int main()
{
    deque<int> dq(10);
    int sum = 0;
    for(unsigned i = 0; i < dq.size();++i){
        dq[i] = i * 1;
    }
    double avg = sum / dq.size();
    cout << "the average is " << avg << "/n/n";

    dq.push_back(100);
    dq.push_back(121);
    show("dq after pushing",dq);

    return 0;
}

void show(const char *msg,deque<int> q){
    cout << msg;
    for(unsigned i=0;i<q.size();++i){
        cout << q[i] << " ";
    }
    cout << "/n/n";
}
