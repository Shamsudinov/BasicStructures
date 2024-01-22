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
    return 0;
}
