//
// Created by Tori on 04/29/2025.
//

#include "Shapes.hpp"

size_t Shapes::getSize()
{
    return size;
}

PlaneShape *Shapes::operator[](size_t s)
{
    if(s > size)
        throw std::out_of_range("Out of range");

    return data[s];
}

void Shapes::popBack()
{
    size--;
    delete data[size];
}


