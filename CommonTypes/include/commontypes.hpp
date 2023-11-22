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
        uint64_t timestamp = 0;
    };

    struct Audio {
        uint32_t sampleRate;
        uint8_t channels;
        uint64_t noSamples;
        std::vector<float> data;
        bool isNew = false;
        uint64_t timestamp=0;
    };


    struct Audio16 {
        uint32_t sampleRate;
        uint8_t channels;
        uint64_t noSamples;
        std::vector<int16_t> data;
        bool isNew = false;
    };
};