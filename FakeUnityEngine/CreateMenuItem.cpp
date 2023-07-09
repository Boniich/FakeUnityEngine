#include "CreateMenuItem.h"
#include "imgui/imgui.h"

using namespace CreateMenuItemSpace;

void CreateMenuItem::addCreateMenuItem() {
	if (ImGui::MenuItem("Folder")) { /* Do stuff */ }
	//this->add2DMenu();
	ImGui::Separator();
	if (ImGui::MenuItem("C# Script")) { /* Do stuff */ }

	this->addVisualScriptingMenuItems();
	this->addShaderMenuItems();
	this->addTestingMenuItems();
	this->addPlayablesMenuItems();
	this->addAssemblyMenuItems();
	this->addTextMenuItems();
	this->addTextMeshProMenuItems();
	this->addSceneMenuItems();
	this->addAudioMixerMenuItems();
	this->addMaterialMenuitems();
	this->addAnimatorMenuItems();
	this->addTimeLineMenuItems();
	this->addPhysicMaterialMenuItems();
	this->addGuiSkinMenuItems();
	this->addLegacyMenuItems();
	this->addUiToolKitMenuItems();
	this->addSearchMenuItems();

	if (ImGui::MenuItem("Brush")) { /* Do stuff */ }
	if (ImGui::MenuItem("Terrain Layer")) { /* Do stuff */ }
}

void CreateMenuItem::addTimeLineMenuItems() {
	if (ImGui::MenuItem("Timeline")) { /* Do stuff */ }
	if (ImGui::MenuItem("Signal")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addGuiSkinMenuItems() {
	if (ImGui::MenuItem("GUI Skin")) { /* Do stuff */ }
	if (ImGui::MenuItem("Custom Font")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addPhysicMaterialMenuItems() {
	if (ImGui::MenuItem("Physic Material")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addMaterialMenuitems() {
	if (ImGui::MenuItem("Material")) { /* Do stuff */ }
	if (ImGui::MenuItem("Lens Flare")) { /* Do stuff */ }
	if (ImGui::MenuItem("Render Texture")) { /* Do stuff */ }
	if (ImGui::MenuItem("Lightmap Parameters")) { /* Do stuff */ }
	if (ImGui::MenuItem("Lighting Settings")) { /* Do stuff */ }
	if (ImGui::MenuItem("Custom Render Texture")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addAnimatorMenuItems() {
	if (ImGui::MenuItem("Animator Controller")) { /* Do stuff */ }
	if (ImGui::MenuItem("Animation")) { /* Do stuff */ }
	if (ImGui::MenuItem("Animation Override Controller")) { /* Do stuff */ }
	if (ImGui::MenuItem("Avatar Mask")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addAssemblyMenuItems() {
	if (ImGui::MenuItem("Assembly Definition")) { /* Do stuff */ }
	if (ImGui::MenuItem("Assembly Definition Reference")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addPlayablesMenuItems() {
	if (ImGui::BeginMenu("Playables")) {
		if (ImGui::MenuItem("Playable Behaviour C# Script")) { /* Do stuff */ }
		if (ImGui::MenuItem("Playable Assets C# Script")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
}

void CreateMenuItem::addTestingMenuItems() {
	if (ImGui::BeginMenu("Testing")) {
		if (ImGui::MenuItem("Testing Assembly Folder")) { /* Do stuff */ }
		if (ImGui::MenuItem("C# Test Script")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
}

void CreateMenuItem::addShaderMenuItems() {
	if (ImGui::BeginMenu("Shader")) {
		if (ImGui::MenuItem("Standard Surface Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Unlit Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Image Effect Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Compute Shader")) { /* Do stuff */ }
		if (ImGui::MenuItem("Ray Tracing Shader")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	if (ImGui::MenuItem("Shader Variant Collection")) { /* Do stuff */ }
}

void CreateMenuItem::addVisualScriptingMenuItems() {
	if (ImGui::BeginMenu("Visual Scripting")) {
		if (ImGui::MenuItem("State Graph")) { /* Do stuff */ }
		if (ImGui::MenuItem("Script Graph")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
}

void CreateMenuItem::addSceneMenuItems() {
	if (ImGui::MenuItem("Scene")) { /* Do stuff */ }
	if (ImGui::MenuItem("Scene Template")) { /* Do stuff */ }
	if (ImGui::MenuItem("Scene Template From Scene")) { /* Do stuff */ }
	if (ImGui::MenuItem("Scene Template Pipeline")) { /* Do stuff */ }
	if (ImGui::MenuItem("Prefab")) { /* Do stuff */ }
	if (ImGui::MenuItem("Prefab Variant")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addAudioMixerMenuItems() {
	if (ImGui::MenuItem("Audio Mixer")) { /* Do stuff */ }
	ImGui::Separator();
}

void CreateMenuItem::addTextMenuItems() {
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
}

void CreateMenuItem::addTextMeshProMenuItems() {
	if (ImGui::BeginMenu("TextMeshPro")) {
		if (ImGui::MenuItem("Font Asset")) { /* Do stuff */ }
		if (ImGui::MenuItem("Font Asset Variant")) { /* Do stuff */ }
		if (ImGui::MenuItem("Sprite Asset")) { /* Do stuff */ }
		if (ImGui::MenuItem("Color Gradient")) { /* Do stuff */ }
		if (ImGui::MenuItem("Style Sheet")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
	ImGui::Separator();
}

void CreateMenuItem::addLegacyMenuItems() {

	if (ImGui::BeginMenu("Legacy")) {
		if (ImGui::MenuItem("Curbemap")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
}


void CreateMenuItem::addUiToolKitMenuItems() {
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
}


void CreateMenuItem::addSearchMenuItems() {
	if (ImGui::BeginMenu("Search")) {
		if (ImGui::MenuItem("Assets Index")) { /* Do stuff */ }
		if (ImGui::MenuItem("Prefabs Index")) { /* Do stuff */ }
		if (ImGui::MenuItem("Scenes Index")) { /* Do stuff */ }
		ImGui::EndMenu();
	}
}