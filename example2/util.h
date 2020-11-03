
#ifndef __CUSTOM_UTIL__
#define __CUSTOM_UTIL__

#define min(x, y) ((x) < (y) ? (x) : (y))
#define max(x, y) ((x) > (y) ? (x) : (y))

namespace utils {

    class CommonUtil {
        public:
            CommonUtil();
            int minValue(int *numbers, int size);
            int maxValue(int *numbers, int size);
            double average(int *numbers, int size);
            ~CommonUtil();
    };
}

#endif