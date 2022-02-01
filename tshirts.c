#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms >= 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms >= 42 && cms < 90) {
        sizeName = 'L';
    }
    else
    {
    }
    return sizeName;
}

int main() {
    assert(size(37) == 'S');
    assert(size(38) == 'M');
    assert(size(40) == 'M');
    assert(size(40) == 'M');
    assert(size(42) == 'L');
    assert(size(50) == 'L');
    assert(size(800) == '\0');
    printf("All is well (maybe!)\n");
    return 0;
}
