////
//// Created by LoranceChen on 2018/10/2.
////
//
//#include "optional.hpp"
//#include <exception>
//
//struct NoSuchElemException : public std::exception
//{
//    const char * what () const throw ()
//    {
//        return "C++ Exception";
//    }
//};
//
//template <class T>
//bool optional<T>::has_value() {
//    return this->hasValue;
//}
//
//template <class T>
//T optional<T>::value(){
//    if(this->hasValue) {
//        return this->_value;
//    } else {
//        throw NoSuchElemException();
//    }
//}
//
//template <class T>
//void optional<T>::set(T value){
//    this->hasValue = true;
//    this->_value = value;
//}
//
//template <class T>
//optional<T>::optional(T value) {
//    this->_value = value;
//    this->hasValue=true;
//}
//
//template <class T>
//optional<T>::optional() {
//    this->hasValue=false;
//}

#include <string>

std::string hello() {
    return "hello";
}