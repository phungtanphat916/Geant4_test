#ifndef PHYSICS_HH
#define PHYSICS_HH

#include"G4VUserDetectorConstruction.hh"
#include"G4VPhysicalVolume.hh"
#include"G4LogicalVolume.hh"
#include"G4Box.hh"
#include"G4PVPlacement.hh"
#include"G4NistManager.hh"
#include"G4SystemOfUnits.hh"

class det_con : public G4VUserDetectorConstruction{
	public:
		det_con();
		~det_con();

		virtual G4VPhysicalVolume* Construct();
};

#endif
