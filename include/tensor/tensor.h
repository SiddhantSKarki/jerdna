// Copyright 2024 Siddhant S. Karki
#ifndef TENSOR_TENSOR_H_
#define TENSOR_TENSOR_H_

#include <format>
#include <vector>
#include <iostream>

namespace jerdna {
template<typename StorageType>
class Storage;

class Shape;

template<typename T>
class Tensor {
 public:
        Tensor();
        ~Tensor() = default;

        explicit Tensor(std::vector<std::size_t> shape);
        Tensor(const std::vector<std::size_t>& shape,
            const std::vector<T>& data):
            shape_(shape),
            data_(data)
            {};

        friend std::ostream& operator<<(const ostream& out) {
            out << std::format("Tensor([{:d}])", 1) << std::endl;
            return out;
        }

        Shape shape() const;
        Tensor<T> operator+(const Tensor& rhs);
        Tensor<T> operator-(const Tensor& rhs);
        Tensor<T> operator*(const Tensor& rhs);

        template<typename... Args>
        Tensor<T> operator[](Args... args);
        Tensor<T> operator%(const Tensor& rhs);

 private:
    Shape shape_;
    std::vector<T> data_;
    Storage<T> handler_;
};
}  // namespace jerdna

#endif  // TENSOR_TENSOR_H_
