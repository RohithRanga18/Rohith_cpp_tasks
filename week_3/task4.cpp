#include <iostream>
#include <map>
#include <string>

class Theme {
public:
    std::string backgroundColor;
    std::string fontColor;
    int fontSize;
    std::string iconStyle;

    Theme(const std::string& bg, const std::string& font, int size, const std::string& icon)
        : backgroundColor(bg), fontColor(font), fontSize(size), iconStyle(icon) {}

    void display() const {
        std::cout << "Background Color: " << backgroundColor << "\n"
            << "Font Color: " << fontColor << "\n"
            << "Font Size: " << fontSize << "\n"
            << "Icon Style: " << iconStyle << "\n";
    }
};
        
int main() {
    // Initialize themes
    std::map<std::string, Theme> themes = {
        {"Classic", Theme("Black", "White", 12, "Square")},
        {"Sport", Theme("Red", "White", 14, "Bold")},
        {"Eco", Theme("Green", "Black", 10, "Minimal")}
    };

    std::string selectedTheme;
    while (true) {
        std::cout << "\nAvailable Themes:\n";
        for (const auto& themePair : themes) {
            std::cout << "- " << themePair.first << "\n";  // Use themePair.first to get the theme name
        }
        std::cout << "Enter theme name to apply (or type 'exit' to quit): ";
        std::cin >> selectedTheme;

        if (selectedTheme == "exit") {
            std::cout << "Exiting the theme selection program.\n";
            break;
        }

        // Check if the theme exists and display its properties
        auto it = themes.find(selectedTheme);
        if (it != themes.end()) {
            std::cout << "Applying Theme: " << selectedTheme << "\n";
            it->second.display();
        }
        else {
            std::cout << "Invalid theme. Please try again.\n";
        }
    }

    return 0;
}
