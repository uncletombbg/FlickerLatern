#include <avr/io.h>

/*
* This demonstrate how to use the avr_mcu_section.h file
* The macro adds a section to the ELF file with useful
* information for the simulator
*/
#include "avr_mcu_section.h"
AVR_MCU(F_CPU, "attiny13");

const struct avr_mmcu_vcd_trace_t _mytrace[] _MMCU_ = {
 { AVR_MCU_VCD_SYMBOL("DDRB"), .what = (void*)&DDRB, },
 { AVR_MCU_VCD_SYMBOL("PORTB"), .what = (void*)&PORTB, },
// { AVR_MCU_VCD_SYMBOL("TCCR0B"), .what = (void*)&TCCR0B, },
// { AVR_MCU_VCD_SYMBOL("TCCR0A"), .what = (void*)&TCCR0A, },
// { AVR_MCU_VCD_SYMBOL("TCNT0"), .what = (void*)&TCNT0, },
// { AVR_MCU_VCD_SYMBOL("OCR0A"), .what = (void*)&OCR0A, },
};

int main(void)
{
    return 1;
}
