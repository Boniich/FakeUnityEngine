#include "imgui/imgui.h"
#include "imgui/imgui-SFML.h"
#include "MainFacade.h"
#include "Icons/IconsFontAwesome5.h"
#include <SFML/Graphics.hpp>

bool my_tool_active = true;

int main()
{
    ImGui::CreateContext();

    MainFacade _mainFacade;

    float XTranslation = 1.0f;
    float YTranslation = 0.0f;
    float ZTranslation = 0.0f;

    float XRotation = 0.0f;
    float YRotation = 0.0f;
    float ZRotation = 0.0f;

    float XScale = 0.0f;
    float YScale = 0.0f;
    float ZScale = 0.0f;

    float inputWidth = 50;

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    ImGui::SFML::Init(window);


    sf::Clock deltaClock;

    //fonts and icons

    ImGuiIO& io = ImGui::GetIO();

    float baseFontSize = 32.0f; // 13.0f is the size of the default font. Change to the font size you use.
    float iconFontSize = baseFontSize * 2.0f / 3.0f; // FontAwesome fonts need to have their sizes reduced by 2.0f/3.0f in order to align correctly

    static const ImWchar icons_ranges[] = { ICON_MIN_FA, ICON_MAX_16_FA, 0 };
    ImFontConfig icons_config;
    icons_config.MergeMode = true;
    icons_config.PixelSnapH = true;
    icons_config.GlyphMinAdvanceX = iconFontSize;

    io.Fonts->Clear(); // clear fonts if you loaded some before (even if only default one was loaded)
    io.Fonts->AddFontFromFileTTF("Fonts\\Roboto-Regular.ttf", 15.f);
    io.Fonts->AddFontFromFileTTF(FONT_ICON_FILE_NAME_FAS, iconFontSize, &icons_config, icons_ranges);
    ImGui::SFML::UpdateFontTexture(); // important call: updates font texture


    ImGui::NewFrame();
    ImGui::Render();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            ImGui::SFML::ProcessEvent(event);
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        ImGui::ShowDemoWindow();



        _mainFacade.runUI();



        window.clear();



        // renderizamos cosas en el fondo
        
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::EndFrame();
    ImGui::SFML::Shutdown();
    ImGui::DestroyContext();

    return 0;
}