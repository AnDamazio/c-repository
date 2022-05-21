/**
 * @file hello-word.cpp
 * @author André Damazio (damazioandre@hotmail.com)
 * @brief this document has the purpose to explain about data types and some basic
 * concepts of C
 * @version 0.1
 * @date 2022-05-21
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;

/*
First of all, what is "#include" and "<iostream>"?

#include

    - Read this as "import", this is use do bring a library to
    our document, so we can use their functions.

    ***
    Functions are "actions" that our code will be able to execute, like
    put some text in the screen, what we will see next.
    ***

<iostream>

    Is the name of a native library from C, a library is like a kit
    of functions, to use a function of a library we need to import it, following:

    include <libraryname>

    ***
    Native, in other words, means "natural of the language", it is: it already comes with the language
    without needing to install (we can install libraries from others too, but don't worry about it now).
    ***
*/

/**
 * @brief This function prints a text on screen
 *
 * @param text String
 *
 * @return Nothing
 *
 */

/**
 * @brief This is the main function, basically is your code core.
 * When the application runs, all the code inside this will be executed.
 * Again, dont worry, this is all you need to know for now.
 */
int main()
{
    /*
    * cout is a function (an object, but it doesn't matter for now) imported from <iostream>,
    * it just put in the screen the text before the double "<" before its name.
    */
    std::cout << 'Hello World!';
    return 0;
}