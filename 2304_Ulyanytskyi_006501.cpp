#include <iostream>

using namespace std;

class Vector3D {
private:
    double m_x, m_y, m_z;

public:
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z) 
    {}

    void print() const 
    {
        cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

    double get_x() const { return m_x; }
    double get_y() const { return m_y; }
    double get_z() const { return m_z; }
};

class Point3D {
private:
    double m_x, m_y, m_z;

public:
    Point3D (double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {}

    void print() const
    {
        cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

    void moveByVector(const Vector3D& v)
    {
        m_x += v.get_x();
        m_y += v.get_y();
        m_z += v.get_z();
    }
};

int main() {
    Point3D p(3.0, 4.0, 5.0);
    Vector3D v(3.0, 3.0, -2.0);

    p.print();
    p.moveByVector(v);
    v.print();
    p.print();

    return 0;
}
