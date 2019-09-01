#ifndef I_MOVABLE_H
#define I_MOVABLE_H

namespace table_tennis
{
    class I_Movable
    {
    public:
        I_Movable();
        virtual ~I_Movable();

        virtual void move() = 0;
    };
}

#endif // I_MOVABLE_H
