#include "MenuBar.h"
#include "imgui/imgui.h"

MenuBar::MenuBar() {
	_fileButton = new MenuBarSpace::FileButton();
	_editButton = new MenuBarSpace::EditButton();
	_assetsButton = new MenuBarSpace::AssetsButton();
}

MenuBar::~MenuBar() {
	delete _fileButton;
	delete _editButton;
}

void MenuBar::addMainMenuBar() {

	ImGui::BeginMainMenuBar();

	_fileButton->addFileButton();
	_editButton->addEditButton();
	_assetsButton->addAssetsButton();

	ImGui::EndMainMenuBar();
}

void MenuBar::add2DMenu() {

	if (ImGui::BeginMenu("2D")) {

		if (ImGui::BeginMenu("Sprites")) {
			if (ImGui::MenuItem("Square")) { /* Do stuff */ }
			if (ImGui::MenuItem("Circle")) { /* Do stuff */ }
			if (ImGui::MenuItem("Capsule")) { /* Do stuff */ }
			if (ImGui::MenuItem("Isometric Diamond")) { /* Do stuff */ }
			if (ImGui::MenuItem("Hexagon Flat-Top")) { /* Do stuff */ }
			if (ImGui::MenuItem("Hexagon Pointed-Top")) { /* Do stuff */ }
			if (ImGui::MenuItem("9-Sliced")) { /* Do stuff */ }
			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("Tile Pallete")) {

			if (ImGui::MenuItem("Rectangular")) { /* Do stuff */ }
			if (ImGui::MenuItem("Hexagonal Flat-Top")) { /* Do stuff */ }
			if (ImGui::MenuItem("Hexagon Pointed-Top")) { /* Do stuff */ }
			if (ImGui::MenuItem("Isometric")) { /* Do stuff */ }

			ImGui::EndMenu();
		}
		if (ImGui::MenuItem("Sprite Shape Profile")) { /* Do stuff */ }
		if (ImGui::MenuItem("Phsics Material 2D")) { /* Do stuff */ }
		if (ImGui::MenuItem("Sprite Atlas")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::MenuItem("Sprite Library Asset")) { /* Do stuff */ }
		ImGui::Separator();

		if (ImGui::BeginMenu("Tiles")) {

			if (ImGui::MenuItem("Animeted Tile")) { /* Do stuff */ }
			ImGui::Separator();
			if (ImGui::MenuItem("Rule Tile")) { /* Do stuff */ }
			if (ImGui::MenuItem("Isometric Rule Tile")) { /* Do stuff */ }
			if (ImGui::MenuItem("Hexagonal Rule Tile")) { /* Do stuff */ }
			if (ImGui::MenuItem("Rule Override Tile")) { /* Do stuff */ }
			if (ImGui::MenuItem("Advanced Rule Override Tile")) { /* Do stuff */ }
			if (ImGui::MenuItem("Custom Rule Tile Script")) { /* Do stuff */ }
			ImGui::EndMenu();
		}

		ImGui::EndMenu();
	}

}