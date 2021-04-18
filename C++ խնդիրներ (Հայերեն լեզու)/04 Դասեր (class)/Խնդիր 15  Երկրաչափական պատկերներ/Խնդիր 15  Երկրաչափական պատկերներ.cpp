// Խնդիր 15  Երկրաչափական պատկերներ.cpp

/*
    Պահանջվում է գրել ծրագիր որում իրականցված են հետևյալ դասերը՝ Shape, Triangle, Rectangle, Circle

    .Shape դասը հանդիսանում է բազային աբստրակտ դաս մնացած դասերի համար և դրանից ժառանգված դասերի օբյեկտներն իրենցից ներկայացնում են երկրաչափական պատկերներ
    .Triangle դասի օբյեկտները եռանկյուններ են
    .Rectangle դասի օբյեկտներն ուղղանկյուններ են
    .Circle դասի օբյեկտները շրջաններ են

    Դասերի մեթոդներ.

    .Shape դասից ժառանգված բոլոր դասերը պետք է պարունակեն տվյալ դասի օբյեկտ ստեղծելու համար անհրաժեշտ կոնստրուկտոր(ներ) կամ մեթոդներ
    Պատկերի մակերեսը հաշվող ֆունկցիա, որը Shape դասում պետք է սահմանված լինի որպես մաքուր 
    վիրտուալ ֆունկցիա
    Ծրագիրը մուտքում կստանա N մարմինների անունները և նրանց չափերը (եռանկյան դեպքում հիմքը ապա բարձրությունը)։ 
    Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր մարմինների մակերեսները աճման կարգով։
*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    1
    Rectangle 4 3

    Ելք
    12 

    ====== Թեստ #2 =======
    Մուտք
    3
    Triangle 4 6
    Rectangle 2 3
    Circle 3

    Ելք
    6 12 28.2735 

    ====== Թեստ #3 =======
    Մուտք
    5
    Triangle 4 6
    Rectangle 2 3
    Circle 4
    Triangle 7 11
    Triangle 3 5

    Ելք
    6 7.5 12 38.5 50.264
*/

// Տարբերակ 1
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
// Տարբերակ 2
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