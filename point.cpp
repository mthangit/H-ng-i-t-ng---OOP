#include <iostream>
#include <math.h>
using namespace std;
class vecto;
class Diem
{
private:
    double x;
    double y;

public:
    void nhap();
    void xuat();
    void move(double x, double y);
    double hoanh();
    double tung();
    void dichuyen(vecto u);
};
class vecto
{
private:
    Diem a, b;

public:
    void nhapvecto();
    void xuatvecto();
    void dodai();
    Diem dau();
    Diem cuoi();
};
void vecto::nhapvecto()
{
    cout << "nhap vector: "
         << "\n";
    a.nhap();
    b.nhap();
}
void vecto::xuatvecto()
{
    cout << "(" << b.hoanh() - a.hoanh() << ";" << b.tung() - a.tung() << ")"
         << "\n";
}
void vecto::dodai()
{
    cout << sqrt(pow((b.hoanh() - a.hoanh()), 2) + pow((b.tung() - a.tung()), 2));
}
void Diem::dichuyen(vecto u)
{
    x = x + (u.cuoi().hoanh() - u.dau().hoanh());
    y = y + (u.cuoi().tung() - u.dau().tung());
    cout << "(" << x << "," << y << ")";
}
double Diem::hoanh()
{
    return x;
}
double Diem::tung()
{
    return y;
}
Diem vecto::dau()
{
    return a;
}
Diem vecto::cuoi()
{
    return b;
}
void Diem::nhap()
{
    cin >> x;
    cin >> y;
}
void Diem::move(double dx, double dy)
{
    x += dx;
    y += dy;
}
void Diem::xuat()
{
    cout << x << "\t" << y;
}

int main()
{
    Diem a, b, m;
    vecto D;
    cout << "Nhap toa do diem M:"
         << "\n";
    m.nhap();
    cout << "\n";
    D.nhapvecto();
    cout << "Vecto vua nhap la: ";
    D.xuatvecto();
    cout << "Do dai vecto la: ";
    D.dodai();
    cout << "\n";
    cout << "Diem m sau khi di chuyen theo vecto la: ";
    m.dichuyen(D);
    return 0;
}
