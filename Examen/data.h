#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>
#include <array>
using namespace std;

template <class T>
class Data
{
public:
    Data(T _value);

    void setValue(const T &v);
    T getValue() const;
private:
    T value;
};

template <class T>
Data<T>::Data(T _value):
    value{_value}
{

}

template <class T>
void Data<T>::setValue(const T &v){
    value = v;
}

template<class T>
T Data<T>::getValue() const
{
    return value;
}

#endif // DATA_H
