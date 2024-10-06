#include <cassert>
#include "extra-task-1.h"

void main() {
	assert(seconds_difference(1800.0, 3600.0) == 1800.0);
    assert(seconds_difference(3600.0, 1800.0) == -1800.0);
    assert(seconds_difference(1800.0, 2160.0) == 360.0);
    assert(seconds_difference(1800.0, 1800.0) == 0.0);
    /*
    Return the number of seconds later that a time in seconds
    time_2 is than a time in seconds time_1.

    >>> seconds_difference(1800.0, 3600.0)
    1800.0

    >>> seconds_difference(3600.0, 1800.0)
    -1800.0

    >>> seconds_difference(1800.0, 2160.0)
    360.0

    >>> seconds_difference(1800.0, 1800.0)
    0.0
*/
}