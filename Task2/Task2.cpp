
#include <iostream>

class Figure
{
protected:
    int sideA = 0;
    int cornA = 0;

};
class Triangle : public Figure
{
protected:
    int sideB;
    int sideC;
    int cornB;
    int cornC;
    void Print()
    {
        std::cout << "Стороны: " << "a=" << sideA << " " << "b=" << sideB << " " << "c=" << sideC << std::endl;
        std::cout << "Углы: " << "A=" << cornA << " " << "B=" << cornB << " " << "C=" << cornC << std::endl;
    }
};
class TriangleSimple : public Triangle
{
public:
    TriangleSimple()
    {
        sideA = 10;
        sideB = 20;
        sideC = 30;
        cornA = 50;
        cornB = 60;
        cornC = 70;
    }
    void GetTriangleSimple()
    {
        std::cout << "Треугольник:" << std::endl;
        Print();
    }

};
class TriangleRht : TriangleSimple
{
public:
    TriangleRht()
    {
        cornC = 90;
    }

    void GetTriangleRhe()
    {
        std::cout << "Прямоугольный треугольник:" << std::endl;
        Print();
    }
};

class TriangleIso : public TriangleSimple
{
public:
    TriangleIso()
    {
        sideC = 10;
        cornC = cornA;
    }
    void GetTriangleIso()
    {
        std::cout << "Равнобедренный треугольник:" << std::endl;
        Print();
    }
};
class TriangleEq : public TriangleSimple
{
public:
    TriangleEq()
    {
        int i = 30;
        int j = 60;
        sideA = sideB = sideC = i;
        cornA = cornB = cornC = j;

    }
    void GetTriangleEq()
    {
        std::cout << "Равнобедренный треугольник:" << std::endl;
        Print();
    }
};

class Quadrangle : public TriangleSimple
{
protected:
    int sideD;
    int cornD;
    void Print()
    {
        std::cout << "Стороны: " << "a=" << sideA << " " << "b=" << sideB << " " << "c=" << sideC << " " << "d=" << sideD << std::endl;
        std::cout << "Углы: " << "A=" << cornA << " " << "B=" << cornB << " " << "C=" << cornC << " " << "D=" << cornD << std::endl;
    }
};

class QuadrangleSimple : public Quadrangle
{
public:
    QuadrangleSimple()
    {
        sideD = 40;
        cornD = 80;
    }

    void GetQuadrangleSimple()
    {
        std::cout << "Четырёхугольник:" << std::endl;
        Print();
    }
};
class Rectangle : public Quadrangle
{
public:
    Rectangle()
    {
        sideC = sideA;
        sideD = sideB;
        cornA = cornB = cornC = cornD = 90;
    }
    void GetRectangle()
    {
        std::cout << "Прямоугольник:" << std::endl;
        Print();
    }
};

class Square : public Rectangle
{
public:
    Square()
    {
        sideA = sideB = sideC = sideD = 20;
    }

    void GetSquare()
    {
        std::cout << "Квадрат:" << std::endl;
        Print();
    }
};
class Parallelogram : public Square
{
public:
    Parallelogram()
    {
        sideB = sideD = 30;
        cornA = cornC = 30;
        cornB = cornD = 40;

    }

    void GetParallelogram()
    {
        std::cout << "Параллелограмм:" << std::endl;
        Print();
    }
};

class Rhombus : Parallelogram
{
public:

    Rhombus()
    {
        sideA = sideC = 30;
    }

    void GetRhombus()
    {
        std::cout << "Ромб:" << std::endl;
        Print();
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    TriangleSimple TS;
    TriangleRht TR;
    TriangleIso TISO;
    TriangleEq TEQ;
    QuadrangleSimple QS;
    Rectangle RT;
    Square Sq;
    Parallelogram Prll;
    Rhombus RS;

    TS.GetTriangleSimple();
    TR.GetTriangleRhe();
    TISO.GetTriangleIso();
    TEQ.GetTriangleEq();
    QS.GetQuadrangleSimple();
    RT.GetRectangle();
    Sq.GetSquare();
    Prll.GetParallelogram();
    RS.GetRhombus();
    
};


