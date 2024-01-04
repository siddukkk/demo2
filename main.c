#include <stdio.h>
#include  "driver/gpio.h"
#include   "freertos/FreeRTOS.h"
#include "freertos/task.h"


#define LED_PIN1  1
#define LED_PIN2  2

#define LED_PIN3  4
#define LED_PIN4  5

#define LED_PIN5  7
#define LED_PIN6  8

#define LED_PIN7  9
#define LED_PIN8  10

#define LED_PIN9  12
#define LED_PIN10  13

#define LED_PIN11  14
#define LED_PIN12  15

#define LED_PIN13  16
#define LED_PIN14  19

#define LED_PIN15  33
#define LED_PIN16  34

#define LED_PIN17  35
#define LED_PIN18  36

#define LED_PIN19  37
#define LED_PIN20  38

#define PUSH_BUTTON_PIN1  3
#define PUSH_BUTTON_PIN2  6
#define PUSH_BUTTON_PIN3  17
#define PUSH_BUTTON_PIN4  11
#define PUSH_BUTTON_PIN5  18

#define PUSH_BUTTON_PIN6  39
#define PUSH_BUTTON_PIN7  26
#define PUSH_BUTTON_PIN8  40
#define PUSH_BUTTON_PIN9  41
#define PUSH_BUTTON_PIN10  42

void app_main(void)
{
    gpio_set_direction(LED_PIN1, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN1, 1);
    gpio_set_direction(LED_PIN2, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN2, 1);
    gpio_set_direction(LED_PIN3, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN3, 1);
    gpio_set_direction(LED_PIN4, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN4, 1);
    gpio_set_direction(LED_PIN5, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN5, 1);
    gpio_set_direction(LED_PIN6, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN6, 1);
    gpio_set_direction(LED_PIN7, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN7, 1);
    gpio_set_direction(LED_PIN8, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN8, 1);
    gpio_set_direction(LED_PIN9, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN9, 1);
    gpio_set_direction(LED_PIN10, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_PIN10, 1);

    gpio_set_direction(LED_PIN11, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN12, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN13, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN14, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN15, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN16, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN17, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN18, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN19, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN20, GPIO_MODE_OUTPUT);

    gpio_set_direction(PUSH_BUTTON_PIN1, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN2, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN3, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN4, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN5, GPIO_MODE_INPUT);
      
    gpio_set_direction(PUSH_BUTTON_PIN6, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN7, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN8, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN9, GPIO_MODE_INPUT);
    gpio_set_direction(PUSH_BUTTON_PIN10, GPIO_MODE_INPUT);

    while (1)
    {   
        printf("\nheeeloo\n");
          printf("\nheeeloo\n");
            printf("\nheeeloo\n");
                printf("\nheeeloo\n");
        
        if (gpio_get_level(PUSH_BUTTON_PIN1) == 1)
        {
            gpio_set_level(LED_PIN1, 0);
            gpio_set_level(LED_PIN2, 0);
            //printf("\nTurning LED_PIN1 and LED_PIN2 ON.\n");
            
        }
        else
        {
            gpio_set_level(LED_PIN1, 1);
            gpio_set_level(LED_PIN2, 1);
            //printf("\nTurning LED_PIN1 and LED_PIN2 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN2) == 1)
        {
            gpio_set_level(LED_PIN3, 0);
            gpio_set_level(LED_PIN4, 0);
            //printf("\nTurning LED_PIN3 and LED_PIN4 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN3, 1);
            gpio_set_level(LED_PIN4, 1);
            //printf("\nTurning LED_PIN3 and LED_PIN4 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN3) == 1)
        {
            gpio_set_level(LED_PIN5, 0);
            gpio_set_level(LED_PIN6, 0);
              //printf("\nTurning LED_PIN5 and LED_PIN6 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN5, 1);
            gpio_set_level(LED_PIN6, 1);
             //printf("\nTurning LED_PIN5 and LED_PIN6 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN4) == 1)
        {
            gpio_set_level(LED_PIN7, 0);
            gpio_set_level(LED_PIN8, 0);
              //printf("\nTurning LED_PIN7 and LED_PIN8 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN7, 1);
            gpio_set_level(LED_PIN8, 1);
              //printf("\nTurning LED_PIN7 and LED_PIN8 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN5) == 1)
        {
            gpio_set_level(LED_PIN9, 0);
            gpio_set_level(LED_PIN10, 0);
              //printf("\nTurning LED_PIN9 and LED_PIN10 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN9, 1);
            gpio_set_level(LED_PIN10, 1);
             //printf("\nTurning LED_PIN9 and LED_PIN10 ON.\n");
        }
    

       if (gpio_get_level(PUSH_BUTTON_PIN6) == 1)
        {
            gpio_set_level(LED_PIN11, 0);
            gpio_set_level(LED_PIN12, 0);
              printf("\nTurning LED_PIN11 and LED_PIN12 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN11, 1);
            gpio_set_level(LED_PIN12, 1);
               printf("\nTurning LED_PIN11 and LED_PIN12 ON.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN7) == 1)
        {
            gpio_set_level(LED_PIN13, 0);
            gpio_set_level(LED_PIN14, 0);
              printf("\nTurning LED_PIN13 and LED_PIN14 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN13, 1);
            gpio_set_level(LED_PIN14, 1);
               printf("\nTurning LED_PIN13 and LED_PIN14 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN8) == 1)
        {
            gpio_set_level(LED_PIN15, 0);
            gpio_set_level(LED_PIN16, 0);
              printf("\nTurning LED_PIN15 and LED_PIN16 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN15, 1);
            gpio_set_level(LED_PIN16, 1);
               printf("\nTurning LED_PIN15 and LED_PIN16 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN9) == 1)
        {
            gpio_set_level(LED_PIN17, 0);
            gpio_set_level(LED_PIN18, 0);
              printf("\nTurning LED_PIN17 and LED_PIN18 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN17, 1);
            gpio_set_level(LED_PIN18, 1);
              printf("\nTurning LED_PIN17 and LED_PIN18 Off.\n");
        }

        if (gpio_get_level(PUSH_BUTTON_PIN10) == 1)
        {
            gpio_set_level(LED_PIN19, 0);
            gpio_set_level(LED_PIN20, 0);
              printf("\nTurning LED_PIN19 and LED_PIN20 ON.\n");
        }
        else
        {
            gpio_set_level(LED_PIN19, 1);
            gpio_set_level(LED_PIN20, 1);
                printf("\nTurning LED_PIN19 and LED_PIN20 Off.\n");
        }
        
         printf("\nheeeloo\n");
        vTaskDelay(10 / portTICK_PERIOD_MS); // 
    }
}