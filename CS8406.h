#ifndef CS8406_h
#define CS8406_h

class CS8406
{
public:
    // I2C register numbers
    const uint8_t CS8406_I2C_REGNUM_CONTROL1 = 0x01;
    const uint8_t CS8406_I2C_REGNUM_CLOCKSRC = 0x04;
    const uint8_t CS8406_I2C_REGNUM_SERIALIN = 0x05;

    // Register default values
    const uint8_t CS8406_I2C_REGVAL_CONTROL1 = 0b00000001;
    const uint8_t CS8406_I2C_REGVAL_CLOCKSRC = 0b01000000;
    const uint8_t CS8406_I2C_REGVAL_SERIALIN = 0b10100000;

    explicit CS8406(const uint8_t address);
    void begin();

private:
    uint8_t _address;
};

#endif
