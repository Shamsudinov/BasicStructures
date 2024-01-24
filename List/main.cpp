#include <iostream>
#include <List.h>
using namespace std;

#include <vector>

int main()
{

        cout << "Hello World!" << endl;
        List<int> l;
        for(int i=0; i<5; i++){
            l.push_back(i);
        }
        l.print();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();
//        l.pop_back();

        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.pop_front();
        l.print();

//        for(int i=0; i<5; i++){
//            l.push_back(i);
//        }
//        l.print();



        return 0;
}
