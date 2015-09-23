/* PrintAsk
 *
 * Prints to standard output the text placed in the
 * constructor on the first and only the call of print()
 *
 * -Usage-
 * Create object with text. Place object.print() where
 * the text should show on only the first call.
 *
 * Input: Text to be printed
 *
 * Output: To standard out (cout) the text entered in the constructor
 *
 * Michael O'Ryan 23/9/2015
 * michael.oryan@gmail.com
 */


/*
Sample code
Prints once the valid inputs


PrintAsk ask = PrintWarning("Enter y/n:");

//Set variables
char c = '';
bool first_try = true;


do
{
    //Ask for input
    ask.print();

    if(!first_try)
    {
        std::cout << "Invalid input entered" << std::endl;
    }
    first_try = false;

    //Get input
    cin >> c;

} while(c != 'n' || c != 'y');


*/



#ifndef PRINTWARNING_H
#define PRINTWARNING_H
#include <iostream>
#include <string>


class PrintAsk
{
    public:
        PrintAsk(std::string text);
        void print();
        void setText(std::string text);
        std::string getText();
        virtual ~PrintAsk();
        bool isFirstRun();
    protected:
    private:
        void setFirstRun(bool state);
        bool first_run;
        std::string text;
};

#endif // PRINTWARNING_H
