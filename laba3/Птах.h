#include <iostream>
#include "Тварина.h"
#pragma once
using namespace std;

class Bird :public Animal
{
public:
    Bird() : Animal() {}
    virtual void Show() override;
};
