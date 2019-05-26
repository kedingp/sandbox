#ifndef I_STROKABLE_H
#define I_STROKABLE_H

namespace table_tennis
{
    class I_Strokable
    {
    public:
        I_Strokable();

        virtual void stroke() = 0;
    };
}
#endif // I_STROKABLE_H
