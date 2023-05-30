#ifndef RATIONALNUM_H
#define RATIONALNUM_H


class RationalNum
{
    private:
        int numerator,denominator;
    public:
        RationalNum();
        RationalNum(int num);
        RationalNum(int num, int den);
        RationalNum(const RationalNum& other);
        virtual ~RationalNum();
        void setNumerator(int num);
        void setDenominator(int den);
        int getNumerator()const;
        int getDenominator()const;
        int gcd(int a, int b);

        RationalNum operator+(const RationalNum& number);
        RationalNum operator-(const RationalNum& number);
        RationalNum operator*(const RationalNum& number);
        //RationalNum operator+(int number);
        //RationalNum operator-(int number);
        //RationalNum operator*(int number);
        void operator--(int number);
        void operator++(int number);

};

#endif // RATIONALNUM_H
