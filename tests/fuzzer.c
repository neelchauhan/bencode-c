#include <stdint.h>
#include "../bencode.h"

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
    struct bencode ctx[1];
    bencode_init(ctx, Data, Size);
    bencode_free(ctx);
    return 0;
}
