#include "span.hpp"

Span::Span()
{
    size = 0;
}

Span::Span(unsigned int n)
{
    size = n;
}

Span::~Span() {}

Span::Span(Span const &obj)
{
    vect = obj.vect;
    size = obj.size;
}

void Span::addNumber(int x)
{
    if (size == 0)
        throw CFull();
    vect.push_back(x);
    size--;
}


int Span::longestSpan()
{
    if (vect.size() < 2)
        throw NoSpan();
    std::sort(vect.begin(), vect.end());
    return vect[vect.size() - 1] - vect[0];
}

int Span::shortestSpan()
{
    if (vect.size() < 2)
        throw NoSpan();

    std::sort(vect.begin(), vect.end());
    int span = abs(vect[0] - vect[1]);
    unsigned int len  = vect.size() - 1;

    for (unsigned int i = 0; i < len; i++)
        span = std::min(span, abs(vect[i] - vect[i + 1]));
    return span;
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        vect = obj.vect;
        size = obj.size;
    }
    return *this;
}

const char *Span::NoSpan::what(void) const throw()
{
    return "Span not found";
}

const char *Span::CFull::what(void) const throw()
{
    return "Container is full";
}