// Խնդիր 16 Երկրաչափական մարմիններ.cpp

/*
  Պահանջվում է գրել ծրագիր որում իրականցված են հետևյալ դասերը՝ Shape, Cube, Pyramid, Ball

  ․Shape դասը հանդիսանում է բազային աբստրակտ դաս մնացած դասերի համար և դրանից ժառանգված դասերի օբյեկտներն
  ․իրենցից ներկայացնում են երկրաչափական եռաչափ մարմիններ
  ․Cube դասի օբյեկտները խորանարդներ են
  ․Pyramid դասի օբյեկտներն քառակուսի բուրգեր են
  ․Ball դասի օբյեկտները գնդեր են
  Դասերի մեթոդներ.

  ․Shape դասից ժառանգված բոլոր դասերը պետք է պարունակեն տվյալ դասի օբյեկտ ստեղծելու համար անհրաժեշտ
  կոնստրուկտոր(ներ) կամ մեթոդներ
  ․Մարմինների ծավալ հաշվող ֆունկցիա, որը Shape դասում պետք է սահմանված լինի որպես մաքուր վիրտուալ 
  ֆունկցիան
  Ծրագիրը մուտքում կստանա N մարմինների անունները և նրանց չափերը(բուրգի դեպքում նախ հիմք կողմի 
  երկարությունը ապա բարձրությունը)։ Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր 
  մարմինների ծավալների գումարը
*/

/*
    Օրինակներ
    ====== Թեստ #1 =======
    Մուտք
    1
    Cube 6

    Ելք
    216
    ====== Թեստ #2 =======
    Մուտք: размер 14 ---
    1
    Pyramid 4 5

    Ելք: размер 7 ---
    26.6667
    ====== Թեստ #3 =======
    Մուտք
    1
    Ball 3.4

    Ելք
    164.631
    ====== Թեստ #4 =======
    Մուտք
    3
    Ball 3.2
    Pyramid 3.6 4.56
    Cube 4.5

    Ելք
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