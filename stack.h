#pragma once
#include <vector>
#include <cassert>

template<typename T>
class stack {
    std::vector<T> elements;
public:
    void push(T const&);
    void pop();
    T const& top() const;

    [[nodiscard]] bool empty() const {
        return elements.empty();
    }

    template<typename U>
    friend std::ostream& operator<<(std::ostream&, stack<U> const&);
};

template<typename T>
void stack<T>::push(T const& elem) {
    elements.push_back(elem);
}

template<typename T>
void stack<T>::pop() {
    assert(!elements.empty());
    elements.pop_back();
}

template<typename T>
T const& stack<T>::top() const {
    assert(!elements.empty());
    return elements.back();
}

template<typename T>
std::ostream &operator<<(std::ostream& strm, stack<T> const& s) {
    for (T const& elem : s.elements) {
        strm << elem << " ";
    }
    return strm;
}
