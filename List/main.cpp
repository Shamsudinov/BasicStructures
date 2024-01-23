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

    l.push_back(3);
    l.push_back(2);
    l.push_back(3);
    l.push_back(3);
    l.push_back(2);
    l.push_back(2);
    l.print();
    l.remove_all(2);
//    for(int i=5; i<10; i++){
//        l.push_front(i);
//    }
//    l.push_front(10);
    std::cout << "list after remove 3 " << std::endl;
    l.print();
    return 0;
}
