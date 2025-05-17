#include <iostream>
#include <fstream>
#include "Shapes.hpp"
#include "Circle.h"
#include "Rectangle.h"
#include "gtest_lite.h"

PlaneShape* makeShape(char ch)
{
    PlaneShape* pl;
    switch (ch)
    {
        case 'T' : pl = new Triangle(); return pl;
        case 'C' : pl = new Circle(); return pl;
        case 'R' : pl = new Rectangle(); return pl;
        default  : throw std::runtime_error("Bad identifier on row ");
    }

}


int main() {

    std::ifstream file("shapes1.txt");
    if(!file.is_open())
    {
        std::cout << "shapes1.txt not found" << std::endl;
    }

    std::ifstream testFile("testPoints.txt");
    if(!testFile.is_open())
        std::cout << "testPoints.txt not found" << std::endl;


    char typeId;
    PlaneShape* tempShape;
    std::string tempIn;
    Shapes sh;
    Point referencePoint;
    int i = 1;


    while(file >> typeId)
    {
        try
        {
            tempShape = makeShape(typeId);
            file >> *tempShape;
            if(!tempShape->isShapeOnCircle(1))
            {
                sh.addToCollection(*tempShape);

            }
            i++;
        }
        catch(std::exception const & except )
        {
            std::cout << except.what() << i << "\n" << "The file reading shut down without storing any shapes. Fix the wrong row(s) before continuing." << std::endl;
            file >> *tempShape;
            sh.deleteCollection(sh.begin(), sh.end());
        }
        delete tempShape;


    }


    if(sh.begin() != sh.end())
    {
        std::cout << "The stored shapes:" <<std::endl;
        sh.printShapes<PlaneShape**>(sh.begin(), sh.end());
    }
    else
    {
        std::cout << "No shapes were stored." << std::endl;
    }
    std::cout << std::endl;

    bool found = false;

    while(std::cin>>referencePoint)
    {
        found = false;
        std::cout << referencePoint << ": " << std::endl;
        for(PlaneShape const* p : sh)
        {
            if(p->isPointOnShape(referencePoint))
            {
                std::cout << "\t" << *p;
                found = true;
            }
        }
        if(!found)
            std::cout << "\tNo shapes contain this point." << std::endl;

    }

    TEST(Rectangle, Points)
    {
        Point orig(0, 0);
        Point p5(-2, 0);
        Rectangle rectangle(orig, p5);
        EXPECT_EQ(2., rectangle.getp3().getX());
    }
    END
    TEST(Shapes, ShapeSize)
    {
       EXPECT_EQ((size_t)9, sh.getSize());
    }
    END

    TEST(Shapes, IndexingOperator)
    {
        EXPECT_NO_THROW(sh[1]);
    }
    END
    TEST(Shapes, IndexingOperatorOutOfRange)
        {
            EXPECT_ANY_THROW(sh[12]);
        }
    END
    TEST(Circle, Operator=)
    {
        Point p1(1, 1);
        Point p2(3, 4);
        Circle c1(p1, p2);
        Circle c2 = c1;
        EXPECT_EQ(c2.getCentre(), c1.getCentre());
        EXPECT_EQ(c2.getp1(), c1.getp1());
    }
    END
    TEST(Circle, Area)
    {
        Point p1(1, 1);
        Point p2(1, 4);
        Circle c1(p1, p2);
        Circle c2;
        c2 = c1;
        double area = c1.area();
        double area2 = c2.area();
        EXPECT_DOUBLE_EQ(area, area2);
    }
    END
    TEST(Triangle, Operator=)
    {
        Point p1(2, 3);
        Point p2(4, 5);
        Triangle t1(p1, p2);
        Triangle t2(p2, p1);
        t2 = t1;
        EXPECT_EQ(t2.getCentre(), t1.getCentre());
        EXPECT_EQ(t2.getp1(), t1.getp1());
        EXPECT_EQ(t2.getp2(), t1.getp2());
        EXPECT_EQ(t2.getp3(), t1.getp3());
    }
    END
    TEST(Rectangle, Operator=)
        {
            Point p1(2, 3);
            Point p2(4, 5);
            Rectangle t1(p1, p2);
            Rectangle t2(p2, p1);
            t2 = t1;
            EXPECT_EQ(t2.getCentre(), t1.getCentre());
            EXPECT_EQ(t2.getp1(), t1.getp1());
            EXPECT_EQ(t2.getp2(), t1.getp2());
            EXPECT_EQ(t2.getp3(), t1.getp3());
            EXPECT_EQ(t2.getp4(), t1.getp4());
        }
    END


    sh.deleteCollection(sh.begin(), sh.end());

    file.close();
    testFile.close();

    return 0;
}
