#include"../include/generator.hh"
//#define Num_of_part_per_event 10
//#define Photon_Kinetic_in_MeV 1.0

pri_gen::pri_gen(){
	photon_gun = new G4ParticleGun(1);
}

pri_gen::~pri_gen(){
	delete photon_gun;
}

void pri_gen::gen_pries(G4Event* an_event){
	G4ParticleTable* ptc_table = new G4ParticleTable::GetParticleTable();
	G4String ptc_name = "photon";
	G4ParticleDefinition* ptc = ptc_table -> FindParticle("photon");

	G4ThreeVector pos(0., 0., 0.);
	G4ThreeVector mom(0., 0., 1.);

	photon_gun -> SetParticlePosition(pos);
	photon_gun -> SetParticleMomentumDirection(mom);
	photon_gun -> SetParticleMomentum(1.*MeV);
	photon_gun -> SetParticleDefinition(ptc);

	photon_gun -> GeneratePrimaryVertex(an_event);
}
