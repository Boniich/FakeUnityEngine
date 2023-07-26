#include "MainFacade.h"
#include "imgui/imgui.h"

void MainFacade::runUI() {

	_menuBar.addMainMenuBar();
	this->addInspectorWindow();
}

void MainFacade::addInspectorWindow() {
	ImGui::Begin("Inspector");
	_transformUI.addTransformMenu();
	ImGui::End();
	
}