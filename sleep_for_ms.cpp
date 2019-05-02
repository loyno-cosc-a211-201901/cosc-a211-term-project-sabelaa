// use this code to put a delay of some number of milliseconds
#ifdef _WIN32
#include <windows.h>
void sleep_for_ms (int num_MS) {
   Sleep(num_MS);
}

#elif defined (__APPLE__)
#include <unistd.h>
void sleep_for_ms (int num_MS) {
   usleep (1000 * num_MS);
}

#elif defined (__linux__)
#include <unistd.h>
void sleep_for_ms (int num_MS) {
   usleep (1000 * num_MS);
}
#endif
