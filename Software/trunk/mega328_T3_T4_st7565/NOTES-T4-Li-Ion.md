# T4 chineese LCR meter notes

This is for LCR meter marked QS2015-T4, but should work for other T4
(and may be T3) variants.

## Changes

* Add Li-Ion battery, charger, step-up
* This model of the tester needs internal pullup resistors enabled. They was
  (accidentally?) disabled in svn rev 661 (svn2github rev 90effc4) in
  mega328_T3_T4_st7565/Makefile
* Use smaller font

## HOWTO

* Flash command:

    ```
    avrdude -c usbasp -p m328p -U flash:w:TransistorTester.hex:a -U eeprom:w:TransistorTester.eep:a
    ```

  Fuses should be: HFUSE=0x01, EFUSE=0xD7, LFUSE=0xFF

## References

* [Schematic of the T4 LCR meter (PDF)](http://www.mikrocontroller.net/attachment/228473/TT-CN_T4.PDF)
  from
  [post](http://www.mikrocontroller.net/topic/248078?page=6#3784106)
* [ISP pinout](http://www.eevblog.com/forum/testgear/$20-lcr-esr-transistor-checker-project/?action=dlattach;attach=148776;image)
  and
  [programmer adapter](http://www.eevblog.com/forum/testgear/$20-lcr-esr-transistor-checker-project/msg659867/#msg659867)
