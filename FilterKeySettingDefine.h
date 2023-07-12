#ifndef __FILTER_KEY_SETTING_DEFINE_H__
#define __FILTER_KEY_SETTING_DEFINE_H__

#include <string>

#ifndef SAFE_DELETE
  #define SAFE_DELETE(ptr) \
    if (ptr) {             \
      delete ptr;          \
      ptr = nullptr;       \
    }
#endif

namespace FilterKey {

enum class PRESET {
  ONE = 1,
  TWO,
};

};  // namespace FilterKey

#endif  // __FILTER_KEY_SETTING_DEFINE_H__
