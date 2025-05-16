//
// Created by Tori on 04/29/2025.
//

#include "Shapes.hpp"

template<int MAX>
Shapes<MAX>::Shapes() : size(0)
{
    data = new PlaneShape*[MAX];

}

template<int MAX>
void Shapes<MAX>::addToCollection(const PlaneShape *p)
{
    if(size >= MAX)
    {
        //make new collection that fits current +10 elements
    }
    *data[size] = *p;
    size+=1;
}
