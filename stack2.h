#pragma once
#include <vector>

template<typename T, typename Cont = std::vector<T>>
class stack {
    Cont elems;
public:
    [[nodiscard]] bool empty() const {
        return elems.empty();
    }

    void pop() {
        assert(!elems.empty());
    }

    T const& top() const {
        assert(!elems.empty());
        return elems.back();
    }

    void push(T const elem) {
        elems.push_back(elem);
    }

    friend std::ostream& operator<<(std::ostream& strm, stack<T> s) {
        for (T const& elem : s.elems) {
            strm << elem << " ";
        }
        return strm;
    }
};
