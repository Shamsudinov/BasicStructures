#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

typedef unsigned int vtype;

class Vector
{
    vtype memory_capacity;
    int *data = nullptr;
    vtype curr_pos;
    vtype curr_size;
public:
    Vector();
    Vector(vtype size);
    ~Vector();

    void init(int val);

    void push_back(int val);
    void pop_back();

    bool empty();
    vtype size() const;
    vtype capacity() const;

    void print() const;
};

#endif // VECTOR_H
