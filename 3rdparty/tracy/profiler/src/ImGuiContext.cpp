#include <imgui.h>
#include "../../server/TracyStorage.hpp"
#include "ImGuiContext.hpp"

ImGuiTracyContext::ImGuiTracyContext()
    : m_iniFilename( tracy::GetSavePath( "imgui.ini" ) )
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = m_iniFilename.c_str();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard | ImGuiConfigFlags_DockingEnable;
}

ImGuiTracyContext::~ImGuiTracyContext()
{
    ImGui::DestroyContext();
}
