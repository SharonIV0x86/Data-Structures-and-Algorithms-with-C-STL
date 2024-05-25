#include <iostream>
#include <iterator>
#include <vector>

struct RGBA
{
    u_int8_t r, g, b, a;
};

class AlphaIterator
{
public:
    using iterator_category = std::input_iterator_tag;
    using value_type = u_int8_t;
    using difference_type = std::ptrdiff_t;
    using pointer = u_int8_t *;
    using reference = u_int8_t &;

    explicit AlphaIterator(std::vector<RGBA>::iterator itr) : _itr(itr) {}

    reference operator*()
    {
        return _itr->a;
    }
    AlphaIterator &operator++()
    {
        ++_itr;
        return *this;
    }
    AlphaIterator operator++(int)
    {
        //calls copy constructor implicitly
        AlphaIterator tmp(*this); // alternate
        // AlphaIterator tmp = *this;
        ++_itr;
        return tmp;
    }
    bool operator==(const AlphaIterator &rhs)
    {
        return this->_itr == rhs._itr;
    }
    bool operator!=(const AlphaIterator &rhs)
    {
        return this->_itr != rhs._itr;
    }
    AlphaIterator operator+(difference_type diff) const
    {
        return AlphaIterator(_itr + diff);
    }

private:
    std::vector<RGBA>::iterator _itr;
};

int main()
{
    std::vector<RGBA> bitmap{
        {255, 0, 0, 128},
        {0, 255, 0, 200},
        {0, 0, 255, 255},
        {0, 0, 128, 25},
        {255, 0, 200, 180}};
    std::cout << "Alpha Values: \n";
    // for(AlphaIterator itr = static_cast<AlphaIterator>(bitmap.begin()); itr !=static_cast<AlphaIterator>( bitmap.end()); itr++) alternate loop rolling

    for (AlphaIterator itr = AlphaIterator(bitmap.begin()); itr != AlphaIterator(bitmap.end()); itr++)
    {
        // std::cout << "Unsigned 8_t value: " << *itr << std::endl;
        std::cout << "Casted integer value: " << static_cast<int>(*itr) << std::endl;
    }
    AlphaIterator begin(bitmap.begin());
    AlphaIterator itt = begin + 2;

    AlphaIterator oldiTR = itt++;
    std::cout << "Post increment: \n" << static_cast<int>(*itt) << "\nOld valyeL " << static_cast<int>(*oldiTR) << std::endl;
        // AlphaIterator meow = AlphaIterator();

        std::cout << "\n";
    return 0;
}
