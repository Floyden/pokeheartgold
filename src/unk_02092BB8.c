#include "unk_02092BB8.h"

u16 *FieldSystem_UnkSubA8_Alloc(HeapID heapId) {
    u16 *memory = AllocFromHeap(heapId, 4);
    FieldSystem_UnkSubA8_Init(memory, 0, 2);
    return memory;
}

void FieldSystem_UnkSubA8_Free(u16 *memory) {
    FreeToHeap(memory);
}

void FieldSystem_UnkSubA8_Init(u16 *a0, u16 a, u16 b) {
    a0[0] = a;
    a0[1] = b;
}

u16 FieldSystem_UnkSubA8_Get1(u16 *a0) {
    return a0[1];
}

u16 FieldSystem_UnkSubA8_Get0(u16 *a0) {
    return a0[0];
}
