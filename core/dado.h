#ifndef DADO_H
#define DADO_H



class Dado
{
public:
    Dado();

    int shuffle();
private:
    int num;
    void srand_();
};

#endif // DADO_H
