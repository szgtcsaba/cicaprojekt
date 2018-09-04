#ifndef USER_H
#define USER_H

#include <string>
#include "cat.h"

class User
{
    public:
        User(std::string username);
        ~User();

        void createCat(std::string name, Cat::Gender);

    private:
        std::string username;
        std::string catName;
        Cat::Gender catGender;
        //Cat cat;
        



};

#endif