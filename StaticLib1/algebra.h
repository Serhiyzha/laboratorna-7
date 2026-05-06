#pragma once
class algebra
{
private:
    double a, b, c, d;

public:
    algebra();
    void setValues(double aV, double bV, double cV, double dV);

    double getA();
    double getB();
    double getC();
    double getD();

    double Root(double x);
    double Result();
};