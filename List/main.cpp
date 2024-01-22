#include <iostream>
#include <List.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    List<int> l;
    for(int i=0; i<5; i++){
        l.push_back(i);
    }
    l.print();
    for(int i=5; i<10; i++){
        l.push_front(i);
    }
//    l.push_front(10);
    l.print();
    return 0;
}
