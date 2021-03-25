#include <iostream>
#ifndef header_hpp
#define header_hpp

#include <stdio.h>

#endif /* header_hpp */

using namespace std;

template<typename T>
struct Vector2d
{
    T x, y;
};


// kiiras
template<typename T>
ostream& operator<<( ostream& out, Vector2d<T>& v )
{
    out << "[" << v.x << ", " << v.y << "]";
    return out;
}

// beolvasas
template<typename T>
istream& operator>>( istream& in, Vector2d<T>& v )
{
    in >> v.x;
    in >> v.y;
    return in;
}

// osszeadas
template<typename T>
Vector2d<T> operator+( Vector2d<T> const& a, Vector2d<T> const& b)
{
    return Vector2d<T>{ a.x + b.x, a.y + b.y};
}

//kivonas
template<typename T>
Vector2d<T> operator-( Vector2d<T> const& a, Vector2d<T> const& b)
{
    return Vector2d<T>{ a.x - b.x, a.y - b.y};
}

//szorzas skl
template<typename T>
Vector2d<T> operator*( Vector2d<T> const& a, double const& b)
{
    return Vector2d<T>{ a.x * b, a.y * b};
}

//osztas skl
template<typename T>
Vector2d<T> operator/( Vector2d<T> const& a, double const& b)
{
    return Vector2d<T>{ a.x / b, a.y / b};
}

//pont
template<typename T>
T dot( Vector2d<T> const& a, Vector2d<T> const& b)
{
    return { a.x * b.x + a.y * b.y};
}

//hossz
template<typename T>
T sqlength( Vector2d<T> const& a)
{
    return { a.x * a.x + a.y * a.y};
}

//negyzet hossz
template<typename T>
T length( Vector2d<T> const& a)
{
    return {sqrt( a.x * a.x + a.y * a.y)};
}


//normalizalas
template<typename T>
T normalize( Vector2d<T> const& a)
{
    return { a.x / length(a) + a.y / length(a)};
}

