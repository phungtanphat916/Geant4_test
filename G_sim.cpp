#include"G4RunManager.hh"
#include"G4UImanager.hh"
#include"G4UIExecutive.hh"
#include"G4VisManager.hh"
#include"G4VisExecutive.hh"

#include"include/construction.hh"
#include"include/physics.hh"
#include"include/action.hh"

int main(int argc, char** argv){
	G4RunManager* run_mng = new G4RunManager();
	run_mng -> SetUserInitialization(new det_con());
	run_mng -> SetUserInitialization(new phys_list());
	run_mng -> SetUserInitialization(new action_init());

	run_mng -> Initialize();

	G4UIExecutive* ui_ext = new G4UIExecutive(argc, argv);

	G4VisManager* vis_mng = new G4VisExecutive();
	vis_mng -> Initialize();

	G4UImanager* ui_mng = G4UImanager::GetUIpointer();
	ui_mng -> ApplyCommand("/vis/open OGL");
	ui_mng -> ApplyCommand("/vis/drawVolume");

	ui_ext -> SessionStart();

	return 0;
}
