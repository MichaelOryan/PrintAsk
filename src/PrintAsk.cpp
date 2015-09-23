#include "PrintAsk.h"

PrintAsk::PrintAsk(std::string text)
{
    setFirstRun(true);
    setText(text);
}

PrintAsk::~PrintAsk()
{

}

void PrintAsk::print()
{
    if(isFirstRun())
    {
        setFirstRun(false);
        std::cout << getText() << std::endl;
    }

}

void PrintAsk::setText(std::string text)
{
    this->text = text;
}

void PrintAsk::setFirstRun(bool state)
{
    this->first_run = state;
}


bool PrintAsk::isFirstRun()
{
    return this->first_run;
}

std::string PrintAsk::getText()
{
    return this->text;
}
