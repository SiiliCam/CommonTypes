#pragma once
#include <vector>
#include <cstdint>

namespace common_types {

    struct Image {
        int width;
        int height;
        int channels;
        std::vector<uint8_t> data;
        int stride = 0;
    };

    struct Audio {
        uint32_t sampleRate;
        uint8_t channels;
        uint64_t noSamples;
        std::vector<float> data;
        bool isNew = false;
    };
};