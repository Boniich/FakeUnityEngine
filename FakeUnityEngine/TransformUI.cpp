#include "TransformUI.h"
#include "imgui/imgui.h"

TransformUI::TransformUI(){}

TransformUI::~TransformUI(){}

void TransformUI::addTranslationProperty()
{
    ImGui::TableNextRow();
    ImGui::TableNextColumn();
    ImGui::Text("Translation: ");
    ImGui::TableNextColumn();
    ImGui::Text("X");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##XTrans", &XTranslation);
    ImGui::SameLine();
    ImGui::Text("Y");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##YTrans", &YTranslation);
    ImGui::SameLine();
    ImGui::Text("Z");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##ZTrans", &ZTranslation);
}

void TransformUI::addRotationProperty()
{
    ImGui::TableNextRow();
    ImGui::TableNextColumn();
    ImGui::Text("Rotation: ");
    ImGui::TableNextColumn();
    ImGui::Text("X");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##XRotation", &XRotation, 0.0f);
    ImGui::SameLine();
    ImGui::Text("Y");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##YRotation", &YRotation, 0.0f);
    ImGui::SameLine();
    ImGui::Text("Z");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##ZRotation", &ZRotation, 0.0f);
}

void TransformUI::addScaleProperty()
{
    ImGui::TableNextRow();
    ImGui::TableNextColumn();
    ImGui::Text("Scale: ");
    ImGui::TableNextColumn();
    ImGui::Text("X");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##XScale", &XScale, 0.0f);
    ImGui::SameLine();
    ImGui::Text("Y");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##YScale", &YScale, 0.0f);
    ImGui::SameLine();
    ImGui::Text("Z");
    ImGui::SameLine();
    ImGui::SetNextItemWidth(inputWidth);
    ImGui::InputFloat("##ZScale", &ZScale, 0.0f);
}

void TransformUI::addTransformMenu()
{

    ImGuiTableFlags flags = ImGuiTableFlags_Resizable;

    if (ImGui::CollapsingHeader("Transform")) {

        if (ImGui::BeginTable("table2", 2,flags))
        {
            addTranslationProperty();
            addRotationProperty();
            addScaleProperty();

            ImGui::EndTable();
        }
    }

}