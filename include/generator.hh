#ifndef GENERATOR_HH
#define GENERATOR_HH

#include"G4VUserPrimaryGeneratorAction.hh"
#include"G4ParticleGun.hh"
#include"G4SystemOfUnits.hh"
#include"G4ParticleTable.hh"

class pri_gen : public G4VUserPrimaryGeneratorAction{
	public:
		pri_gen();
		~pri_gen();

		virtual void gen_pries(G4Event*);

	private:
		G4ParticleGun* photon_gun;
};

#endif
