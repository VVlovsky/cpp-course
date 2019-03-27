#ifndef JMP2_NAME_H
#define JMP2_NAME_H


#include <vector>
#include <string>
#include <optional>

class Name {
public:
    Name(const std::string &name);

    std::string FirstName() const;

    std::string SecondName() const;

    std::string ThirdName() const;

    std::string Surname() const;

    std::string ToFullInitials() const;

    std::string ToFirstNamesInitials() const;

    std::string ToSurnameNames() const;

    std::string ToNamesSurname() const;

    bool IsBeforeBySurname(const std::string &other) const;

    bool IsBeforeByFirstName(const std::string &other) const;

private:
    std::string first_name;
    std::optional<std::string> second_name;
    std::optional<std::string> third_name;
    std::string surname;

    bool check_names(const std::string &first, const std::string &second) const;

    std::string create_name_initials() const;
};

#endif //JMP2_NAME_H
