#pragma once
class List {
public:
    virtual void add(int) = 0;
    virtual int get(int pos) = 0;
    virtual int remove(int num) = 0;
    virtual void print() = 0;

    // TODO add virtual method removeAt here
    virtual int removeAt(int num) = 0;
};