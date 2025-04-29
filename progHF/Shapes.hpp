//
// Created by Tori on 04/29/2025.
//

#ifndef PROGHF_SHAPES_HPP
#define PROGHF_SHAPES_HPP
#include "PlaneShape.h"

template<int arraySize = 10>
class Shapes
{
    PlaneShape * data[arraySize];
    int size;
public:
    Shapes();
    void addToCollection(PlaneShape& p);
    int getSize();
    void print();
    void deleteCollection();
};




#endif //PROGHF_SHAPES_HPP
