#include <iostream>
#include <time.h>

void timer(float seconds) {
    int milli_seconds = 1000 * seconds;
    clock_t start_time = clock();
    while(clock() < start_time + milli_seconds);
}

void begin() {
    std::cout << "loop started";
}

void midden() {
    for (i = 0; i < 10; i++) {
        std::cout << "loop " << i;
        timer(1);
    }
}

void eind() {
    std::cout << "loop finished";
}

int main() {
    begin();
    midden();
    eind();
    return 0;
}
