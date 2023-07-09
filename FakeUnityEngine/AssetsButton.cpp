#include "AssetsButton.h"
#include "imgui/imgui.h"

using namespace MenuBarSpace;

AssetsButton::AssetsButton() {
	_createMenuItem = new CreateMenuItemSpace::CreateMenuItem();
}

void AssetsButton::addAssetsButton() {
	if (ImGui::BeginMenu("Assets")) {

		if (ImGui::BeginMenu("Create")) {
			_createMenuItem->addCreateMenuItem();
			ImGui::EndMenu();
		}
		if (ImGui::MenuItem("Show in Explorer")) { /* Do stuff */ }
		if (ImGui::MenuItem("Open")) { /* Do stuff */ }
		if (ImGui::MenuItem("Delete")) { /* Do stuff */ }
		if (ImGui::MenuItem("Rename")) { /* Do stuff */ }
		if (ImGui::MenuItem("Copy Path", "Alt+Ctrl+C")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Open Scene Additive")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("View in Package Manager")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Import New Asset...")) { /* Do stuff */ }
		if (ImGui::BeginMenu("Import Package")) {
			if (ImGui::MenuItem("Custom Package")) { /* Do stuff */ }
			ImGui::EndMenu();
		}
		if (ImGui::MenuItem("Export Package...")) { /* Do stuff */ }
		if (ImGui::MenuItem("Find Reference in Scene")) { /* Do stuff */ }
		if (ImGui::MenuItem("Select Dependencies")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Refresh", "Ctrl+R")) { /* Do stuff */ }
		if (ImGui::MenuItem("Reimport")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Reimport All")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Extract From Prefab")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Update UXML Schema")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Open C# Project")) { /* Do stuff */ }
		if (ImGui::MenuItem("View in Import Activity Window")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Properties", "Alt+P")) { /* Do stuff */ }

		ImGui::EndMenu();
	}
}