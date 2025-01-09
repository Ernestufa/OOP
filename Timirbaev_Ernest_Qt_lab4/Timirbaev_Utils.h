#ifndef TIMIRBAEV_UTILS_H
#define TIMIRBAEV_UTILS_H

#pragma once
#include <iostream>
#include <string>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>


inline bool check(std::string number) {
    for (size_t i = 0; i != number.length(); ++i) {
        if (isdigit(static_cast<unsigned char>(number[i]))) continue;
        else return false;
    }
    if (number.length() == 0) return false;
    return true;
}

inline bool GetCorrectNumber(int min, int max, std::string input) {
    if (check(input) == false || stoi(input) < min || stoi(input) > max)
        return false;
    return true;
}

#endif // TIMIRBAEV_UTILS_H
