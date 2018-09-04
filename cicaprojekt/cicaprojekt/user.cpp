#include "user.h"

User::User(std::string username) :
    username(username)
    {}
User::~User() {}

void User::createCat(std::string catName, Cat::Gender catGender)
{
    cat(catName, catGender);
};