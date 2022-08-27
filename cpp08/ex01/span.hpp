
#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        std::vector<int> vect;
        unsigned int size;
    public :
        Span();
        Span(unsigned int);
        Span(Span const &);
        ~Span();
        void addNumber(int);
        int shortestSpan();
        int longestSpan();
        Span &operator=(Span const &);

        class NoSpan : public std::exception
        {
            const char *what(void) const throw();
        };

        class CFull : public std::exception
        {
            const char *what(void) const throw();
        };
};