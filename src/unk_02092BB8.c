#include "unk_02092BB8.h"

u16 *sub_02092BB8(HeapID heapId) {
    u16 *memory = AllocFromHeap(heapId, 4);
    sub_02092BD8(memory, 0, 2);
    return memory;
}

void sub_02092BD0(u16 *memory) {
    FreeToHeap(memory);
}

void sub_02092BD8(u16 *a0, u16 a, u16 b) {
    a0[0] = a;
    a0[1] = b;
}

u16 sub_02092BE0(u16 *a0) {
    return a0[1];
}

u16 sub_02092BE4(u16 *a0) {
    return a0[0];
}
