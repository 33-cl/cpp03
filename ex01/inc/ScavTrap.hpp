#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

typedef enum e_mode
{
    DEFAULT,
    GATE_KEEPER
};

class ScavTrap : public ClapTrap
{
    using   ClapTrap::ClapTrap;

    private:
        int _mode;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();


        void    guardGate();
        void    attack(const std::string& target);
};

#endif