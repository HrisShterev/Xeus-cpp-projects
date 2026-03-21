#include "xeus/xinterpreter.hpp"
#include "nlohmann/json.hpp"

void show_image(std::string path, int width) {
    nlohmann::json bundle;
    bundle["text/html"] = "<img src='" + path + "' style='width: " + std::to_string(width) + "%;'>";
    xeus::get_interpreter().display_data(bundle, nlohmann::json::object(), nlohmann::json::object());
}