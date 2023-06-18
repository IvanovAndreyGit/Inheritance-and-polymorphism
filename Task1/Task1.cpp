
#include <iostream>

class Figure
{
public:
    void GetFigure()
    {
        std::cout << sidesFigure << std::endl;
    }
protected:
    int sidesFigure = 0;

};
class Triangle : public Figure
{
public:
    int SetT()
    {
        return sidesFigure = 3;
    }

};
class Quadrangle : public Figure
{
public:
    int SetQ()
    {
        return sidesFigure = 4;
    }

};



int main()
{
    setlocale(LC_ALL, "Russian");
    Figure f;
    Triangle t;
    Quadrangle q;
    std::cout << "Количество сторон: " << std::endl;
    std::cout << "Фигура: ";
    f.GetFigure();
    t.SetT();
    std::cout << "Треугольник: ";
    t.GetFigure();
    q.SetQ();
    std::cout << "Четырёхугольник: ";
    q.GetFigure();
  
}

