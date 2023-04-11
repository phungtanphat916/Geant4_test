#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include"G4VModularPhysicsList.hh"
#include"G4EmStandardPhysics.hh"

class phys_list : public G4VModularPhysicsList{
	public:
		phys_list();
		~phys_list();
};

#endif
