#include <iostream>
#include <iterator>
#include <vector>

class SquareIterator{
    public:
        using iterator_category = std::random_access_iterator_tag;
        using value_type = int;
        using difference_type = std::ptrdiff_t;
        using pointer = int *;
        using reference = int &;

        explicit SquareIterator(pointer ptr) : Ptr(ptr){}

        value_type operator*() const {return (*Ptr) * (*Ptr);}
        pointer operator->(){return Ptr;}

        SquareIterator &operator++(){
            ++Ptr;
            return *this;
        }
        SquareIterator operator++(int){
            SquareIterator tmp = *this;
            ++Ptr;
            return tmp;
            // Prefix just increments, postfix increments and returns a copy with the original value
            // return *this;
        }

        SquareIterator& operator+=(difference_type diff) {
            Ptr+= diff;
            return *this;
        }
        SquareIterator operator+(difference_type diff) const{
            return SquareIterator(Ptr + diff);
        }
        value_type operator[](difference_type diff)const {
            // return *(Ptr + diff); //normal usage returns the value
            return *(Ptr + diff) * *(Ptr + diff); //returns squared of the value
        }
        bool operator!=(const SquareIterator &other) const{
            return this->Ptr != other.Ptr;
        }
    private:
        pointer Ptr;
};
int main(){
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    SquareIterator begin(vec.data());
    SquareIterator end(vec.data() + vec.size());
    for(auto itr = begin; itr != end; itr++){
        std::cout << *itr <<" ";
    }

    SquareIterator itt = begin + 4;
    // 1 4 9 itt-> 16 25

    std::cout << "Current value of itt" << *itt << std::endl;
    std::cout << "Value of itt at index 0 " << itt[-2] << std::endl;
    std::cout << "Value of itt at index 1 " << itt[-3] << std::endl;
    std::cout << "Value of itt at index 2 " << itt[-4] << std::endl;

    std::cout << "Pre increment: \n";
    ++itt;
    std::cout << "Value after pre inc: " << *itt << std::endl;
    SquareIterator oldItr = itt++;
    //the oldItr holds the reference to the previous itr.
    std::cout << "Post increment: \n" << *itt << "\nOld itr value: " <<*oldItr;

}