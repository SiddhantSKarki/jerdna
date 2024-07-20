// Copyright 2024 Siddhant S. Karki
#ifndef TENSOR_STORAGE_H_
#define TENSOR_STORAGE_H_

#include <memory>
#include <vector>
// Include any necessary headers here

namespace jerdna {

class Shape;
template<typename T>
class Storage {
 public:
    Storage();
    explicit Storage(std::shared_ptr<Shape> shape,
        std::shared_ptr<std::vector<T>> data);

    std::vector<T>& getData() const;
    int getOffset() const;
    void setOffset(int offset);
    std::vector<int> getStride() const;
    void setStride(std::vector<int> stride);

 private:
    int offset_;
    std::vector<int> stride_;
    std::shared_ptr<Shape> shape_;
    std::shared_ptr<std::vector<T>> data_;
};


}  // namespace jerdna

#endif  // TENSOR_STORAGE_H_
