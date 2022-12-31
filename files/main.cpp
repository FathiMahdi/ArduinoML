/////////////////////////////////////////////////////
// by: Fathi Mahdi
////////////////////////////////////////////////////////
#define F_CPU 16000000UL // CPU Freq

// include headers
#include <avr/io.h>
#include <util/delay.h>
#include <avr/wdt.h>
#include <math.h>
#include <model.h>

int main()
{
    const int32_t length = 60;
    int32_t values[length] = {...};
    const int32_t predicted_class = model_predict(values, length);
    // loop
    while (1)
    {
        const int32_t predicted_class = model_predict(values, length);
    }

    return 0;
}