#ifndef ABILITY_H
#define ABILITY_H

#include <memory>
#include <hero_game/timercpp.h>
#include <map>
#include <utility>

namespace hero_game {

    enum State
    {
        STATE_READY,
        STATE_COOLDOWN,
        STATE_TOGGLEDON,
        STATE_AIMING
    };

    enum Transition
    {
        TRANSITION_REQUEST,
        TRANSITION_DENY
    };

    typedef std::map<std::pair<State, Transition>, State> StateDiagramm;
    class AbilityState;

    class Ability
    {
        friend class AbilityState;
        friend class Ready;
        friend class Cooldown;
        friend class ToggledOn;

    public:
        Ability(const std::string& name, const unsigned int cooldown);

        ~Ability();

        void request();

    protected:
        StateDiagramm m_stateDiagramm;

    private:
        const std::string m_name;
        std::unique_ptr<AbilityState> m_state;
        Timer m_timer;
        const unsigned int m_cooldownInMillisecs;
    };
}


#endif // ABILITY_H
