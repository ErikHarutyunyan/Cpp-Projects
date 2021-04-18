// Задача 15 Геометрические изображения.cpp

/*
    Необходимо написать программу, которая будет выполнять следующие классы: Shape, Triangle, Rectangle, Circle.

    . Класс Shape является основным абстрактным классом для других классов и объектов, унаследованных от него, это геометрические изображения
    . Объекты Triangle - это треугольники
    . Объекты класса Rectangle - это прямоугольник
    . Объектами класса Circle - являются круги

    Классовые методы:
    Все классы, унаследованные от класса Shape, должны содержать необходимые данные для создания объекта конструктора (конструкторов) этого класса или методов. Функция чтения области изображения, в которой класс Shape должен быть определен как чистая виртуальная функция. Программа получит названия N тел и их размеры во входе (в случае треугольника - высоту). В результате программа должна производить поверхности всех тел в восходящем порядке.
*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    1
    Rectangle 4 3

    Результат работы
    12 

    ====== Тест #2 =======
    Входные данные
    3
    Triangle 4 6
    Rectangle 2 3
    Circle 3

    Результат работы
    6 12 28.2735 

    ====== Тест #3 =======
    Входные данные
    5
    Triangle 4 6
    Rectangle 2 3
    Circle 4
    Triangle 7 11
    Triangle 3 5

    Результат работы
    6 7.5 12 38.5 50.264
*/

// Вариант 1
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
// Вариант 2
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