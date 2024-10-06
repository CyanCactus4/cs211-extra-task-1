#include <cassert>
#include "extra-task-1.h"
#include <iostream>

void main() {
	assert(seconds_difference(1800.0, 3600.0) == 1800.0);
    assert(seconds_difference(3600.0, 1800.0) == -1800.0);
    assert(seconds_difference(1800.0, 2160.0) == 360.0);
    assert(seconds_difference(1800.0, 1800.0) == 0.0);

    assert(hours_difference(1800.0, 3600.0) == 0.5);
    assert(hours_difference(3600.0, 1800.0) == -0.5);
    assert(hours_difference(1800.0, 2160.0) == 0.1);
    assert(hours_difference(1800.0, 1800.0) == 0.0);
}