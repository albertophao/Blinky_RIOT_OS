#include <stdio.h>
#include "periph/gpio.h"
#include "xtimer.h"

#define BLINK_PERIOD (500 * 1000U)  // Période de clignotement en microsecondes

int main(void) {
    // Initialisation de la LED (PA5 sur la carte NUCLEO-F334R8)
    if (gpio_init(GPIO_PIN(PORT_A, 5), GPIO_OUT)) {
        printf("Erreur d'initialisation de la LED\n");
        return 1;
    }

    while (1) {
        // Inverse l'état de la LED
        gpio_toggle(GPIO_PIN(PORT_A, 5));
        // Attends pendant la période spécifiée
        xtimer_usleep(BLINK_PERIOD);
    }

    return 0;
}
