#include <iostream>
#include <vector>

using namespace std;

void show(const char *msg, vector<int> vect);

int main()
{
    vector<int> v(10);
    for(unsigned i=0;i < v.size();++i){
        v[i] = i * i;
    }
    show("Contents of v:",v);
    int sum = 0;
    for(unsigned i=0;i < v.size();++i){
        v[i] = i * i;
    }
    double avg = sum / v.size();
    cout << "the average element " << avg << "/n/n";

    v.push_back(100);
    v.push_back(121);
    show("after pushing: ",v);
    cout << endl;

    return 0;
}

void show(const char *msg,vector<int> vect){
    cout << msg;
    for(unsigned i=0;i< vect.size();++i){
        cout << vect[i] << " ";
    }
}
