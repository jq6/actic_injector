//THANK YOU SIR NICE BIG D*CK SIRR!!!

#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <sstream>
#include <iomanip>
#include <Windows.h>



std::string generateRandomString() { //BRO CHATGPT???
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 15);

    std::stringstream ss;
    ss << std::hex << std::setw(7) << std::setfill('0');

    for (int i = 0; i < 7; ++i) {
        ss << dis(gen); 
    }

    return ss.str();
}


int main()
{
    std::cout << "Waiting for 10 seconds...\n";
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "Searching for window 'Roblox'...\n";
    std::cout << "Window found.\n";
    std::cout << "Process opened successfully.\n";
    std::cout << "Memory allocated for the DLL path.\n";
    std::cout << "Remote thread created.\n";
    std::string fakegen = generateRandomString();
    for (char& c : fakegen) {
        c = std::toupper(c);
    }

    std::cout << "Dll path allocated at: " << fakegen<<"0000";
    std::cout << "\nWaiting indefinitely...\n";
    MessageBoxA(NULL, "Succesfully injected: RobloxPlayerBeta.exe", "Actic", MB_OK | MB_ICONINFORMATION);
    int a;
    std::cin >> a;
}
