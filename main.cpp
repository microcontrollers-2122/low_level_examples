// includes low level peripheral definitions
#include "stm32l476xx.h"
#include "mbed.h"

void led_init(){
    //Enable GPIOA
    RCC->AHB2ENR |= 1;
    //Select PA_5 as output
    GPIOA->MODER |= 1 << 10;
    GPIOA->MODER &= ~(1 <<11);

}

void timer_init(){
    //Enable Timer 7
    RCC->APB1ENR1 |= 1 << 5;
    //Reinitializes Timer 7 after event
    TIM7->EGR |= 1;
    //Set Timer 7 match with fosc = 48MHz
    TIM7->ARR = 47999;
    TIM7->PSC = 999;
}

void led_toggle(){
    // Read output PA_5
    if(GPIOA->ODR & (1 << 5))
    {
        // bit reset
        GPIOA->BSRR |= 1 << 21;
    }
    else 
    {
        // bit set
        GPIOA->BSRR |= 1 << 5;
    }
    
    
}

void timer_start(){
    //enable timer
    TIM7->CR1 |= 1;
}

int main()
{
    led_init();
    timer_init();
    timer_start();

    while(true){
        
        led_toggle();
        //wait here

    }
}
