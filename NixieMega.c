/**
 * @package NixieMega
 *
 * @author Leszek Pomianowski
 * @copyright Copyright (c) 2021, Leszek Pomianowski
 * @link https://github.com/Pomianowski/NixieMega
 * @license https://opensource.org/licenses/MIT
 */

    #include <stdlib.h>
    #include <util/delay.h>
    #include <avr/io.h>
    #include <avr/interrupt.h>

    void msec()
    {
        _delay_ms(1);
    }

    void Sleep(int time_ms)
    {
        _delay_ms(time_ms);
    }

    void SetNumber( int number )
    {

    }

    /*
    * Main Function
    */
    int main()
    {
        //do whatever you want

        return 0;
    }