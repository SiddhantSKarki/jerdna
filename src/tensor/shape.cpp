// Copyright 2024 Siddhant S. Karki
#include "../../include/tensor/shape.h"
#include <format>
#include <stdexcept>
#include <string>


namespace jerdna {

Shape::Shape(std::size_t width,
    std::size_t height, std::size_t channels, std::size_t batch)
    : m_width(width), m_height(height), m_channels(channels), m_batch(batch) {}


Shape::Shape(const std::vector<std::size_t>& shape) {
    std::size_t size = shape.size();
    this->selectProps_(size, shape);
}

std::size_t Shape::getWidth() const {
    return m_width;
}

std::size_t Shape::getHeight() const {
    return m_height;
}

std::size_t Shape::getChannels() const {
    return m_channels;
}

std::size_t Shape::getBatch() const {
    return m_batch;
}

void Shape::setWidth(std::size_t width) {
    m_width = width;
}

void Shape::setHeight(std::size_t height) {
    m_height = height;
}

void Shape::setChannels(std::size_t channels) {
    m_channels = channels;
}

void Shape::setBatch(std::size_t batch) {
    m_batch = batch;
}

void Shape::selectProps_(std::size_t numArgs,
    const std::vector<std::size_t>& shape) {

    if (numArgs < 1 || numArgs > 4) {
        std::string msg = "";
        if (numArgs < 1) {
            msg = std::format("Shape attributes must be provided");
        } else {
            msg = std::format(
                "Shape attribute count must be at most 4, {:d} provided",
                 numArgs);
        }
        // TODO(Sid): TODO: Add a custom Invalid Shape structure error
        throw std::invalid_argument(msg.c_str());
    }
    if (numArgs > 0) {
        this->setWidth(shape.at(0));
    }
    if (numArgs > 1) {
        this->setHeight(shape.at(1));
    }
    if (numArgs > 2) {
        this->setChannels(shape.at(2));
    }
    if (numArgs > 3) {
        this->setBatch(shape.at(3));
    }
}

}
