#include "pch.h"
#include "Menu.h"
#include "resource.h"

// Global variable to store the background brush
extern HBRUSH hbrBackground;

// Message handler for changelog box.
INT_PTR CALLBACK ChangeLog(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
    {
        HWND hEdit = GetDlgItem(hDlg, IDC_CHANGELOG);
        if (hEdit)
        {
            const char* changelogText =
                "v3.4\r\n"
                "     - Complete rework of \"Anti AFK\" code\r\n"
                "     - Added Eat / Drink timer input to \"Anti AFK\"\r\n"
                "     - Added ability to only Move or Eat / Drink to\r\n"
                "      \"Anti AFK\" (Should add more functionality)\r\n\r\n"
                "v3.3.2\r\n"
                "     - Minor fix for \"Mass Baby Feed\" timings\r\n\r\n"
                "v3.3.1\r\n"
                "     - Added text input to server number box (for\r\n"
                "       servers with fewer then 4 numbers like arkpoc\r\n"
                "       and conquest)\r\n\r\n"
                "v3.3\r\n"
                "     - Fixed unintended breakage of \"Auto Join\r\n"
                "       Server\" when server number was implemented\r\n"
                "     - Refactoring of code to optimize \"Auto Join\r\n"
                "       Server\" and \"Backup Joiner\"\r\n"
                "     - Consolidated coordinates for \"Auto Join Server\"\r\n"
                "       and \"Backup Joiner\" eliminating duplicates\r\n\r\n"
                "v3.2\r\n"
                "     - New feature added \"Auto Drop Items\"\r\n"
                "     - Fixed programming to detect if \"Disable Menu\r\n"
                "       Transitions\" is enabled or disabled automatically\r\n\r\n"
                "v3.1\r\n"
                "     - Fix for \"Alarm / Timer\" function to perform as\r\n"
                "       intended\r\n"
                "     - \"Alarm / Timer\" will now play sound when\r\n"
                "       reaching \"0\" if \"Enable Sound\" checkbox clicked\r\n\r\n"
                "v3.0.1\r\n"
                "     - Minor fix for Color IDs not loading properly\r\n\r\n"
                "v3.0\r\n"
                "     - New features \"Solo Nanny\", \"Empty Crop\r\n"
                "       Plots\", \"Mass Baby Feed\", \"Drop Thief\",\r\n"
                "      \"Alarm / Timer\" and \"Auto Walk / Fly\"\r\n"
                "     - Updated user guide for better explaining of\r\n"
                "       each feature\r\n"
                "     - Added server number for Auto Joiner\r\n"
                "     - Added item auto drop for Auto Farmer\r\n"
                "     - Added ASA color chart to menu\r\n"
                "     - First implementation of settings with known\r\n" 
                "       hotkeys / transparency slider\r\n"
                "     - Finalized major build with reduced size and files\r\n"
                "     - Project is now \"open source\" with link in\r\n"
                "      \"About\" to allow others to add to or fix in the\r\n"
                "       future\r\n\r\n"
                "v2.6\r\n"
                "     - Added \"User Guide\" and \"Changelog\" to help\r\n"
                "       menu\r\n"
                "     - Implemented hotkey \"F4\" to start and stop\r\n"
                "     - Changed \"Auto Clicker\" to \"Auto Farmer\" and\r\n"
                "       removed moving of cursor\r\n"
                "     - Changed a lot of backend code for better\r\n"
                "       optimization / organization\r\n\r\n"
                "v2.5.1\r\n"
                "     - Fixed Auto Joiner for 1920x1080 and 1536x864\r\n"
                "     - Added small sleep delay for Backup Joiner\r\n\r\n"
                "v2.5\r\n"
                "     - Adjusted Auto Joiner / Backup Joiner to\r\n"
                "       compensate for button movement on join\r\n"
                "       screen\r\n"
                "     - Added/Fixed 1536x864 support\r\n\r\n"
                "v2.4\r\n"
                "     - Added an alternative \"Backup Auto Joiner\" for users that the original \"Auto Join Server\" is not working for. This function works like the original; please hit the start button on the main server selection page with the server you want to join at the top of the list.\r\n\r\n"
                "v2.3\r\n"
                "     - Changed AntiAFK to A & D (Strafe) with X (Prone) in between for better movement control, will continue to monitor (reports of moving too much forward into the wall)\r\n"
                "     - minor fix to AutoJoiner stop logic\r\n"
                "     - minor fix for 3440x1440 / 1920x1200 (small adjustments)\r\n\r\n"
                "v2.2\r\n"
                "     - Added Eating and Drinking to AntiAFK every 1hr (make sure you have food and drink on 9 and 0, can adjust if too slow)\r\n"
                "     - Added extra logic to immediately stop when stop is clicked (would previously try to finish task then stop)\r\n"
                "     - Increased delay on AutoJoiner from 0.1 to 0.5 seconds between clicks to prevent program from becoming unresponsive.\r\n"
                "     - Adjusted some program padding\r\n\r\n"
                "v2.1\r\n"
                "     - Fixed 1920x1200 Resolution Scaling\r\n"
                "     - Fixed AntiAFK to press keys longer\r\n"
                "     - Fixed misclick on join screen for people with/without Bob's Tall Tales DLC\r\n\r\n"
                "v2.0\r\n"
                "     - Added New features AntiAFK and AutoClicker\r\n"
                "     - Fixed code to detect resolution and scale accordingly\r\n"
                "     - Fixed Button to toggle the start and stop process\r\n"
                "     - Added show current user screen resolution for troubleshooting\r\n\r\n"
                "v1.0\r\n"
                "     - Program created and basic Autojoin (only worked on 3440x1440)\r\n";

            SetWindowTextA(hEdit, changelogText);
        }

        // Recreate the background brush and set the background color
        hbrBackground = CreateSolidBrush(RGB(0, 0, 0));
        SetClassLongPtr(hDlg, GCLP_HBRBACKGROUND, (LONG_PTR)hbrBackground);

        return TRUE;
    }
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    case WM_CTLCOLORDLG:
    {
        HDC hdcDlg = (HDC)wParam;
        SetTextColor(hdcDlg, RGB(255, 255, 255)); // Set text color to white
        SetBkColor(hdcDlg, RGB(0, 0, 0)); // Set background color to black
        return (INT_PTR)hbrBackground; // Return the background brush
    }
    break;
    case WM_CTLCOLORSTATIC:
    {
        HDC hdcStatic = (HDC)wParam;
        SetTextColor(hdcStatic, RGB(255, 255, 255)); // Set text color to white
        SetBkColor(hdcStatic, RGB(0, 0, 0));         // Set background color to black
        return (INT_PTR)hbrBackground;               // Return the background brush
    }
    break;
    }
    return (INT_PTR)FALSE;
}