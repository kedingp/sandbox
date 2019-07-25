#ifndef I_STROKABLE_H
#define I_STROKABLE_H

namespace table_tennis
{

    class TableTennisPlayer;

    class I_Strokable
    {
    public:
        I_Strokable();

        virtual ~I_Strokable();

        virtual void stroke() = 0;

        virtual void stroke(TableTennisPlayer* ttPlayer) = 0;
    };
}
#endif // I_STROKABLE_H
