//
// Created by LoranceChen on 2018/10/2.
//

#ifndef VALKAN_TEST_OPTIONAL_H
#define VALKAN_TEST_OPTIONAL_H

template <class T>
class optional {
private:
    T _value;
    bool hasValue;
public:
    optional(T value);
    optional();
    T value();
    void set(T value);
    bool has_value();

};


#endif //VALKAN_TEST_OPTIONAL_H
