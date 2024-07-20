// Copyright 2024 Siddhant S. Karki
#include "../../include/tensor/tensor.h"
#include <format>
#include <ostream>

namespace jerdna {

template<typename T>
Tensor<T>::Tensor() {}

template<typename T>
Tensor<T>::Tensor(std::vector<std::size_t> shape)
    : shape_(shape) {}

template<typename T>
Shape Tensor<T>::shape() const {
    return shape_;
}

template<typename T>
Tensor<T> Tensor<T>::operator+(const Tensor& rhs) {
    // Implementation of operator+
}

template<typename T>
Tensor<T> Tensor<T>::operator-(const Tensor& rhs) {
    // Implementation of operator-
}

template<typename T>
Tensor<T> Tensor<T>::operator*(const Tensor& rhs) {
    // Implementation of operator*
}

template<typename T>
template<typename... Args>
Tensor<T> Tensor<T>::operator[](Args... args) {
    // Implementation of operator[]
}

template<typename T>
Tensor<T> Tensor<T>::operator%(const Tensor& rhs) {
    // Implementation of operator%
}

}  // namespace jerdna
