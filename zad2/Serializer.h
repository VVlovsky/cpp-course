//
// Created by venglov on 17.04.19.
//

#ifndef JMP2_SERIALIZER_H
#define JMP2_SERIALIZER_H

#include <map>

class Serializer {
protected:
    Serializer();
    std::map<std::string, std::string> data;

public:
    virtual std::string save();
    void add(std::string key, std::string value);
};

#endif //JMP2_SERIALIZER_H
