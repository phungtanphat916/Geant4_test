#include"../include/physics.hh"

phys_list::phys_list(){
	RegisterPhysics (new G4EmStandardPhysics());
}

phys_list::~phys_list(){}
