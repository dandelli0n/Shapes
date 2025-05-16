//
// Created by Tori on 04/29/2025.
//

#ifndef PROGHF_SHAPES_HPP
#define PROGHF_SHAPES_HPP
#include "PlaneShape.h"

template<int MAX = 10>
class Shapes
{
    PlaneShape * data[MAX];
    size_t size;
public:
    Shapes();
    void addToCollection(const PlaneShape* p);
    //int getSize();
    //void print();
    //void popBack();
    //void deleteCollection();
};

#endif //PROGHF_SHAPES_HPP
