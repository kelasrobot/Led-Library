#ifndef Led_h
#define Led_h

class Led {
  private:
    int pinLed;
  public:
    Led(int isiPinLed);
    void ON();
    void OFF();
};

#endif