//
// Created by venglov on 17.04.19.
//

#ifndef JMP2_JSONSERIALIZER_H
#define JMP2_JSONSERIALIZER_H

#include "Serializer.h"

class JsonSerializer : public Serializer {
public:
    JsonSerializer();

    std::string save() override;
};


#endif //JMP2_JSONSERIALIZER_H
