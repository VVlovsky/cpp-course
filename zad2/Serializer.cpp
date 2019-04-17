//
// Created by venglov on 17.04.19.
//

#include "Serializer.h"

Serializer::Serializer() = default;


std::string Serializer::save() {
    return std::__cxx11::string();
}

void Serializer::add(std::string key, std::string value) {
    this->data.insert(std::pair<std::string, std::string>(key, value));

}

