# Atmel AVR - Piscar PORTB5 (Led13 Arduino UNO R3)

[![Build Status](https://travis-ci.org/guilhermerodrigues680/atmel-avr-piscar-PORTB5-led13-arduino.svg?branch=master)](https://travis-ci.org/guilhermerodrigues680/atmel-avr-piscar-PORTB5-led13-arduino)

## Exemplo de uso

```c
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
```

Para mais informações sobre o uso de memória(RAM e Flash) do programa, clique sobre o **BADGE** build no inicio deste README e visualize o log de copilação.

#### Ferramentas ultilizadas
- **Editor de Códigos:** [Visual Studio Code](https://code.visualstudio.com/)
- **IDE:** [PlatformIO IDE for VSCode](https://platformio.org/)