#include "menu.h"

const char CWAether[29] = "camo_zm_t9mastery_darkmatter";
const char CWUltra[30] = "camo_mp_t9mastery_darkmatter";
const char CWGold[24] = "camo_mp_t9mastery_gold";
const char CWDiamond[27] = "camo_mp_t9mastery_diamond";
const char CWPDiamond[27] = "camo_zm_t9mastery_diamond";
const char CW_Reset[19] = "camo_mp_t9tier1_01";
const char Cherry[19] = "camo_mp_t9tier5_05";

const char Damascus[9] = "camo_11c";
const char Obisidian[9] = "camo_11d";
const char Gold[12] = "camo_11a";
const char MW_Reset[9] = "camo_01a";
const char MW_Diamond[9] = "camo_11b";

const char VGGold[12] = "s4_camo_11a";
const char VGDiamond[12] = "s4_camo_11b";
const char VGAtomic[12] = "s4_camo_11c";
const char VGGoldenViper[15] = "s4_camo_11a_zm";
const char VGPlagueDiamond[15] = "s4_camo_11b_zm";
const char VGDarkAether[15] = "s4_camo_11c_zm";
const char VG_Reset[12] = "s4_camo_01a";
const char ZM_Reset[128] = "s4_camo_01a_zm";
const char Overkill[22] = "specialty_munitions_2";
const char Ghost[20] = "specialty_guerrilla";
const char DoubleTime[17] = "specialty_hustle";
const char Spotter[25] = "specialty_tactical_recon";
const char BattleHardened[21] = "specialty_tac_resist";
const char KillChain[22] = "specialty_heavy_metal";
const char Scavenger[24] = "pecialty_scavenger_plus";
const char Shrapnel[25] = "specialty_extra_shrapnel";
const char HighAlert[23] = "specialty_surveillance";
const char TuneUp[19] = "specialty_tune_up";
const char Restock[18] = "specialty_restock";
const char ColdBlooded[21] = "specialty_covert_ops";
const char EOD[15] = "specialty_eod";
const char Tracker[21] = "specialty_huntmaster";
const char BountyHunter[20] = "specialty_mercenary";
const char Amped[18] = "specialty_warhead";
const char Hardline[19] = "specialty_hardline";
const char QuickFix[20] = "specialty_quick_fix";
const char PointMan[21] = "specialty_strategist";
const char CombatScout[27] = "specialty_br_advancedscout";
const char Tempered[24] = "specialty_br_reinforced";


ImFont* MainCaps;
ImFont* Main;
ImFont* FMenu;
float color_menu[4]{ 2 / 255.f, 222 / 255.f , 24 / 255.f, 1.0f };
char customtag[5] = "";



void cMenu::DrawMenu()
{
	
	ImVec4* colors = ImGui::GetStyle().Colors;
	
	colors[ImGuiCol_FrameBg] =				 ImColor(37, 40, 47, 255);
	colors[ImGuiCol_CheckMark] =             ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.0f);
	colors[ImGuiCol_Header] =                ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.0f);
	colors[ImGuiCol_HeaderHovered] =         ImVec4(color_menu[0], color_menu[1], color_menu[2], 0.86f);
	colors[ImGuiCol_HeaderActive] =          ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.00f);
	colors[ImGuiCol_SliderGrab] =            ImVec4(color_menu[0], color_menu[1], color_menu[2], 0.74f);
	colors[ImGuiCol_SliderGrabActive] =      ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.00f);
	colors[ImGuiCol_ScrollbarGrab] =         ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] =  ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] =   ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.00f);
	colors[ImGuiCol_Button] =                ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.00f);
	ImGui::SetNextWindowSize({ 490,640 });
	ImGuiStyle* style = &ImGui::GetStyle();
	style->FramePadding = ImVec2(4, 2);
	style->ItemSpacing = ImVec2(10, 2);
	style->IndentSpacing = 12;
	style->ScrollbarSize = 10;

	style->WindowRounding = 4;
	style->FrameRounding = 4;
	style->PopupRounding = 4;
	style->ScrollbarRounding = 6;
	style->GrabRounding = 4;
	style->TabRounding = 4;

	style->WindowTitleAlign = ImVec2(0.5f, 0.5f);
	style->WindowMenuButtonPosition = ImGuiDir_Right;
	style->DisplaySafeAreaPadding = ImVec2(4, 4);
	if (ImGui::Begin("NXT-G3N MINI AIO - FREE", &g_vars->msettings.b_menuEnable, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse))
	{
		ImGui::PushFont(MainCaps);
		if (ImGui::BeginChild("Line", ImVec2(-1, 25), false, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize |
			ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse)) {

			ImVec2 p = ImGui::GetCursorScreenPos();
			

			ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(p.x, p.y + 3),
				ImVec2(p.x + ImGui::GetWindowWidth(), p.y + -2), ImColor(color_menu[0], color_menu[1], color_menu[2]));

			ImGui::GetWindowDrawList()->AddRectFilledMultiColor(ImVec2(p.x, p.y + 3),
				ImVec2(p.x + ImGui::GetWindowWidth() / 2, p.y + -3), ImColor(0, 0, 0, 125), ImColor(0, 0, 0, 15), ImColor(0, 0, 0, 15), ImColor(0, 0, 0, 125));

			ImGui::GetWindowDrawList()->AddRectFilledMultiColor(ImVec2(p.x + ImGui::GetWindowWidth() / 2, p.y + 3),
				ImVec2(p.x + ImGui::GetWindowWidth(), p.y + -3), ImColor(0, 0, 0, 15), ImColor(0, 0, 0, 125), ImColor(0, 0, 0, 125), ImColor(0, 0, 0, 15));

			ImGui::GetWindowDrawList()->AddLine(ImVec2(p.x, p.y + 2), ImVec2(p.x + ImGui::GetWindowWidth(), p.y + 2), ImColor(0, 0, 0, 150));
			
			ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 5);
			ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize("NXT-G3N MINI AIO - FREE").x) / 2);
			ImGui::TextColored(ImVec4(color_menu[0], color_menu[1], color_menu[2], 1.0f), "NXT-G3N MINI AIO - FREE");
		}
		ImGui::EndChild();
		ImGui::PopFont();

		ImGui::PushFont(FMenu);
		
		ImGui::BeginGroup(); {
			
			ImGui::BeginChild("##LAYOUT", ImVec2(0, 0)); {
				ImGui::Dummy(ImVec2(0.0f, 5.0f));
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Dummy(ImVec2(0.0f, 1.0f));

				ImGui::Text(xorstr_("REMINDER THIS IS FREE DO NOT PAY FOR THIS"), &g_vars->msettings.b_fov);
				ImGui::Text(xorstr_("THE REAL NXTG3N#4198"), &g_vars->msettings.b_fov);
				ImGui::Checkbox(xorstr_("FOV "), &g_vars->msettings.b_fov);
				if (g_vars->msettings.b_fov) {
					dvar_set2("NSSLSNKPN", g_vars->msettings.f_fov);
				}
				ImGui::SameLine();
				ImGui::SliderFloat(xorstr_("##FOVSLIDER"), &g_vars->msettings.f_fov, 1.0f, 2.0f, "%.1f");
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Checkbox(xorstr_("Mini Map "), &g_vars->msettings.b_map);
				if (g_vars->msettings.b_map) {
					dvar_set2("MKMRRLNRTM", g_vars->msettings.f_map);
				}
				ImGui::SameLine();
				ImGui::SliderFloat(xorstr_("##MAPSLIDER"), &g_vars->msettings.f_map, 1.0f, 2.0f, "%.1f");
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Checkbox(xorstr_("Max Bright "), &g_vars->msettings.b_brightmax);
				if (g_vars->msettings.b_brightmax) {
					dvar_set2("NQKKOONQPR", 0);
					dvar_set2("MTLMSQMNTR", 0);
					dvar_set2("RNPPKQOTN", 0);
					dvar_set2("LKOLRONRNQ", 0);
					dvar_set2("LTOKRMRTMM", 0);
				}
				else
				{
					dvar_set2("NQKKOONQPR", 1);
					dvar_set2("MTLMSQMNTR", 1);
					dvar_set2("RNPPKQOTN", 1);
					dvar_set2("LKOLRONRNQ", 1);
					dvar_set2("LTOKRMRTMM", 1);
				}
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Checkbox(xorstr_("Third Person "), &g_vars->msettings.b_thirdperson);
				if (g_vars->msettings.b_thirdperson)
				{
					dvar_set2("NOSLRNTRKL", 1);
				}
				else
				{
					dvar_set2("NOSLRNTRKL", 0);
				}

				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Checkbox(xorstr_("No Flash Bangs "), &g_vars->msettings.b_no_flashbang);
				if (g_vars->msettings.b_no_flashbang)
				{
					dvar_set2("cg_drawShellshock", 0);
				}
				else
				{
					dvar_set2("cg_drawShellshock", 1);
				}
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				/*ImGui::Checkbox(xorstr_("No Recoil "), &NOREC);			
				ImGui::Dummy(ImVec2(0.0f, 1.0f));*/
				ImGui::Checkbox(xorstr_("Unlimited Sprint "), &g_vars->msettings.b_sprint);
				if (g_vars->msettings.b_sprint)
				{
					dvar_set2("NNQTKSTRPK", 20);
					dvar_set2("MSOOMPMPQS", 1);
				}
				else
				{
					dvar_set2("MSOOMPMPQS", 0);
				}
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Checkbox(xorstr_("Heartcheat Sensor "), &g_vars->msettings.b_heartcheat);
				if (g_vars->msettings.b_heartcheat)
				{
					dvar_set2("NSKNMSMOLP", 2);
					dvar_set2("NLLRSSOQMQ", 10000);
				}
				else
				{
					dvar_set2("NSKNMSMOLP", 5);
					dvar_set2("NLLRSSOQMQ", 500);
				}
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				if (ImGui::Button(xorstr_("Skip Tutorial"), ImVec2(150, 20)))
				{
					dvar_set2(xorstr_("LSPSKLPNQT"), 1);
				}
				ImGui::SameLine();
				if (ImGui::Button(xorstr_("Start Caldera Private Match"), ImVec2(150, 20)))
				{
					dvar_set2(xorstr_("LOQQOSNQKN"), 1);
					dvar_set2(xorstr_("PKMLMMTSN"), 1);
				}
				ImGui::SameLine();
				if (ImGui::Button(xorstr_("FPS Boost"), ImVec2(150, 20)))
				{
					dvar_set2("OPOTTRRNQ", 0);
					dvar_set2("NNRQTQNLRL", 0);
					dvar_set2("NNTOQLMSLO", 3);
					dvar_set2("NTROOKOSPM", 3);
					dvar_set2("NNKRMTSNPL", 0);
					dvar_set2("MOLLKMTMRS", 0);
					dvar_set2("MQOPRPQLQL", 0);
					dvar_set2("NLNKQNROQM", 0);
					dvar_set2("LTOKRMRTMM", 0);
				}
				ImGui::SameLine();
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				ImGui::Separator();
				ImGui::Dummy(ImVec2(0.0f, 1.0f));
				if (ImGui::Button(xorstr_("Unlock All"), ImVec2(-1, 20)))
				{
					unlock();
				}
				ImGui::Spacing();

				ImGui::TextDisabled(xorstr_(" Make sure you have the first camo equipped."));
				static const char* items[] = { "Atomic(VG)", "Diamond(VG)", "Gold(VG)" ,"GoldenViper(VG)", "PlagueDiamond(VG)", "DarkAether(VG)", "DarkMatter(CW)", "DarkAether(CW)", "Diamond(CW)", "Gold(CW)", "PinkDiamond(CW)", "CherryBlossom(CW)","Reset"};
				static const char* current_item = "Select Camo";

				if (ImGui::BeginCombo(xorstr_("##combo"), current_item)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(items); n++)
					{
						bool is_selected = (current_item == items[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(items[n], is_selected))
							current_item = items[n];
						if (is_selected)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}
				ImGui::SameLine();
				if (ImGui::Button(xorstr_("Change MW Camo"), ImVec2(150, 20))) {
				    
					g_vars->goffsets.mwcamoAddr = utility::PointerChain(g_vars->hProc, g_vars->baseModule + g_vars->goffsets.camoAddr, { 0x1830, 0x3CC2 });
					if (current_item == "Atomic(VG)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&VGAtomic, sizeof(VGAtomic), g_vars->hProc);

					if (current_item == "Diamond(VG)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&VGDiamond, sizeof(VGDiamond), g_vars->hProc);

					if (current_item == "Gold(VG)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&VGGold, sizeof(VGGold), g_vars->hProc);

					if(current_item == "GoldenViper(VG)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&VGGoldenViper, sizeof(VGGoldenViper), g_vars->hProc);

					if (current_item == "PlagueDiamond(VG)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&VGPlagueDiamond, sizeof(VGPlagueDiamond), g_vars->hProc);

					if (current_item == "DarkAether(VG)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&VGDarkAether, sizeof(VGDarkAether), g_vars->hProc);

					if (current_item == "DarkMatter(CW)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&CWUltra, sizeof(CWUltra), g_vars->hProc);

					if (current_item == "DarkAether(CW)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&CWAether, sizeof(CWAether), g_vars->hProc);

					if (current_item == "Diamond(CW)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&CWDiamond, sizeof(CWDiamond), g_vars->hProc);

					if (current_item == "PinkDiamond(CW)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&CWPDiamond, sizeof(CWPDiamond), g_vars->hProc);

					if (current_item == "Gold(CW)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&CWGold, sizeof(CWGold), g_vars->hProc);

					if (current_item == "CherryBlossom(CW)")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&Cherry, sizeof(Cherry), g_vars->hProc);

					if (current_item == "Reset")
						utility::Write((BYTE*)g_vars->goffsets.mwcamoAddr, (BYTE*)&MW_Reset, sizeof(MW_Reset), g_vars->hProc);
				}
				ImGui::Spacing();
				static const char* items2[] = { "Atomic(VG)", "Diamond(VG)", "Gold(VG)" ,"GoldenViper(VG)", "PlagueDiamond(VG)", "DarkAether(VG)",  "Damascus(MW)", "Obsidian(MW)", "Diamond(MW)", "Gold(MW)", "PinkDiamond(CW)", "DarkAether(CW)","Reset" };
				static const char* current_item2 = "Select Camo";

				if (ImGui::BeginCombo("##combo2", current_item2)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(items2); n++)
					{
						bool is_selected2 = (current_item2 == items2[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(items2[n], is_selected2))
							current_item2 = items2[n];
						if (is_selected2)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}
				ImGui::SameLine();
				if (ImGui::Button(xorstr_("Change CW Camo"), ImVec2(150, 20))) {
					g_vars->goffsets.cwcamoAddr = utility::PointerChain(g_vars->hProc, g_vars->baseModule + g_vars->goffsets.camoAddr, { 0x1830, 0xB3E53 });
					if (current_item2 == "Atomic(VG)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&VGAtomic, sizeof(VGAtomic), g_vars->hProc);

					if (current_item2 == "Diamond(VG)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&VGDiamond, sizeof(VGDiamond), g_vars->hProc);

					if (current_item2 == "Gold(VG)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&VGGold, sizeof(VGGold), g_vars->hProc);

					if (current_item2 == "GoldenViper(VG)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&VGGoldenViper, sizeof(VGGoldenViper), g_vars->hProc);

					if (current_item2 == "PlagueDiamond(VG)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&VGPlagueDiamond, sizeof(VGPlagueDiamond), g_vars->hProc);

					if (current_item2 == "DarkAether(VG)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&VGDarkAether, sizeof(VGDarkAether), g_vars->hProc);

					if (current_item2 == "Damascus(MW)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&Damascus, sizeof(Damascus), g_vars->hProc);

					if (current_item2 == "Obsidian(MW)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&Obisidian, sizeof(Obisidian), g_vars->hProc);

					if (current_item2 == "Diamond(MW)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&MW_Diamond, sizeof(MW_Diamond), g_vars->hProc);

					if (current_item2 == "Gold(MW)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&Gold, sizeof(Gold), g_vars->hProc);
					if (current_item2 == "PinkDiamond(CW)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&CWPDiamond, sizeof(CWPDiamond), g_vars->hProc);

					if (current_item2 == "DarkAether(CW)")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&CWAether, sizeof(CWAether), g_vars->hProc);

					if (current_item2 == "Reset")
						utility::Write((BYTE*)g_vars->goffsets.cwcamoAddr, (BYTE*)&CW_Reset, sizeof(CW_Reset), g_vars->hProc);
				}
				ImGui::Spacing();
				static const char* items3[] = { "DarkMatter(CW)","DarkAether(CW)","Diamond(CW)","Gold(CW)" ,"GoldenViper(VG)", "PlagueDiamond(VG)", "DarkAether(VG)", "PinkDiamond(CW)","CherryBlossom(CW)","Damascus(MW)","Obsidian(MW)","Diamond(MW)","Gold(MW)","Reset" };
				static const char* current_item3 = "Select Camo";

				if (ImGui::BeginCombo("##combo3", current_item3)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(items3); n++)
					{
						bool is_selected3 = (current_item3 == items3[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(items3[n], is_selected3))
							current_item3 = items3[n];
						if (is_selected3)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}
				ImGui::SameLine();
				if (ImGui::Button(xorstr_("Change VG Camo"), ImVec2(150, 20))) {
					g_vars->goffsets.vgcamoAddr = utility::PointerChain(g_vars->hProc, g_vars->baseModule + g_vars->goffsets.camoAddr, { 0x1830, 0x47FD });
					if (current_item3 == "Atomic(VG)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VGAtomic, sizeof(VGAtomic), g_vars->hProc);

					if (current_item3 == "Diamond(VG)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VGDiamond, sizeof(VGDiamond), g_vars->hProc);

					if (current_item3 == "Gold(VG)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VGGold, sizeof(VGGold), g_vars->hProc);

					if (current_item3 == "GoldenViper(VG)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VGGoldenViper, sizeof(VGGoldenViper), g_vars->hProc);

					if (current_item3 == "PlagueDiamond(VG)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VGPlagueDiamond, sizeof(VGPlagueDiamond), g_vars->hProc);

					if (current_item3 == "DarkAether(VG)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VGDarkAether, sizeof(VGDarkAether), g_vars->hProc);

					if (current_item3 == "DarkMatter(CW))")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&CWUltra, sizeof(CWUltra), g_vars->hProc);

					if (current_item3 == "DarkAether(CW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&CWAether, sizeof(CWAether), g_vars->hProc);

					if (current_item3 == "Diamond(CW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&CWDiamond, sizeof(CWDiamond), g_vars->hProc);

					if (current_item3 == "Gold(CW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&CWGold, sizeof(CWGold), g_vars->hProc);

					if (current_item3 == "PinkDiamond(CW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&CWPDiamond, sizeof(CWPDiamond), g_vars->hProc);

					if (current_item3 == "Diamond(MW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&MW_Diamond, sizeof(MW_Diamond), g_vars->hProc);

					if (current_item3 == "CherryBlossom(CW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&Cherry, sizeof(Cherry), g_vars->hProc);

					if (current_item3 == "Damascus(MW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&Damascus, sizeof(Damascus), g_vars->hProc);

					if (current_item3 == "Obsidian(MW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&Obisidian, sizeof(Obisidian), g_vars->hProc);

					if (current_item3 == "Diamond(MW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&MW_Diamond, sizeof(MW_Diamond), g_vars->hProc);

					if (current_item3 == "Gold(MW)")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&Gold, sizeof(Gold), g_vars->hProc);

					if (current_item3 == "Reset")
						utility::Write((BYTE*)g_vars->goffsets.vgcamoAddr, (BYTE*)&VG_Reset, sizeof(VG_Reset), g_vars->hProc);
				}
				ImGui::Spacing();
				ImGui::Spacing();
				static const char* itemclantag[] = { "Logo IW", "Logo RVN", "Logo SHG","Logo DW","Logo HMS","Logo BNOX","Logo 3ARC","Logo VV","Logo TFB","Red 1W","Red LW","Red IW DEV","Red RAVN","Red RAVEN","Red R4VEN", "Red OW", "Red BN0X","Red 34RC","Red ATVI","Custom" };
				static const char* current_clantag = "Select Clan Tag";
				if (ImGui::BeginCombo("##combo4", current_clantag)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(itemclantag); n++)
					{
						bool is_selected4 = (current_clantag == itemclantag[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(itemclantag[n], is_selected4))
							current_clantag = itemclantag[n];
						if (is_selected4)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}

				ImGui::Spacing();
				ImGui::Spacing();
				ImGui::Spacing();
				ImGui::Spacing();
				ImGui::Text("Make sure Doubletime,Hardline,Amped is set!");
				ImGui::Text("Change the Perks you want!");
				ImGui::Text("Copy the Class and Restart the Game!");
				ImGui::Spacing();
				ImGui::Spacing();
				static const char* items4a[] = { "Ghost","Overkill","DoubleTime","Spotter","BattleHardened","KillChain","Scavenger","Sharpnel","HighAlert","TuneUp","Restock","ColdBlooded","EOD","Tracker","BountyHunter","Amped","Hardline","QuickFix","PointMan","CombatScout","Tempered"};
				static const char* current_item4a = "Select Perk";
				g_vars->goffsets.perkAddr1 = utility::PointerChain(g_vars->hProc, g_vars->baseModule + g_vars->goffsets.camoAddr, { 0x1830, 0x2324BB });
				g_vars->goffsets.perkAddr2 = utility::PointerChain(g_vars->hProc, g_vars->baseModule + g_vars->goffsets.camoAddr, { 0x1830, 0x23265F });
				g_vars->goffsets.perkAddr3 = utility::PointerChain(g_vars->hProc, g_vars->baseModule + g_vars->goffsets.camoAddr, { 0x1830, 0x232647 });
				if (ImGui::BeginCombo("##combo4a", current_item4a)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(items4a); n++)
					{
						bool is_selected4a = (current_item4a == items4a[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(items4a[n], is_selected4a))
							current_item4a = items4a[n];
						if (is_selected4a)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}
				ImGui::SameLine();
				if (ImGui::Button("Change Perk1", ImVec2(150, 25))) {
					if (current_item4a == "Ghost")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Ghost, sizeof(Ghost), g_vars->hProc);
					if (current_item4a == "Overkill)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Overkill, sizeof(Overkill), g_vars->hProc);
					if (current_item4a == "DoubleTime)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&DoubleTime, sizeof(DoubleTime), g_vars->hProc);
					if (current_item4a == "Spotter)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Spotter, sizeof(Spotter), g_vars->hProc);
					if (current_item4a == "BattleHardened)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&BattleHardened, sizeof(BattleHardened), g_vars->hProc);
					if (current_item4a == "KillChain)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&KillChain, sizeof(KillChain), g_vars->hProc);
					if (current_item4a == "Scavenger)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Scavenger, sizeof(Scavenger), g_vars->hProc);
					if (current_item4a == "Sharpnel)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Shrapnel, sizeof(Shrapnel), g_vars->hProc);
					if (current_item4a == "HighAlert)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&HighAlert, sizeof(HighAlert), g_vars->hProc);
					if (current_item4a == "TuneUp)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&TuneUp, sizeof(TuneUp), g_vars->hProc);
					if (current_item4a == "Restock)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Restock, sizeof(Restock), g_vars->hProc);
					if (current_item4a == "ColdBlooded)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&ColdBlooded, sizeof(ColdBlooded), g_vars->hProc);
					if (current_item4a == "EOD)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&EOD, sizeof(EOD), g_vars->hProc);
					if (current_item4a == "Tracker)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Tracker, sizeof(Tracker), g_vars->hProc);
					if (current_item4a == "BountyHunter)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&BountyHunter, sizeof(BountyHunter), g_vars->hProc);
					if (current_item4a == "Amped)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Amped, sizeof(Amped), g_vars->hProc);
					if (current_item4a == "Hardline)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Hardline, sizeof(Hardline), g_vars->hProc);
					if (current_item4a == "QuickFix)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&QuickFix, sizeof(QuickFix), g_vars->hProc);
					if (current_item4a == "PointMan)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&PointMan, sizeof(PointMan), g_vars->hProc);
					if (current_item4a == "CombatScout)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&CombatScout, sizeof(CombatScout), g_vars->hProc);
					if (current_item4a == "Tempered)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr1, (BYTE*)&Tempered, sizeof(Tempered), g_vars->hProc);
				}
				ImGui::Spacing();

				static const char* items5[] = { "Ghost","Overkill","DoubleTime","Spotter","BattleHardened","KillChain","Scavenger","Sharpnel","HighAlert","TuneUp","Restock","ColdBlooded","EOD","Tracker","BountyHunter","Amped","Hardline","QuickFix","PointMan","CombatScout","Tempered" };
				static const char* current_item5 = "Select Perk";

				if (ImGui::BeginCombo("##combo5", current_item5)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(items5); n++)
					{
						bool is_selected5 = (current_item5 == items5[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(items5[n], is_selected5))
							current_item5 = items5[n];
						if (is_selected5)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}
				ImGui::SameLine();
				if (ImGui::Button("Change Perk2", ImVec2(150, 25))) {
					if (current_item5 == "Ghost")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Ghost, sizeof(Ghost), g_vars->hProc);
					if (current_item5 == "Overkill)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Overkill, sizeof(Overkill), g_vars->hProc);
					if (current_item5 == "DoubleTime)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&DoubleTime, sizeof(DoubleTime), g_vars->hProc);
					if (current_item5 == "Spotter)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Spotter, sizeof(Spotter), g_vars->hProc);
					if (current_item5 == "BattleHardened)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&BattleHardened, sizeof(BattleHardened), g_vars->hProc);
					if (current_item5 == "KillChain)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&KillChain, sizeof(KillChain), g_vars->hProc);
					if (current_item5 == "Scavenger)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Scavenger, sizeof(Scavenger), g_vars->hProc);
					if (current_item5 == "Sharpnel)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Shrapnel, sizeof(Shrapnel), g_vars->hProc);
					if (current_item5 == "HighAlert)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&HighAlert, sizeof(HighAlert), g_vars->hProc);
					if (current_item5 == "TuneUp)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&TuneUp, sizeof(TuneUp), g_vars->hProc);
					if (current_item5 == "Restock)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Restock, sizeof(Restock), g_vars->hProc);
					if (current_item5 == "ColdBlooded)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&ColdBlooded, sizeof(ColdBlooded), g_vars->hProc);
					if (current_item5 == "EOD)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&EOD, sizeof(EOD), g_vars->hProc);
					if (current_item5 == "Tracker)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Tracker, sizeof(Tracker), g_vars->hProc);
					if (current_item5 == "BountyHunter)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&BountyHunter, sizeof(BountyHunter), g_vars->hProc);
					if (current_item5 == "Amped)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Amped, sizeof(Amped), g_vars->hProc);
					if (current_item5 == "Hardline)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Hardline, sizeof(Hardline), g_vars->hProc);
					if (current_item5 == "QuickFix)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&QuickFix, sizeof(QuickFix), g_vars->hProc);
					if (current_item5 == "PointMan)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&PointMan, sizeof(PointMan), g_vars->hProc);
					if (current_item5 == "CombatScout)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&CombatScout, sizeof(CombatScout), g_vars->hProc);
					if (current_item5 == "Tempered)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr2, (BYTE*)&Tempered, sizeof(Tempered), g_vars->hProc);
				}
				ImGui::Spacing();

				static const char* items6[] = { "Ghost","Overkill","DoubleTime","Spotter","BattleHardened","KillChain","Scavenger","Sharpnel","HighAlert","TuneUp","Restock","ColdBlooded","EOD","Tracker","BountyHunter","Amped","Hardline","QuickFix","PointMan","CombatScout","Tempered" };
				static const char* current_item6 = "Select Perk";

				if (ImGui::BeginCombo("##combo6", current_item6)) // The second parameter is the label previewed before opening the combo.
				{
					for (int n = 0; n < IM_ARRAYSIZE(items6); n++)
					{
						bool is_selected6 = (current_item6 == items6[n]); // You can store your selection however you want, outside or inside your objects
						if (ImGui::Selectable(items6[n], is_selected6))
							current_item6 = items6[n];
						if (is_selected6)
							ImGui::SetItemDefaultFocus();   // You may set the initial focus when opening the combo (scrolling + for keyboard navigation support)
					}
					ImGui::EndCombo();
				}
				ImGui::SameLine();
				if (ImGui::Button("Change Perk3", ImVec2(150, 25))) {
					if (current_item6 == "Ghost")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Ghost, sizeof(Ghost), g_vars->hProc);
					if (current_item6 == "Overkill)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Overkill, sizeof(Overkill), g_vars->hProc);
					if (current_item6 == "DoubleTime)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&DoubleTime, sizeof(DoubleTime), g_vars->hProc);
					if (current_item6 == "Spotter)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Spotter, sizeof(Spotter), g_vars->hProc);
					if (current_item6 == "BattleHardened)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&BattleHardened, sizeof(BattleHardened), g_vars->hProc);
					if (current_item6 == "KillChain)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&KillChain, sizeof(KillChain), g_vars->hProc);
					if (current_item6 == "Scavenger)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Scavenger, sizeof(Scavenger), g_vars->hProc);
					if (current_item6 == "Sharpnel)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Shrapnel, sizeof(Shrapnel), g_vars->hProc);
					if (current_item6 == "HighAlert)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&HighAlert, sizeof(HighAlert), g_vars->hProc);
					if (current_item6 == "TuneUp)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&TuneUp, sizeof(TuneUp), g_vars->hProc);
					if (current_item6 == "Restock)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Restock, sizeof(Restock), g_vars->hProc);
					if (current_item6 == "ColdBlooded)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&ColdBlooded, sizeof(ColdBlooded), g_vars->hProc);
					if (current_item6 == "EOD)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&EOD, sizeof(EOD), g_vars->hProc);
					if (current_item6 == "Tracker)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Tracker, sizeof(Tracker), g_vars->hProc);
					if (current_item6 == "BountyHunter)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&BountyHunter, sizeof(BountyHunter), g_vars->hProc);
					if (current_item6 == "Amped)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Amped, sizeof(Amped), g_vars->hProc);
					if (current_item6 == "Hardline)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Hardline, sizeof(Hardline), g_vars->hProc);
					if (current_item6 == "QuickFix)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&QuickFix, sizeof(QuickFix), g_vars->hProc);
					if (current_item6 == "PointMan)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&PointMan, sizeof(PointMan), g_vars->hProc);
					if (current_item6 == "CombatScout)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&CombatScout, sizeof(CombatScout), g_vars->hProc);
					if (current_item6 == "Tempered)")
						utility::Write((BYTE*)g_vars->goffsets.perkAddr3, (BYTE*)&Tempered, sizeof(Tempered), g_vars->hProc);
				}
				ImGui::SameLine();

				if (ImGui::Button(xorstr_("Set Clan Tag"), ImVec2(150, 20))) {
					if (current_clantag == "Logo IW")
						CL_PlayerData_SetCustomClanTag("iw");
					if (current_clantag == "Logo RVN")
						CL_PlayerData_SetCustomClanTag("rvn");
					if (current_clantag == "Logo SHG")
						CL_PlayerData_SetCustomClanTag("shg");
					if (current_clantag == "Logo DW")
						CL_PlayerData_SetCustomClanTag("dw");
					if (current_clantag == "Logo HMS")
						CL_PlayerData_SetCustomClanTag("hms");
					if (current_clantag == "Logo BNOX")
						CL_PlayerData_SetCustomClanTag("bnox");
					if (current_clantag == "Logo 3ARC")
						CL_PlayerData_SetCustomClanTag("3arc");
					if (current_clantag == "Logo VV")
						CL_PlayerData_SetCustomClanTag("vv");
					if (current_clantag == "Logo TFB")
						CL_PlayerData_SetCustomClanTag("tfb");
					if (current_clantag == "Red 1W")
						CL_PlayerData_SetCustomClanTag("1W");
					if (current_clantag == "Red LW")
						CL_PlayerData_SetCustomClanTag("LW");
					if (current_clantag == "Red IW DEV")
						CL_PlayerData_SetCustomClanTag("IWDev");
					if (current_clantag == "Red RAVN")
						CL_PlayerData_SetCustomClanTag("RAVN");
					if (current_clantag == "Red RAVEN")
						CL_PlayerData_SetCustomClanTag("RAVEN");
					if (current_clantag == "Red R4VEN")
						CL_PlayerData_SetCustomClanTag("R4VEN");
					if (current_clantag == "Red OW")
						CL_PlayerData_SetCustomClanTag("OW");
					if (current_clantag == "Red BN0X")
						CL_PlayerData_SetCustomClanTag("BN0X");
					if (current_clantag == "Red 34RC")
						CL_PlayerData_SetCustomClanTag("34RC");
					if (current_clantag == "Red ATVI")
						CL_PlayerData_SetCustomClanTag("ATVI");
				}
				if (current_clantag == "Custom")
				{
					ImGui::InputTextWithHint(xorstr_("##KeyInput"), xorstr_("Custom Clan Tag"), customtag, 5);
					ImGui::SameLine();
					if (ImGui::Button(xorstr_("Set Custom Clan Tag"), ImVec2(150, 20)))
					{
						CL_PlayerData_SetCustomClanTag(customtag);
					}
				}
			}
			ImGui::Spacing();

			
			
			ImGui::EndChild();
		}
		ImGui::EndGroup();
		ImGui::PopFont();
	}
}