#include <vector.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.print();

    Vector<float> v2(5);
    v2.push_back(1.3);
    v2.push_back(2.3);
    v2.push_back(3.3);
    v2.push_back(4.3);
    v2.push_back(5.3);
    v2.print();
    return 0;
}
