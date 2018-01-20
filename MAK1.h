#ifndef MAK1_h
#define MAK1_h

class MAK1{
  public:
    void initialize();
    void stop();
    void left(int angle);
    void right(int angle);
    void forward(int cm);
    void backward(int cm);
};

#endif
