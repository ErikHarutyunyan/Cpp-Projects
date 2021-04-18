// Task 16 Geometric bodies.cpp

/*
  You need to write a program that performs the following lessons: Shape, Cube, Pyramid, Ball

  . Shape is the basic abstract lesson for the other classes and objects inherited from it.
  :are geometric three-dimensional bodies
  . Objects of the Cube class-cubes
  . Objects of the Pyramid class-square pyramids
  Objects of the "ball" class-balls
  Lesson methods:

  .All classes inherited from the Shape class must contain the necessary data for creating an object of this class
  constructor (s) or methods
  -A function that calculates the volume of the body, which in the Shape class should be defined as a pure virtual
  function
  The program will get the names of N bodies and their dimensions in the entrance (in the case of a pyramid, first on the base side
  length then height). As a result of the project's work, it should lay out everything
  sum of organ volumes

*/

/*
  Examples
  ====== Test #1 =======
  Input
  1
  Cube 6

  Output
  216
  ====== Test #2 =======
  Input: размер 14 ---
  1
  Pyramid 4 5

  Output: размер 7 ---
  26.6667
  ====== Test #3 =======
  Input
  1
  Ball 3.4

  Output
  164.631
  ====== Test #4 =======
  Input
  3
  Ball 3.2
  Pyramid 3.6 4.56
  Cube 4.5

  Output
  248.078
*/

#include <iostream>

class Shape
{
public:
  virtual ~Shape() {}
  virtual double getArea() = 0;
  void printArea()
  {
    std::cout << getArea() << " ";
  }
};

class Cube : public Shape
{
public:
  Cube(double s)
      : mSide(s) {}
  virtual ~Cube() {}
  virtual double getArea()
  {
    return mSide * mSide * mSide;
  }

private:
  double mSide;
};

class Pyramid : public Shape
{
public:
  Pyramid(double s, double h)
      : mSide(s), mHeight(h) {}
  virtual ~Pyramid() {}
  virtual double getArea()
  {
    return (mSide * mSide * mHeight) / 3.0;
  }

private:
  double mSide;
  double mHeight;
};

class Ball : public Shape
{
public:
  Ball(double r)
      : mRadius(r) {}
  virtual ~Ball() {}
  virtual double getArea()
  {
    return (3.1415 * mRadius * mRadius * mRadius) * 4.0 / 3.0;
  }

private:
  double mRadius;
};

int main()
{
  int n{};
  std::cin >> n;
  Shape **shapePointerArray = new Shape *[n];
  for (int i = 0; i < n; ++i)
  {
    std::string shapes;
    std::cin >> shapes;
    if (shapes == "Cube")
    {
      double side{};
      std::cin >> side;
      shapePointerArray[i] = new Cube(side);
    }
    else if (shapes == "Pyramid")
    {
      double side{}, height{};
      std::cin >> side >> height;
      shapePointerArray[i] = new Pyramid(side, height);
    }
    else if (shapes == "Ball")
    {
      double r;
      std::cin >> r;
      shapePointerArray[i] = new Ball(r);
    }
  }
  double sum{};
  for (int i = 0; i < n; i++)
    sum += shapePointerArray[i]->getArea();
  std::cout << sum;
  for (int i = 0; i < n; i++)
    delete shapePointerArray[i];
}