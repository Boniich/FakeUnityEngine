#include "FileButton.h"
#include "imgui/imgui.h"

using namespace MenuBarSpace;


FileButton::FileButton() {

}

void FileButton::addFileButton() {

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