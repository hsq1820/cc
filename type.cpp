#include <iostream>
#include <windows.h>

using namespace std;

void typeText(const string& text) {
    for (char c : text) {
        INPUT input;
        input.type = INPUT_KEYBOARD;
        input.ki.wScan = 0;
        input.ki.time = 0;
        input.ki.dwExtraInfo = 0;

        input.ki.wVk = VkKeyScanA(c);
        input.ki.dwFlags = 0;
        SendInput(1, &input, sizeof(INPUT));

        input.ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(1, &input, sizeof(INPUT));

        Sleep(1); // 等待一段时间，可根据需要调整
    }
}

int main() {
    string text = "  In order to have a rest from workdays,I have made a plan of a one-day trip in Wuhan.In the following passage,,I will introduce my plan.\n  I’m starting with a visit to Hubei provincial Museum which can’t be missed. In the museum, I can see the treasures of the town and fell the culture of Jingchu.It is worth emphasizing that I should book the ticket in advance.When the visit ends at 10:30,I am going to take the subway to the Yellow Crane Tower. Standing on the top floor of the Yellow Crane Tower, I can enjoy the beautiful scenery of Wuhan.Afterwards,it’s time for visiting Wuhan Yangtze River Bridge. I’m going to walk to the bottom of the bridge to enjoy the good view of the Yangtze River. On the way, I will pass by Hubu Lane,where I’m going to have lunch.after that,I’m going to visit the Wuhan Art Museum where I can appreciate the charm of art.Finally,I will end the day with walking on Jianghan Road. I will take a taxi there and eat while walking along the Jianghan Road,then take the subway back to school.\n  With such a plan,I believe that I will have an interesting and fulfilling trip.";
    Sleep(5000);
    typeText(text);

    return 0;
}