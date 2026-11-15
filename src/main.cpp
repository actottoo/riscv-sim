#include <cstdint>
#include <cstdio>
#include <iostream>

uint32_t get_opcode(uint32_t inst) {
    return inst & 0x7F;
}

uint32_t get_rd(uint32_t inst){
    return ( inst >> 7 ) & 0x1F;
}

uint32_t get_funct3(uint32_t inst){
    return ( inst >> 12 ) & 0x7;
}

int main(){
    uint32_t inst;
    while (std::cin >> std::hex >> inst) {
        printf("inst  = 0x%08X\n", inst);
        printf("opcode = 0x%02X\n", get_opcode(inst));
        printf("rd =  x%u\n", get_rd(inst));
        printf("funct3 = %u\n", get_funct3(inst));
        printf("---\n");

    }
    return 0;
}