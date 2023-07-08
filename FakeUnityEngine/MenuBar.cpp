#include "MenuBar.h"
#include "imgui/imgui.h"


void MenuBar::addMainMenuBar() {

	ImGui::BeginMainMenuBar();

	this->addFileButton();
	this->addEditButton();
	this->addAssetsButton();

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


void MenuBar::addAssetsButton() {
	if(ImGui::BeginMenu("Assets")) {

		if (ImGui::BeginMenu("Create")) {
			this->addCreateList();
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