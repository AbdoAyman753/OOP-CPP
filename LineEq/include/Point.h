#ifndef POINT_H
#define POINT_H


class Point
{
    private:
        float x;
        float y;
    public:
        Point(float x, float y);
        Point(const Point& other);
        virtual ~Point();

        void setX(float x);
        void setY(float y);

        float getX()const;
        float getY()const;


};

#endif // POINT_H
