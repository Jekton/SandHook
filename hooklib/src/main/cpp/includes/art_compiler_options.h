//
// Created by 甘尧 on 2019/2/23.
//

#ifndef ART_COMPILER_OPTIONS_H
#define ART_COMPILER_OPTIONS_H

#include <stddef.h>

namespace art {
    class CompilerOptions {
    public:
        // Jekton: filter 实际上是一个 enum，默认底层是 int，32位的时候，跟 void* 一样，
        // 64位时由于 padding 的存在，也会占 64bit，所以这个 void* 不会有问题
        void* compiler_filter_;
        size_t huge_method_threshold_;
        size_t large_method_threshold_;
        size_t small_method_threshold_;
        size_t tiny_method_threshold_;
        size_t num_dex_methods_threshold_;
        size_t inline_depth_limit_;
        size_t inline_max_code_units_;

        size_t getInlineMaxCodeUnits();
        bool setInlineMaxCodeUnits(size_t units);

    };
}

#endif //ART_COMPILER_OPTIONS_H
