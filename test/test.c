#include <unity.h>
#include <stack.h>
#include <stdint.h>
#ifdef TEENSY

#endif

Stack sp;
void setUp(void)
{
}

void tearDown(void)
{
}

void test_init()
{
    TEST_ASSERT_EQUAL_UINT8(sp.top, init(sp.top));
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
    RUN_TEST(test_init);
#ifdef TEENSY
    UNITY_END();

#else
    return UNITY_END();
#endif
}