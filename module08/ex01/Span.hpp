#pragma once
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span {
    public:
        Span();
        Span(unsigned int N);
        Span(Span const & other);
        ~Span();

        Span const & operator=(Span const & obj);

        void addNumber(int nbr);
        template <typename Iter>
        void addNumber(Iter begin, Iter end) {
            if (this->nbrs.size() >= this->N) {
                throw Span::FullSpanException();
            }
            this->nbrs.insert(this->nbrs.begin(), begin, end);
        }

        int shortestSpan();
        int longestSpan();

        class FullSpanException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Span is full";
                }
        };
        class EmptySpanException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "No span can be found";
                }
        };
    private:
        unsigned int N;
        std::vector<int> nbrs;
};