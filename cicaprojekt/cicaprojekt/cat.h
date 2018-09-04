#ifndef CAT_H
#define CAT_H

#include <string>
#include <chrono>

class Cat
{
    public:
        enum class Gender
        {
            male,
            female
        };

    private:

        enum class HungryState
        {
            best,
            good,
            bad,
            worst
        };
        enum class SleepyState
        {
            best,
            good,
            bad,
            worst
        };
        enum class LonelyState
        {
            best,
            good,
            bad,
            worst
        };

        std::string name;
        Gender gender;
        
        int hungry = 100;
        int sleepy = 100;
        int lonely = 100;

        double creationTime;
        double currentTime;

        HungryState hungerState = HungryState::best;
        SleepyState sleepyState = SleepyState::best;
        LonelyState lonelyState = LonelyState::best;

        void updateHungry(int value, double currTime);
        void updateSleepy(int value, double currTime);
        void updateLonely(int value, double currTime);

public:
    Cat(std::string name, Gender gender);
    ~Cat();
    std::string getName();
    Gender getGender();
    HungryState getHungryState();
    SleepyState getSleepyState();
    LonelyState getLonelyState();
    void modifyHungry(int value, double currTime);
    void modifySleepy(int value, double currTime);
    void modifyLonely(int value, double currTime);


};

#endif // !CAT_H

