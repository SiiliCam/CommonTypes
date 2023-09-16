#pragma once
#include <vector>
#include <cstdint>

namespace common_types {

    struct Image {
        int width;
        int height;
        int channels;
        std::vector<uint8_t> data;
    };

};