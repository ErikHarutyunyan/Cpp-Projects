// Задача 16 Геометрические тела.cpp

/*
  Необходимо написать программу, которая будет выполнять следующие классы: Shape, Cube, Pyramid, Ball.

  .Shape- это базовый абстрактный класс для других классов и объектов, унаследованных от него, являются геометрическими трехмерными телами
  .Объекты класса Cube-кубы
  .Объекты класса Pyramid-квадратные пирамиды
  .Объекты "Ball" класса-шаров
  Методы классов:

  Все классы, унаследованные от класса Shape, должны содержать необходимые данные для создания объекта данного класса.
  конструктор (ы) или методы
  Функция, вычисляющая объем тела, который в классе Shape должен быть определен как чистый виртуальный
  функция.
  Программа получит названия N тел и их размеры во входе (в случае пирамиды, сначала со стороны основания).
  длина, а потом высота). В результате работы проекта должно быть выложено всё, сумма объёмов тел
*/

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    1
    Cube 6

    Результат работы
    216
    ====== Тест #2 =======
    Входные данные: размер 14 ---
    1
    Pyramid 4 5

    Результат работы: размер 7 ---
    26.6667
    ====== Тест #3 =======
    Входные данные
    1
    Ball 3.4

    Результат работы
    164.631
    ====== Тест #4 =======
    Входные данные
    3
    Ball 3.2
    Pyramid 3.6 4.56
    Cube 4.5

    Результат работы
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