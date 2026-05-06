using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassLibrary1
{
    public class Algerbras
    {
        private double a, b, c, d;

        public void SetValues(double aV, double bV, double cV, double dV)
        {
            a = aV; b = bV; c = cV; d = dV;
        }

        public double A { get { return a; } }

        public double Root(double x)
        {
            if (x < 0) throw new Exception("Негативний корінь");
            return Math.Sqrt(x);
        }

        public double Result()
        {
            double k = Root(41 - d);
            double znam = k - (b * a) + c;

            if (znam == 0) throw new Exception("Ділення на нуль");

            return (a * b / 4.0 - 1) / znam;
        }
    }
}