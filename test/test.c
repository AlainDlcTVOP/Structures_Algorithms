#include <unity.h>
#include <stack.h>

#ifdef TEENSY
#include <ioport.h>
#include <Arduino.h>
#endif

static volatile uint8_t *leds_address = NULL;

void setUp(void)
{
}

void tearDown(void)
{
}

#ifdef TEENSY
void loop()
{
}

void setup()
{

#else
int main(void)
{

#endif
    UNITY_BEGIN();

#ifdef TEENSY
    UNITY_END();
#else
    return UNITY_END();
#endif
}