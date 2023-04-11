#include"../include/construction.hh"

det_con::det_con(){}
det_con::~det_con(){}

G4VPhysicalVolume* det_con::Construct(){
	G4NistManager* nist_mng = G4NistManager::Instance();
	G4Material* wor_mat = nist_mng -> FindOrBuildMaterial("G4_Air");
	G4Box* box = new G4Box("Solid World", 1.0*m, 1.0*m, 1.0*m);
	G4LogicalVolume* logic = new G4LogicalVolume(box, wor_mat, "Logic World");
	G4VPhysicalVolume* phys_wor = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logic, "Physics World", 0, 0, 0, 1);
	
	return phys_wor;
}
