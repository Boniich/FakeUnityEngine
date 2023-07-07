#include "MenuBar.h"
#include "imgui/imgui.h"


void MenuBar::addMainMenuBar() {

	ImGui::BeginMainMenuBar();

	this->addFileButton();
	this->addEditButton();

	ImGui::EndMainMenuBar();


}

void MenuBar::addFileButton() {

	if (ImGui::BeginMenu("File")) {
		if (ImGui::MenuItem("New scene", "Ctrl+N")) { /* Do stuff */ }
		if (ImGui::MenuItem("Open scene", "Ctrl+O")) { /* Do stuff */ }

		if (ImGui::BeginMenu("Open Recent Scene")) {
			if (ImGui::MenuItem("Missing or broken path")) { /* Do stuff */ }
			if (ImGui::MenuItem("Splample scene (from scene)")) { /* Do stuff */ }
			ImGui::EndMenu();
		}
		ImGui::Separator();
		if (ImGui::MenuItem("Save", "Ctrl+W")) { /*Do stuff*/ }
		if (ImGui::MenuItem("Save As...", "Ctrl+Shift+S")) { /*Do stuff*/ }
		if (ImGui::MenuItem("Save As...", "Ctrl+Shift+S")) { /*Do stuff*/ }
		ImGui::Separator();
		if (ImGui::MenuItem("New Project...")) { /*Do stuff*/ }
		if (ImGui::MenuItem("Open Project...")) { /*Do stuff*/ }
		if (ImGui::MenuItem("Save Project...")) { /*Do stuff*/ }
		ImGui::Separator();
		if (ImGui::MenuItem("Build Settings...", "Ctrl+Shift+B")) { /*Do stuff*/ }
		if (ImGui::MenuItem("Build and Run", "Ctrl+B")) { /*Do stuff*/ }
		ImGui::Separator();
		if (ImGui::MenuItem("Exit")) { /*Do stuff*/ }
		ImGui::EndMenu();
	}

}

void MenuBar::addEditButton() {
	if (ImGui::BeginMenu("Edit")) {

		if (ImGui::MenuItem("Undo Select Main Camera (GameObject...", "Ctrl+Z")) { /* Do stuff */ }
		if (ImGui::MenuItem("Redo", "Ctrl+Y")) { /* Do stuff */ }
		if (ImGui::MenuItem("Undo History", "Ctrl+U")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Select All", "Ctrl+A")) { /* Do stuff */ }
		if (ImGui::MenuItem("Deselect All", "Ctrl+D")) { /* Do stuff */ }
		if (ImGui::MenuItem("Select Children", "Ctrl+C")) { /* Do stuff */ }
		if (ImGui::MenuItem("Select Prefab Root", "Ctrl+Shift+R")) { /* Do stuff */ }
		if (ImGui::MenuItem("Invert Selection", "Ctrl+I")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Cut", "Ctrl+X")) { /* Do stuff */ }
		if (ImGui::MenuItem("Copy", "Ctrl+C")) { /* Do stuff */ }
		if (ImGui::MenuItem("Paste", "Ctrl+V")) { /* Do stuff */ }
		if (ImGui::MenuItem("Paste As Child", "Ctrl+Shift+V")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Duplicate", "Ctrl+D")) { /* Do stuff */ }
		if (ImGui::MenuItem("Rename")) { /* Do stuff */ }
		if (ImGui::MenuItem("Delete")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Frame Selected", "F")) { /* Do stuff */ }
		if (ImGui::MenuItem("Lock View to Selected", "Ctrl+F")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Find", "Ctrl+F")) { /* Do stuff */ }
		if (ImGui::MenuItem("Search All...", "Ctrl+K")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Play", "Ctrl+P")) { /* Do stuff */ }
		if (ImGui::MenuItem("Pause", "Ctrl+Shift+P")) { /* Do stuff */ }
		if (ImGui::MenuItem("Step", "Ctrl+Alt+P")) { /* Do stuff */ }
		ImGui::Separator();


		if (ImGui::MenuItem("Sign in")) { /* Do stuff */ }
		if (ImGui::MenuItem("Sign out", NULL, false, false)) { /* Do stuff */ }
		if (ImGui::MenuItem("Step", "Ctrl+Alt+P")) { /* Do stuff */ }
		ImGui::Separator();


		if (ImGui::BeginMenu("Selection")) {
			if (ImGui::MenuItem("Load Selection 1")) { /* Do stuff */ }
			if (ImGui::MenuItem("Load Selection 2")) { /* Do stuff */ }
			if (ImGui::MenuItem("Load Selection 3")) { /* Do stuff */ }
			if (ImGui::MenuItem("Save Selection 1")) { /* Do stuff */ }
			if (ImGui::MenuItem("Save Selection 2")) { /* Do stuff */ }
			if (ImGui::MenuItem("Save Selection 3")) { /* Do stuff */ }
			ImGui::EndMenu();
		}
		ImGui::Separator();

		if (ImGui::MenuItem("Project Settings...")) { /* Do stuff */ }
		if (ImGui::MenuItem("Preferences...")) { /* Do stuff */ }
		if (ImGui::MenuItem("Shortcuts...")) { /* Do stuff */ }
		if (ImGui::MenuItem("Clear All PlayerPref...")) { /* Do stuff */ }
		ImGui::Separator();


		if (ImGui::BeginMenu("Graphics Tier")) {
			if (ImGui::MenuItem("Shader Hardward Tier 1")) { /* Do stuff */ }
			if (ImGui::MenuItem("Shader Hardward Tier 2")) { /* Do stuff */ }
			if (ImGui::MenuItem("Shader Hardward Tier 3")) { /* Do stuff */ }
			ImGui::EndMenu();
		}

		ImGui::EndMenu();
	}
}