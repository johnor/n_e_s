#pragma once

#include "nes/core/imembank.h"
#include "nes/core/immu.h"

#include <cstdint>
#include <memory>
#include <vector>

namespace n_e_s::core {

class Mmu : public IMmu {
public:
    Mmu();

    void add_mem_bank(std::unique_ptr<IMemBank> mem_bank);

    uint8_t read_byte(uint16_t addr) const override;
    void write_byte(uint16_t addr, uint8_t byte) override;

private:
    IMemBank *get_mem_bank(uint16_t addr) const;

    std::vector<std::unique_ptr<IMemBank>> mem_banks_;
};

} // namespace n_e_s::core
