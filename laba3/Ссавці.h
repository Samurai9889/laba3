#include <iostream>
#include "Тварина.h"
#pragma once
using namespace std;

class Mammals :public Animal
{
public:
    Mammals() : Animal() {}
    virtual void Show() override;
};
