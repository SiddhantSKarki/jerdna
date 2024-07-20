// Copyright 2024 Siddhant S. Karki
#ifndef TENSOR_SHAPE_H_
#define TENSOR_SHAPE_H_

#include <vector>

namespace jerdna {

class Shape {
 public:
        Shape() = default;
        ~Shape() = default;
        Shape(std::size_t width, std::size_t height,
            std::size_t channels, std::size_t batch):
            m_width(width),
            m_height(height),
            m_channels(channels),
            m_batch(batch)
            {};
        explicit Shape(const std::vector<std::size_t>&);

        // Getters
        std::size_t getWidth() const;
        std::size_t getHeight() const;
        std::size_t getChannels() const;
        std::size_t getBatch() const;

        // Setter
        void setWidth(std::size_t);
        void setHeight(std::size_t);
        void setChannels(std::size_t);
        void setBatch(std::size_t);

 private:
        std::size_t m_width;
        std::size_t m_height;
        std::size_t m_channels;
        std::size_t m_batch;

        void selectProps_(std::size_t, const std::vector<std::size_t>&);
};

}  // namespace jerdna

#endif  // TENSOR_SHAPE_H_
