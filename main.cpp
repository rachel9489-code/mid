#include "bookGroup.h"

int main()
{
    using namespace HanYoonseo2649055;

    book b1{"title1",1,10000}, b2{"title2",2,20000}, b3{"title3",3,30000};

    bookGroup* bgPtr*{ new bookGroup{"book group name"} };

    bgPtr->addBook(b1);
    bgPtr->addBook(b2);
    bgPtr->addBook(b3);

    bgPtr->print();

    delete bgPtr;

    return 0;
}


