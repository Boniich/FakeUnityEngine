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

void MenuBar::addCreateList() {
	if (ImGui::MenuItem("Folder")) { /* Do stuff */ }
	this->add2DMenu();
	ImGui::Separator();
	if (ImGui::MenuItem("C# Script")) { /* Do stuff */ }
	
	if (ImGui::BeginMenu("Visual Scripting")) {
		if (ImGui::MenuItem("State Graph")) { /* Do stuff */ }
		if (ImGui::MenuItem("Script Graph")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::BeginMenu("Shader")) {
		if (ImGui::MenuItem("Standard Surface Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Unlit Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Image Effect Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Compute Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Ray Tracing Shader")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::MenuItem("Shader Variant Collection")) { /* Do stuff */ }
	if (ImGui::BeginMenu("Testing")) {
		if (ImGui::MenuItem("Testing Assembly Folder")) { /* Do stuff */ }
		if (ImGui::MenuItem("C# Test Script")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::BeginMenu("Playables")) {
		if (ImGui::MenuItem("Playable Behaviour C# Script")) { /* Do stuff */ }
		if (ImGui::MenuItem("Playable Assets C# Script")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::MenuItem("Assembly Definition")) { /* Do stuff */ }
	if (ImGui::MenuItem("Assembly Definition Reference")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::BeginMenu("Text")) {
		if (ImGui::MenuItem("Fonts Asset")) { /* Do stuff */ }
		if (ImGui::MenuItem("Font Asset Variant")) { /* Do stuff */ }
		ImGui::Separator();
		if (ImGui::MenuItem("Sprite Asset")) { /* Do stuff */ }
		ImGui::Separator();
		if (ImGui::MenuItem("Text StyleSheet")) { /* Do stuff */ }
		ImGui::Separator();
		if (ImGui::MenuItem("Color Gradient")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::BeginMenu("TextMeshPro")) {
		if (ImGui::MenuItem("Font Asset")) { /* Do stuff */ }
		if (ImGui::MenuItem("Font Asset Variant")) { /* Do stuff */ }
		if (ImGui::MenuItem("Sprite Asset")) { /* Do stuff */ }
		if (ImGui::MenuItem("Color Gradient")) { /* Do stuff */ }
		if (ImGui::MenuItem("Style Sheet")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	ImGui::Separator();

	if (ImGui::MenuItem("Scene")) { /* Do stuff */ }
	if (ImGui::MenuItem("Scene Template")) { /* Do stuff */ }
	if (ImGui::MenuItem("Scene Template From Scene")) { /* Do stuff */ }
	if (ImGui::MenuItem("Scene Template Pipeline")) { /* Do stuff */ }
	if (ImGui::MenuItem("Prefab")) { /* Do stuff */ }
	if (ImGui::MenuItem("Prefab Variant")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::MenuItem("Audio Mixer")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::MenuItem("Material")) { /* Do stuff */ }
	if (ImGui::MenuItem("Lens Flare")) { /* Do stuff */ }
	if (ImGui::MenuItem("Render Texture")) { /* Do stuff */ }
	if (ImGui::MenuItem("Lightmap Parameters")) { /* Do stuff */ }
	if (ImGui::MenuItem("Lighting Settings")) { /* Do stuff */ }
	if (ImGui::MenuItem("Custom Render Texture")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::MenuItem("Animator Controller")) { /* Do stuff */ }
	if (ImGui::MenuItem("Animation")) { /* Do stuff */ }
	if (ImGui::MenuItem("Animation Override Controller")) { /* Do stuff */ }
	if (ImGui::MenuItem("Avatar Mask")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::MenuItem("Timeline")) { /* Do stuff */ }
	if (ImGui::MenuItem("Signal")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::MenuItem("Physic Material")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::MenuItem("GUI Skin")) { /* Do stuff */ }
	if (ImGui::MenuItem("Custom Font")) { /* Do stuff */ }
	ImGui::Separator();

	if (ImGui::BeginMenu("Legacy")) {
		if (ImGui::MenuItem("Curbemap")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::BeginMenu("UI Toolkit")) {
		if (ImGui::MenuItem("Style Sheet")) { /* Do stuff */ }
		if (ImGui::MenuItem("TSS Theme File")) { /* Do stuff */ }
		if (ImGui::MenuItem("Default Runtime Theme File")) { /* Do stuff */ }
		if (ImGui::MenuItem("UI Document")) { /* Do stuff */ }
		ImGui::Separator();
		if (ImGui::MenuItem("Panel Settings Assets")) { /* Do stuff */ }
		if (ImGui::MenuItem("Editor Window")) { /* Do stuff */ }
		ImGui::Separator();
		if (ImGui::MenuItem("Text Settings")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	ImGui::Separator();

	if (ImGui::BeginMenu("Search")) {
		if (ImGui::MenuItem("Assets Index")) { /* Do stuff */ }
		if (ImGui::MenuItem("Prefabs Index")) { /* Do stuff */ }
		if (ImGui::MenuItem("Scenes Index")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::MenuItem("Brush")) { /* Do stuff */ }
	if (ImGui::MenuItem("Terrain Layer")) { /* Do stuff */ }
}