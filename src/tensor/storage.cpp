// Copyright 2024 Siddhant S. Karki
#include "../../include/tensor/storage.h"

namespace jerdna {

template<typename T>
Storage<T>::Storage() {
    // Implementation of the default constructor
}

template<typename T>
Storage<T>::Storage(std::shared_ptr<Shape> shape,
    std::shared_ptr<std::vector<T>> data) {
    // Implementation of the constructor with parameters
}

template<typename T>
std::vector<T>& Storage<T>::getData() const {
    // Implementation of the getData() function
}

template<typename T>
int Storage<T>::getOffset() const {
    // Implementation of the getOffset() function
}

template<typename T>
void Storage<T>::setOffset(int offset) {
    // Implementation of the setOffset() function
}

template<typename T>
std::vector<int> Storage<T>::getStride() const {
    // Implementation of the getStride() function
}

template<typename T>
void Storage<T>::setStride(std::vector<int> stride) {
    // Implementation of the setStride() function
}

}  // namespace jerdna
