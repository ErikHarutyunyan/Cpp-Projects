// Task 15 Geometric images.cpp

/*
    You need to write a program that performs the following lessons: Shape, Triangle, Rectangle, Circle

    . The Shape class is the basic abstract lesson for other classes and objects inherited from it
    these are geometric images
    . Triangle objects are triangles
    . Objects of the Rectangle class-rectangles
    . Objects of the Circle class are regions

    Lesson methods:

    .All lessons inherited from the Shape class must contain the necessary data for creating an object of this class
    constructor (s) or methods
    Image area reading function in which the form class should be defined as pure
    virtual function
    The program will get the names of N bodies and their dimensions in the entrance (in the case of a triangle, then the height).
    As a result of the program, it should produce the surfaces of all organs in ascending order.
*/

/*
    Examples
    ====== Test #1 =======
    Input
    1
    Rectangle 4 3

    Output
    12 

    ====== Test #2 =======
    Input
    3
    Triangle 4 6
    Rectangle 2 3
    Circle 3

    Output
    6 12 28.2735 

    ====== Test #3 =======
    Input
    5
    Triangle 4 6
    Rectangle 2 3
    Circle 4
    Triangle 7 11
    Triangle 3 5

    Output
    6 7.5 12 38.5 50.264
*/

// Option 1
#include <iostream>

class Shape
{
public:
    virtual ~Shape() {}
    virtual double getArea() = 0;
};

class Triangle : public Shape
{
public:
    Triangle(double basis, double height)
        : mBasis(basis), mHeight(height) {}
    virtual ~Triangle()
    {
    }
    virtual double getArea()
    {
        return mBasis / 2 * mHeight;
    }

private:
    double mBasis;
    double mHeight;
};

class Rectangle : public Shape
{
public:
    Rectangle(double length, double width)
        : mLength(length), mWidth(width) {}
    virtual ~Rectangle() {}
    virtual double getArea()
    {
        return mLength * mWidth;
    }

private:
    double mLength;
    double mWidth;
};

class Circle : public Shape
{
public:
    Circle(double r)
        : mRadius(r) {}
    virtual ~Circle() {}
    virtual double getArea()
    {
        return mRadius * mRadius * 3.1415;
    }

private:
    double mRadius;
};

void sort(double *arr, int size)
{
    double temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    unsigned n;
    std::cin >> n;
    Shape **shapePointerArray = new Shape *[n];
    //Shape* shapePointerArray[n];
    for (int i = 0; i < n; ++i)
    {
        std::string shapes;
        std::cin >> shapes;
        if (shapes == "Triangle")
        {
            int basis{}, height{};
            std::cin >> basis >> height;
            shapePointerArray[i] = new Triangle(basis, height);
        }
        else if (shapes == "Rectangle")
        {
            int length{}, width{};
            std::cin >> length >> width;
            shapePointerArray[i] = new Rectangle(length, width);
        }
        else if (shapes == "Circle")
        {
            int r;
            std::cin >> r;
            shapePointerArray[i] = new Circle(r);
        }
    }
    double *arr_area = new double[n];
    for (int i = 0; i < n; i++)
        arr_area[i] = shapePointerArray[i]->getArea();
    if (n != 1)
        sort(arr_area, n);
    for (int i = 0; i < n; i++)
        std::cout << arr_area[i] << " ";
    delete[] arr_area;
    for (int i = 0; i < n; i++)
        delete shapePointerArray[i];
}

/*
// Option 2
#include <iostream>
#include <cmath>
#include <algorithm>

class Shape
{
public:
    virtual ~Shape() {}
    virtual double getArea() = 0;
};

class Triangle : public Shape
{
public:
    Triangle(double basis, double height)
        : mBasis(basis), mHeight(height) {}
    virtual ~Triangle() {}
    virtual double getArea()
    {
        return mBasis / 2 * mHeight;
    }

private:
    double mBasis;
    double mHeight;
};

class Rectangle : public Shape
{
public:
    Rectangle(double length, double width)
        : mLength(length), mWidth(width) {}
    virtual ~Rectangle() {}
    virtual double getArea()
    {
        return mLength * mWidth;
    }

private:
    double mLength;
    double mWidth;
};

class Circle : public Shape
{
public:
    Circle(double r) : mRadius(r) {}
    virtual ~Circle() {}
    virtual double getArea()
    {
        return mRadius * mRadius * 3.1415;
    }

private:
    double mRadius;
};

int main()
{
    int n = 0;
    std::cin >> n;
    Shape **shapePointerArray = new Shape *[n];
    //Shape* shapePointerArray[n];
    for (int i = 0; i < n; ++i)
    {
        std::string shapes;
        std::cin >> shapes;
        if (shapes == "Triangle")
        {
            int basis{}, height{};
            std::cin >> basis >> height;
            shapePointerArray[i] = new Triangle(basis, height);
        }
        else if (shapes == "Rectangle")
        {
            int length{}, width{};
            std::cin >> length >> width;
            shapePointerArray[i] = new Rectangle(length, width);
        }
        else if (shapes == "Circle")
        {
            int r;
            std::cin >> r;
            shapePointerArray[i] = new Circle(r);
        }
    }
    double *arr_area = new double[n];
    for (int i = 0; i < n; i++)
        arr_area[i] = shapePointerArray[i]->getArea();
    std::sort(arr_area, arr_area + n);
    for (int i = 0; i < n; i++)
        std::cout << arr_area[i] << " ";
    delete[] arr_area;
    for (int i = 0; i < n; i++)
    {
        delete shapePointerArray[i];
    }
}
*/