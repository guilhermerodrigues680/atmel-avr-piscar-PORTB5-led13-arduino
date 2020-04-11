#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    // Coloca o pino do LED como saida para PORTB5
    DDRB = _BV(PB5);

    while (1)
    {
        _delay_ms(500);

        // Alterna o estado do LED
        PORTB ^= _BV(PB5);
    }

    return 0;
}