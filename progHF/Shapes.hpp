//
// Created by Tori on 04/29/2025.
//

#ifndef PROGHF_SHAPES_HPP
#define PROGHF_SHAPES_HPP
#include "PlaneShape.h"

class Shapes
{
    size_t MAX = 5;
    PlaneShape ** data;
    size_t size;
public:
    Shapes() : data(new PlaneShape * [MAX]{}), size(0) {}
    void addToCollection(PlaneShape const& p)
    {
        if(size >= MAX)
        {
            //make new collection that fits current +5 elements
            MAX += 5;
            PlaneShape** newData = new PlaneShape*[MAX]{};
            for (size_t i = 0; i < size; ++i)
                newData[i] = data[i];
            delete[] data;
            data = newData;
        }
        data[size] = p.clone();
        size+=1;
    }
    size_t getSize();

    template<typename Iter>
    void printShapes(Iter first, Iter last)const
    {
        while(first != last)
        {
            std::cout << **first;
            first++;
        }
    }
    PlaneShape** begin() {return data;}

    PlaneShape** end() {return data + size; } //pointer after the last piece of stored data

    PlaneShape* operator[](size_t s);

    void popBack();

    template<typename Iter>
    void deleteCollection(Iter first, Iter last)
    {
        while(first != last)
        {
            popBack();
            first++;
        }
    }

    ~Shapes() {delete[] data; }
};

#endif //PROGHF_SHAPES_HPP
