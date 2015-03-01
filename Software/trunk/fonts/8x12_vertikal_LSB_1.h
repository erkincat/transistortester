// table of the bits for the 8x12 character set
// each byte hold 8 bits of a row, the upper bit is 1, the bit for the 8th line is 128
 #ifdef LCD_CYRILLIC                                      
  #define CHAR_COUNT12 (Cyr_ja + 16)
 #else
  #define CHAR_COUNT12 128
 #endif
const unsigned char PROGMEM font[CHAR_COUNT12][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x00 Resistor3  */
{0xC0,0x60,0x20,0x20,0x20,0x20,0x60,0xC0,
 0x0F,0x00,0x05,0x0C,0x0C,0x05,0x00,0x0F},	/* 0x01 Diode1  */
{0xC0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xC0,
 0x0F,0x0F,0x0A,0x03,0x03,0x0A,0x0F,0x0F},	/* 0x02 Diode2  */
{0x80,0xC0,0x80,0x00,0x80,0xC0,0x80,0x00,
 0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x07,0x00},	/* 0x03 Capacitor  */
{0x00,0x80,0xC0,0xE0,0xC0,0x80,0x00,0x00,
 0x03,0x07,0x0F,0x0F,0x0F,0x07,0x03,0x00},	/* 0x04 Omega  */
{0x00,0x00,0xC0,0xE0,0xE0,0xC0,0x00,0x00,
 0x07,0x07,0x07,0x09,0x09,0x07,0x07,0x07},	/* 0x05 mu  */
{0x00,0x80,0xC0,0xE0,0xE0,0xC0,0x80,0x00,
 0x03,0x07,0x07,0x0F,0x0F,0x07,0x07,0x03},	/* 0x06 Resistor1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x07 Resistor2  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x08  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x09  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0a  */
{0x00,0x00,0xA0,0xA0,0xE0,0x60,0xE0,0x00,
 0x0E,0x0F,0x03,0x03,0x0E,0x0C,0x01,0x00},	/* 0x0b  */
{0x00,0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,
 0x00,0x09,0x0B,0x0E,0x0E,0x0B,0x09,0x00},	/* 0x0c  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x0d  */
{0x00,0xE0,0xE0,0xA0,0xA0,0xA0,0xE0,0xE0,
 0x00,0x0F,0x0F,0x00,0x00,0x08,0x0F,0x0F},	/* 0x0e  */
{0x80,0x80,0x00,0xC0,0xC0,0x00,0x80,0x80,
 0x06,0x0F,0x0F,0x09,0x09,0x0F,0x0F,0x06},	/* 0x0f  */
{0xE0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x0F,0x07,0x07,0x02,0x02,0x00},	/* 0x10  */
{0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0x00,
 0x02,0x02,0x07,0x07,0x0F,0x0F,0x0F,0x00},	/* 0x11  */
{0x00,0x80,0xC0,0xE0,0xE0,0xC0,0x80,0x00,
 0x00,0x08,0x08,0x0F,0x0F,0x08,0x08,0x00},	/* 0x12  */
{0x00,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,
 0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00},	/* 0x13  */
{0xC0,0xE0,0x20,0xE0,0xE0,0x20,0xE0,0xE0,
 0x01,0x03,0x02,0x0F,0x0F,0x00,0x0F,0x0F},	/* 0x14  */
{0x00,0x60,0xE0,0xA0,0x20,0x20,0x60,0x40,
 0x00,0x06,0x0F,0x09,0x09,0x0F,0x06,0x00},	/* 0x15  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00},	/* 0x16  */
{0x00,0x80,0xC0,0xE0,0xE0,0xC0,0x80,0x00,
 0x00,0x08,0x08,0x0F,0x0F,0x08,0x08,0x00},	/* 0x17  */
{0x00,0x80,0xC0,0xE0,0xE0,0xC0,0x80,0x00,
 0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00},	/* 0x18  */
{0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,
 0x00,0x08,0x08,0x0F,0x0F,0x08,0x08,0x00},	/* 0x19  */
{0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,
 0x02,0x02,0x02,0x0A,0x0F,0x07,0x02,0x00},	/* 0x1a  */
{0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,
 0x02,0x07,0x0F,0x0A,0x02,0x02,0x02,0x00},	/* 0x1b  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x08,0x08,0x08,0x08,0x08,0x00},	/* 0x1c  */
{0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,
 0x02,0x07,0x0F,0x02,0x02,0x0F,0x07,0x02},	/* 0x1d  */
{0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,
 0x00,0x0C,0x0F,0x0F,0x0F,0x0C,0x00,0x00},	/* 0x1e  */
{0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,
 0x00,0x03,0x0F,0x0F,0x0F,0x03,0x00,0x00},	/* 0x1f  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x20 ' ' */
{0x00,0xC0,0xE0,0xE0,0xC0,0x00,0x00,0x00,
 0x00,0x01,0x07,0x07,0x01,0x00,0x00,0x00},	/* 0x21 '!' */
{0x00,0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,
 0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00},	/* 0x22 '"' */
{0x80,0xE0,0xE0,0x80,0xE0,0xE0,0x80,0x00,
 0x08,0x0F,0x0F,0x08,0x0F,0x0F,0x08,0x00},	/* 0x23 '#' */
{0x80,0xC0,0x70,0x70,0x40,0x40,0x00,0x00,
 0x01,0x03,0x02,0x02,0x0E,0x0C,0x00,0x00},	/* 0x24 '$' */
{0x80,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
 0x01,0x09,0x0C,0x06,0x03,0x01,0x00,0x00},	/* 0x25 '%' */
{0xC0,0xE0,0x20,0xE0,0xC0,0x00,0x00,0x00,
 0x0E,0x0F,0x03,0x07,0x0E,0x0C,0x06,0x00},	/* 0x26 '&' */
{0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,
 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00},	/* 0x27 ''' */
{0x00,0x00,0x80,0xC0,0x60,0x20,0x00,0x00,
 0x00,0x07,0x0F,0x08,0x00,0x00,0x00,0x00},	/* 0x28 '(' */
{0x00,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,
 0x00,0x00,0x00,0x08,0x0F,0x07,0x00,0x00},	/* 0x29 ')' */
{0x00,0x80,0x80,0x00,0x00,0x80,0x80,0x00,
 0x02,0x0A,0x0F,0x07,0x07,0x0F,0x0A,0x02},	/* 0x2a '*' */
{0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,
 0x00,0x02,0x02,0x0F,0x0F,0x02,0x02,0x00},	/* 0x2b '+' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x2c ',' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},	/* 0x2d '-' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x2e '.' */
{0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x00,
 0x00,0x08,0x0C,0x06,0x03,0x01,0x00,0x00},	/* 0x2f '/' */
{0xC0,0xE0,0x20,0x20,0xA0,0xE0,0xC0,0x00,
 0x0F,0x0F,0x0C,0x07,0x01,0x0F,0x0F,0x00},	/* 0x30 '0' */
{0x80,0x80,0xC0,0xE0,0x00,0x00,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0x31 '1' */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x00,0x08,0x0C,0x06,0x03,0x01,0x00,0x00},	/* 0x32 '2' */
{0x40,0x60,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x00,0x00,0x02,0x02,0x0F,0x0D,0x00,0x00},	/* 0x33 '3' */
{0x00,0x00,0x80,0xC0,0xE0,0xE0,0x00,0x00,
 0x06,0x07,0x05,0x04,0x0F,0x0F,0x04,0x00},	/* 0x34 '4' */
{0xE0,0xE0,0x20,0x20,0x20,0x20,0x00,0x00,
 0x03,0x03,0x02,0x02,0x0E,0x0C,0x00,0x00},	/* 0x35 '5' */
{0x80,0xC0,0x60,0x20,0x20,0x00,0x00,0x00,
 0x0F,0x0F,0x02,0x02,0x0E,0x0C,0x00,0x00},	/* 0x36 '6' */
{0xE0,0xE0,0x20,0x20,0x20,0xE0,0xE0,0x00,
 0x00,0x00,0x08,0x0C,0x06,0x03,0x01,0x00},	/* 0x37 '7' */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x0D,0x0F,0x02,0x02,0x0F,0x0D,0x00,0x00},	/* 0x38 '8' */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x01,0x03,0x02,0x0E,0x0F,0x03,0x00,0x00},	/* 0x39 '9' */
{0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,
 0x00,0x00,0x09,0x09,0x09,0x00,0x00,0x00},	/* 0x3a ':' */
{0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,
 0x00,0x00,0x09,0x09,0x09,0x00,0x00,0x00},	/* 0x3b ';' */
{0x00,0x00,0x80,0xC0,0x60,0x20,0x00,0x00,
 0x02,0x07,0x0D,0x08,0x00,0x00,0x00,0x00},	/* 0x3c '<' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x05,0x05,0x05,0x05,0x05,0x05,0x00},	/* 0x3d '=' */
{0x00,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,
 0x00,0x00,0x00,0x08,0x0D,0x07,0x02,0x00},	/* 0x3e '>' */
{0x40,0x60,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x00,0x00,0x06,0x07,0x01,0x00,0x00,0x00},	/* 0x3f '?' */
{0xC0,0xE0,0x20,0x20,0x20,0xE0,0xC0,0x00,
 0x0F,0x0F,0x00,0x07,0x07,0x07,0x07,0x00},	/* 0x40 '@' */
{0x80,0xC0,0x60,0x60,0xC0,0x80,0x00,0x00,
 0x0F,0x0F,0x04,0x04,0x0F,0x0F,0x00,0x00},	/* 0x41 'A' */
{0x20,0xE0,0xE0,0x20,0x20,0xE0,0xC0,0x00,
 0x00,0x0F,0x0F,0x02,0x02,0x0F,0x0D,0x00},	/* 0x42 'B' */
{0x80,0xC0,0x60,0x20,0x20,0xE0,0xC0,0x00,
 0x0F,0x0F,0x00,0x00,0x00,0x08,0x08,0x00},	/* 0x43 'C' */
{0x20,0xE0,0xE0,0x20,0x60,0xC0,0x80,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x44 'D' */
{0x20,0xE0,0xE0,0x20,0x20,0x20,0x60,0x00,
 0x00,0x0F,0x0F,0x02,0x02,0x07,0x00,0x00},	/* 0x45 'E' */
{0x20,0xE0,0xE0,0x20,0x20,0x60,0xE0,0x00,
 0x00,0x0F,0x0F,0x02,0x02,0x07,0x00,0x00},	/* 0x46 'F' */
{0x80,0xC0,0x60,0x20,0x20,0xE0,0xC0,0x00,
 0x0F,0x0F,0x00,0x00,0x04,0x0C,0x0C,0x00},	/* 0x47 'G' */
{0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,
 0x0F,0x0F,0x02,0x02,0x0F,0x0F,0x00,0x00},	/* 0x48 'H' */
{0x00,0x20,0xE0,0xE0,0x20,0x00,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0x49 'I' */
{0x00,0x00,0x00,0x20,0xE0,0xE0,0x20,0x00,
 0x0C,0x0C,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x4a 'J' */
{0x20,0xE0,0xE0,0x00,0x80,0xE0,0x60,0x00,
 0x00,0x0F,0x0F,0x02,0x0F,0x0D,0x00,0x00},	/* 0x4b 'K' */
{0x20,0xE0,0xE0,0x20,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x08,0x0C,0x00},	/* 0x4c 'L' */
{0xE0,0xE0,0xC0,0x80,0xC0,0xE0,0xE0,0x00,
 0x0F,0x0F,0x01,0x03,0x01,0x0F,0x0F,0x00},	/* 0x4d 'M' */
{0xE0,0xE0,0x80,0x00,0x00,0xE0,0xE0,0x00,
 0x0F,0x0F,0x03,0x07,0x0E,0x0F,0x0F,0x00},	/* 0x4e 'N' */
{0x80,0xC0,0x60,0x20,0x60,0xC0,0x80,0x00,
 0x0F,0x0F,0x00,0x00,0x00,0x0F,0x0F,0x00},	/* 0x4f 'O' */
{0x20,0xE0,0xE0,0x20,0x20,0xE0,0xC0,0x00,
 0x00,0x0F,0x0F,0x02,0x02,0x03,0x01,0x00},	/* 0x50 'P' */
{0x80,0xC0,0x60,0x20,0x60,0xC0,0x80,0x00,
 0x0F,0x0F,0x00,0x08,0x0C,0x0F,0x0F,0x00},	/* 0x51 'Q' */
{0x20,0xE0,0xE0,0x20,0x20,0xE0,0xC0,0x00,
 0x00,0x0F,0x0F,0x02,0x06,0x0F,0x09,0x00},	/* 0x52 'R' */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x09,0x0B,0x02,0x06,0x0C,0x08,0x00,0x00},	/* 0x53 'S' */
{0x60,0x20,0xE0,0xE0,0x20,0x60,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0x54 'T' */
{0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x55 'U' */
{0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x56 'V' */
{0xE0,0xE0,0x00,0x00,0x00,0xE0,0xE0,0x00,
 0x07,0x0F,0x08,0x06,0x08,0x0F,0x07,0x00},	/* 0x57 'W' */
{0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,
 0x08,0x0D,0x07,0x07,0x0D,0x08,0x00,0x00},	/* 0x58 'X' */
{0xE0,0xE0,0x00,0x00,0xE0,0xE0,0x00,0x00,
 0x01,0x03,0x0E,0x0E,0x03,0x01,0x00,0x00},	/* 0x59 'Y' */
{0xE0,0x60,0x20,0xA0,0xE0,0x60,0x60,0x00,
 0x00,0x0C,0x0E,0x03,0x01,0x00,0x08,0x00},	/* 0x5a 'Z' */
{0x00,0x00,0xE0,0xE0,0x20,0x20,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0x5b '[' */
{0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x01,0x03,0x06,0x0C,0x08,0x00,0x00},	/* 0x5c '\' */
{0x00,0x00,0x20,0x20,0xE0,0xE0,0x00,0x00,
 0x00,0x00,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x5d ']' */
{0x80,0xC0,0x60,0x30,0x60,0xC0,0x80,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x5e '^' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x5f '_' */
{0x00,0x00,0x30,0x70,0x40,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x60 '`' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x08,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0x61 'a' */
{0x20,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x01,0x01,0x0F,0x0E,0x00},	/* 0x62 'b' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x03,0x02,0x00,0x00},	/* 0x63 'c' */
{0x00,0x00,0x00,0x20,0xE0,0xE0,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0F,0x00,0x00},	/* 0x64 'd' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x05,0x05,0x07,0x06,0x00,0x00},	/* 0x65 'e' */
{0x00,0xC0,0xE0,0x20,0x60,0x40,0x00,0x00,
 0x02,0x0F,0x0F,0x02,0x02,0x00,0x00,0x00},	/* 0x66 'f' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0E,0x0F,0x01,0x00},	/* 0x67 'g' */
{0x20,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x02,0x01,0x0F,0x0E,0x00},	/* 0x68 'h' */
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,
 0x00,0x01,0x01,0x0F,0x0F,0x00,0x00,0x00},	/* 0x69 'i' */
{0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,
 0x00,0x00,0x01,0x01,0x0F,0x0F,0x00,0x00},	/* 0x6a 'j' */
{0x20,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x04,0x0E,0x0B,0x01,0x00},	/* 0x6b 'k' */
{0x00,0x20,0x20,0xE0,0xE0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00},	/* 0x6c 'l' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x01,0x0F,0x01,0x0F,0x0E,0x00},	/* 0x6d 'm' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0x6e 'n' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0x6f 'o' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x01,0x0F,0x0E,0x01,0x01,0x0F,0x0E,0x00},	/* 0x70 'p' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0E,0x0F,0x01,0x00},	/* 0x71 'q' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x01,0x0F,0x0F,0x04,0x03,0x07,0x06,0x00},	/* 0x72 'r' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x07,0x05,0x09,0x0B,0x02,0x00,0x00},	/* 0x73 's' */
{0x00,0x80,0xC0,0x00,0x00,0x00,0x00,0x00,
 0x01,0x0F,0x0F,0x01,0x01,0x01,0x00,0x00},	/* 0x74 't' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x75 'u' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x76 'v' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x0C,0x00,0x0F,0x0F,0x00},	/* 0x77 'w' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x01,0x03,0x0E,0x0C,0x0E,0x03,0x01,0x00},	/* 0x78 'x' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x79 'y' */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x03,0x09,0x09,0x05,0x07,0x03,0x00,0x00},	/* 0x7a 'z' */
{0x00,0x00,0xC0,0xE0,0x20,0x20,0x00,0x00,
 0x02,0x07,0x0D,0x08,0x00,0x00,0x00,0x00},	/* 0x7b '{' */
{0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x0D,0x0D,0x00,0x00,0x00},	/* 0x7c '|' */
{0x20,0x20,0xE0,0xC0,0x00,0x00,0x00,0x00,
 0x00,0x00,0x08,0x0D,0x07,0x02,0x00,0x00},	/* 0x7d '}' */
{0xC0,0xE0,0x20,0x60,0xC0,0x80,0xE0,0x20,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0x7e '~' */
{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,
 0x0C,0x0E,0x03,0x01,0x03,0x0E,0x0C,0x00},	/* 0x7f  */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x08,0x08,0x00,0x00},	/* 0x80  */
{0x60,0x60,0x00,0x00,0x60,0x60,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x81  */
{0x00,0x00,0x40,0x60,0x30,0x10,0x00,0x00,
 0x0E,0x0F,0x05,0x05,0x07,0x06,0x00,0x00},	/* 0x82  */
{0x40,0x60,0x30,0x30,0x60,0x40,0x00,0x00,
 0x08,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0x83  */
{0x60,0x60,0x00,0x00,0x60,0x60,0x00,0x00,
 0x08,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0x84  */
{0x10,0x30,0x60,0x40,0x00,0x00,0x00,0x00,
 0x08,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0x85  */
{0x00,0x60,0xF0,0x90,0xF0,0x60,0x00,0x00,
 0x09,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0x86  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x03,0x02,0x00,0x00},	/* 0x87  */
{0x40,0x60,0x30,0x30,0x60,0x40,0x00,0x00,
 0x0E,0x0F,0x05,0x05,0x07,0x06,0x00,0x00},	/* 0x88  */
{0x60,0x60,0x00,0x00,0x60,0x60,0x00,0x00,
 0x0E,0x0F,0x05,0x05,0x07,0x06,0x00,0x00},	/* 0x89  */
{0x10,0x30,0x60,0x40,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x05,0x05,0x07,0x06,0x00,0x00},	/* 0x8a  */
{0x00,0x60,0x60,0x00,0x60,0x60,0x00,0x00,
 0x00,0x01,0x01,0x0F,0x0F,0x00,0x00,0x00},	/* 0x8b  */
{0x00,0x40,0x60,0x30,0x60,0x40,0x00,0x00,
 0x00,0x01,0x01,0x0F,0x0F,0x00,0x00,0x00},	/* 0x8c  */
{0x00,0x10,0x30,0x60,0x40,0x00,0x00,0x00,
 0x00,0x01,0x01,0x0F,0x0F,0x00,0x00,0x00},	/* 0x8d  */
{0x20,0x20,0x80,0x80,0x20,0x20,0x00,0x00,
 0x0E,0x0F,0x09,0x09,0x0F,0x0E,0x00,0x00},	/* 0x8e  */
{0x60,0xF0,0x90,0x90,0xF0,0x60,0x00,0x00,
 0x0E,0x0F,0x09,0x09,0x0F,0x0E,0x00,0x00},	/* 0x8f  */
{0x80,0x80,0x80,0xA0,0xB0,0x90,0x00,0x00,
 0x0F,0x0F,0x04,0x04,0x04,0x01,0x00,0x00},	/* 0x90  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x09,0x0D,0x05,0x0F,0x0F,0x05,0x07,0x06},	/* 0x91  */
{0x80,0xC0,0x60,0xE0,0xE0,0x20,0x20,0x00,
 0x0F,0x0F,0x02,0x0F,0x0F,0x02,0x02,0x00},	/* 0x92  */
{0x40,0x60,0x30,0x30,0x60,0x40,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0x93  */
{0x60,0x60,0x00,0x00,0x60,0x60,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0x94  */
{0x10,0x30,0x60,0x40,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0x95  */
{0x40,0x60,0x30,0x30,0x60,0x40,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x96  */
{0x10,0x30,0x60,0x40,0x00,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x97  */
{0x00,0x60,0x60,0x00,0x00,0x60,0x60,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0x98  */
{0x20,0xA0,0x80,0x80,0xA0,0x20,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x99  */
{0xD0,0xD0,0x00,0x00,0xD0,0xD0,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0x9a  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x09,0x05,0x0F,0x0E,0x00,0x00},	/* 0x9b  */
{0x00,0xE0,0xF0,0x10,0x10,0x30,0x20,0x00,
 0x02,0x0F,0x0F,0x02,0x02,0x02,0x00,0x00},	/* 0x9c  */
{0x80,0xC0,0x60,0x20,0xE0,0xC0,0xA0,0x00,
 0x0F,0x0F,0x08,0x07,0x00,0x0F,0x0F,0x00},	/* 0x9d  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x06,0x0C,0x08,0x0C,0x06,0x02,0x00},	/* 0x9e  */
{0x00,0x00,0x00,0xE0,0xF0,0x10,0x30,0x20,
 0x00,0x01,0x01,0x0F,0x0F,0x01,0x01,0x00},	/* 0x9f  */
{0x00,0x00,0x40,0x60,0x30,0x10,0x00,0x00,
 0x08,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0xa0  */
{0x00,0x00,0x40,0x60,0x30,0x10,0x00,0x00,
 0x00,0x01,0x01,0x0F,0x0F,0x00,0x00,0x00},	/* 0xa1  */
{0x00,0x00,0x40,0x60,0x30,0x10,0x00,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0xa2  */
{0x00,0x00,0x40,0x60,0x30,0x10,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xa3  */
{0x40,0x60,0x20,0x60,0x40,0x60,0x20,0x00,
 0x0F,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0xa4  */
{0xA0,0xB0,0x10,0x30,0x20,0xB0,0x90,0x00,
 0x0F,0x0F,0x03,0x06,0x0C,0x0F,0x0F,0x00},	/* 0xa5  */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x04,0x05,0x05,0x05,0x05,0x05,0x05,0x00},	/* 0xa6  */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x04,0x05,0x05,0x05,0x05,0x04,0x04,0x00},	/* 0xa7  */
{0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,
 0x0C,0x0E,0x03,0x01,0x00,0x00,0x00,0x00},	/* 0xa8  */
{0x80,0x40,0xA0,0xA0,0xA0,0x40,0x80,0x00,
 0x0F,0x00,0x0F,0x06,0x0B,0x00,0x0F,0x00},	/* 0xa9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x02,0x0E,0x0E,0x00,0x00},	/* 0xaa  */
{0x40,0xE0,0xE0,0x00,0x80,0xC0,0x60,0x00,
 0x08,0x0D,0x07,0x03,0x05,0x04,0x0C,0x08},	/* 0xab  */
{0x40,0xE0,0xE0,0x00,0x80,0xC0,0x60,0x20,
 0x08,0x0D,0x07,0x0B,0x0D,0x06,0x0E,0x0E},	/* 0xac  */
{0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,
 0x00,0x0C,0x0F,0x0F,0x0C,0x00,0x00,0x00},	/* 0xad  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0C,0x0E,0x03,0x01,0x0C,0x0E,0x03,0x01},	/* 0xae  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x01,0x03,0x0E,0x0C,0x01,0x03,0x0E,0x0C},	/* 0xaf  */
{0x20,0x40,0x90,0x20,0x40,0x90,0x20,0x40,
 0x09,0x02,0x04,0x09,0x02,0x04,0x09,0x02},	/* 0xb0  */
{0xA0,0x50,0xA0,0x50,0xA0,0x50,0xA0,0x50,
 0x0A,0x05,0x0A,0x05,0x0A,0x05,0x0A,0x05},	/* 0xb1  */
{0x60,0xB0,0xD0,0x60,0xB0,0xD0,0x60,0xB0,
 0x0B,0x0D,0x06,0x0B,0x0D,0x06,0x0B,0x0D},	/* 0xb2  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x0F,0x0F,0x00,0x00,0x00},	/* 0xb3  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x02,0x02,0x02,0x0F,0x0F,0x00,0x00,0x00},	/* 0xb4  */
{0x00,0x00,0x80,0xA0,0x30,0x10,0x00,0x00,
 0x0E,0x0F,0x09,0x09,0x0F,0x0E,0x00,0x00},	/* 0xb5  */
{0x20,0x30,0x90,0x90,0x30,0x20,0x00,0x00,
 0x0E,0x0F,0x09,0x09,0x0F,0x0E,0x00,0x00},	/* 0xb6  */
{0x00,0x10,0xB0,0xA0,0x00,0x00,0x00,0x00,
 0x0E,0x0F,0x09,0x09,0x0F,0x0E,0x00,0x00},	/* 0xb7  */
{0x80,0x40,0xA0,0xA0,0xA0,0x40,0x80,0x00,
 0x0F,0x00,0x0F,0x08,0x08,0x00,0x0F,0x00},	/* 0xb8  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x09,0x09,0x09,0x00,0x00,0x0F,0x0F,0x00},	/* 0xb9  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0xba  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x09,0x09,0x09,0x01,0x01,0x0F,0x0F,0x00},	/* 0xbb  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x09,0x09,0x09,0x08,0x08,0x0F,0x0F,0x00},	/* 0xbc  */
{0x00,0x80,0xE0,0xE0,0x80,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x09,0x09,0x00,0x00},	/* 0xbd  */
{0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,0x00,
 0x0A,0x0B,0x0F,0x0F,0x0B,0x0A,0x00,0x00},	/* 0xbe  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x0E,0x0E,0x00,0x00,0x00},	/* 0xbf  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x03,0x03,0x02,0x02,0x02},	/* 0xc0  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x02,0x02,0x02,0x03,0x03,0x02,0x02,0x02},	/* 0xc1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x0E,0x0E,0x02,0x02,0x02},	/* 0xc2  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x0F,0x0F,0x02,0x02,0x02},	/* 0xc3  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02},	/* 0xc4  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x02,0x02,0x02,0x0F,0x0F,0x02,0x02,0x02},	/* 0xc5  */
{0x40,0x60,0x20,0x60,0x40,0x60,0x20,0x00,
 0x08,0x0D,0x05,0x05,0x0F,0x0E,0x00,0x00},	/* 0xc6  */
{0x20,0x30,0x90,0xB0,0x20,0x30,0x10,0x00,
 0x0E,0x0F,0x09,0x09,0x0F,0x0E,0x00,0x00},	/* 0xc7  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x00,0x0F,0x0F,0x08,0x08,0x09,0x09,0x09},	/* 0xc8  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x01,0x01,0x09,0x09,0x09},	/* 0xc9  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x09,0x09,0x09,0x08,0x08,0x09,0x09,0x09},	/* 0xca  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x09,0x09,0x09,0x01,0x01,0x09,0x09,0x09},	/* 0xcb  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x09,0x09,0x09},	/* 0xcc  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09},	/* 0xcd  */
{0x00,0xF0,0xF0,0x00,0x00,0xF0,0xF0,0x00,
 0x09,0x09,0x09,0x00,0x00,0x09,0x09,0x09},	/* 0xce  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x0E,0x0C,0x04,0x0C,0x0E,0x02,0x00},	/* 0xcf  */
{0x50,0x50,0x20,0x60,0xD0,0x90,0x00,0x00,
 0x0C,0x0E,0x02,0x02,0x02,0x0F,0x0F,0x00},	/* 0xd0  */
{0x20,0xE0,0xE0,0x20,0x60,0xC0,0x80,0x00,
 0x02,0x0F,0x0F,0x02,0x00,0x0F,0x0F,0x00},	/* 0xd1  */
{0xA0,0xB0,0x90,0x90,0xB0,0xA0,0x00,0x00,
 0x0F,0x0F,0x04,0x04,0x04,0x01,0x00,0x00},	/* 0xd2  */
{0xA0,0xA0,0x80,0x80,0xA0,0xA0,0x00,0x00,
 0x0F,0x0F,0x04,0x04,0x04,0x01,0x00,0x00},	/* 0xd3  */
{0x80,0x90,0xB0,0xA0,0x80,0x80,0x00,0x00,
 0x0F,0x0F,0x04,0x04,0x04,0x01,0x00,0x00},	/* 0xd4  */
{0x20,0x20,0xE0,0xE0,0x00,0x00,0x00,0x00,
 0x02,0x02,0x03,0x03,0x02,0x02,0x00,0x00},	/* 0xd5  */
{0x00,0x80,0xA0,0xB0,0x90,0x00,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0xd6  */
{0x20,0xB0,0x90,0x90,0xB0,0x20,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0xd7  */
{0x20,0xA0,0x80,0x80,0xA0,0x20,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0xd8  */
{0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,
 0x02,0x02,0x02,0x03,0x03,0x00,0x00,0x00},	/* 0xd9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x0E,0x0E,0x02,0x02,0x02},	/* 0xda  */
{0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,
 0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F},	/* 0xdb  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C},	/* 0xdc  */
{0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,
 0x00,0x00,0x00,0x0D,0x0D,0x00,0x00,0x00},	/* 0xdd  */
{0x00,0x90,0xB0,0xA0,0x80,0x00,0x00,0x00,
 0x00,0x00,0x0F,0x0F,0x00,0x00,0x00,0x00},	/* 0xde  */
{0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,
 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03},	/* 0xdf  */
{0x00,0x80,0xA0,0xB0,0x90,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xe0  */
{0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,0x00,
 0x0F,0x0F,0x00,0x01,0x0F,0x0E,0x00,0x00},	/* 0xe1  */
{0x20,0xB0,0x90,0x90,0xB0,0x20,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xe2  */
{0x00,0x90,0xB0,0xA0,0x80,0x00,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xe3  */
{0x40,0x60,0x20,0x60,0x40,0x60,0x20,0x00,
 0x0E,0x0F,0x01,0x01,0x0F,0x0E,0x00,0x00},	/* 0xe4  */
{0x20,0xB0,0x90,0xB0,0xA0,0x30,0x10,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xe5  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0xe6  */
{0x40,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,
 0x00,0x0F,0x0F,0x09,0x09,0x0F,0x06,0x00},	/* 0xe7  */
{0x20,0xE0,0xE0,0xA0,0x80,0x80,0x00,0x00,
 0x00,0x0F,0x0F,0x08,0x08,0x0F,0x07,0x00},	/* 0xe8  */
{0x80,0x80,0x20,0x30,0x90,0x80,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xe9  */
{0xA0,0xB0,0x10,0x10,0xB0,0xA0,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xea  */
{0x80,0x90,0x30,0x20,0x80,0x80,0x00,0x00,
 0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00},	/* 0xeb  */
{0x00,0x00,0x00,0x40,0x60,0x30,0x10,0x00,
 0x00,0x0F,0x0F,0x00,0x00,0x0F,0x0F,0x00},	/* 0xec  */
{0x80,0x80,0x20,0x30,0x90,0x80,0x00,0x00,
 0x03,0x07,0x0C,0x0C,0x07,0x03,0x00,0x00},	/* 0xed  */
{0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xee  */
{0x00,0x00,0x40,0x60,0x30,0x10,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xef  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00},	/* 0xf0  */
{0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,
 0x01,0x01,0x07,0x07,0x01,0x01,0x00,0x00},	/* 0xf1  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00},	/* 0xf2  */
{0x10,0x50,0xF0,0xA0,0x80,0xC0,0x60,0x20,
 0x09,0x0D,0x07,0x0B,0x0D,0x06,0x0E,0x0E},	/* 0xf3  */
{0xC0,0xE0,0x20,0xE0,0xE0,0x20,0xE0,0xE0,
 0x01,0x03,0x02,0x0F,0x0F,0x00,0x0F,0x0F},	/* 0xf4  */
{0x00,0x60,0xE0,0xA0,0x20,0x20,0x60,0x40,
 0x00,0x06,0x0F,0x09,0x09,0x0F,0x06,0x00},	/* 0xf5  */
{0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,
 0x02,0x02,0x0A,0x0A,0x02,0x02,0x00,0x00},	/* 0xf6  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf7  */
{0x00,0xC0,0xE0,0x20,0x20,0xE0,0xC0,0x00,
 0x00,0x01,0x03,0x02,0x02,0x03,0x01,0x00},	/* 0xf8  */
{0x20,0x20,0x00,0x00,0x20,0x20,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	/* 0xf9  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x02,0x02,0x00,0x00,0x00},	/* 0xfa  */
{0x00,0x40,0xE0,0xE0,0x00,0x00,0x00,0x00,
 0x00,0x02,0x03,0x03,0x02,0x00,0x00,0x00},	/* 0xfb  */
{0x00,0x20,0xA0,0xA0,0xE0,0x40,0x00,0x00,
 0x00,0x02,0x02,0x02,0x03,0x01,0x00,0x00},	/* 0xfc  */
{0x00,0x20,0x20,0xA0,0xE0,0x40,0x00,0x00,
 0x00,0x02,0x03,0x03,0x02,0x02,0x00,0x00},	/* 0xfd  */
{0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,
 0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00},	/* 0xfe  */
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} 	/* 0xff  */
};