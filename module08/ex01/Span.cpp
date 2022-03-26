#include "Span.hpp"

Span::Span() {
    this->N = 0;
}

Span::Span(unsigned int N) {
    this->N = N;
}

Span::Span(Span const & other) {
    *this = other;
}

Span::~Span() {
}

Span const & Span::operator=(Span const & other) {
    this->N = other.N;
    this->nbrs = other.nbrs;
    return *this;
}

void Span::addNumber(int nbr) {
    if (this->nbrs.size() >= this->N) {
        throw Span::FullSpanException();
    }
    this->nbrs.push_back(nbr);
}

int Span::shortestSpan() {
    if (this->nbrs.size() < 2)
        throw Span::EmptySpanException();
    
    typedef std::vector<int>::iterator it;
    it it1 = this->nbrs.begin();
    it it2 = this->nbrs.begin() + 1;
    int min = std::abs(*it2 - *it1);
    for (; it1 != this->nbrs.end(); it1++) {
        for (it2 = it1 + 1; it2 != this->nbrs.end(); it2++) {
            if (std::abs(*it2 - *it1) < min)
                min = std::abs(*it2 - *it1);
        }
    }
    return min;
}

int Span::longestSpan() {
    if (this->nbrs.size() < 2)
        throw Span::EmptySpanException();
    
    typedef std::vector<int>::iterator it;
    it max = std::max_element(this->nbrs.begin(), this->nbrs.end());
    it min = std::min_element(this->nbrs.begin(), this->nbrs.end());
    return std::abs(*max - *min);
}