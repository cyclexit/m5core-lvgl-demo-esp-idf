#ifndef M5CORE2_LVGL_DEMO_ESP_IDF_LVGL_MANAGER_HPP_
#define M5CORE2_LVGL_DEMO_ESP_IDF_LVGL_MANAGER_HPP_

class LvglManager {
 public:
  void init();

  // enable singleton
  static LvglManager& instance() {
    static LvglManager me;
    return me;
  }
  LvglManager(LvglManager const&) = delete; // delete copy construct
  LvglManager(LvglManager&&) = delete; // delete move construct
  LvglManager& operator=(LvglManager const&) = delete; // delete copy assign
  LvglManager& operator=(LvglManager &&) = delete; // delete move assign

 private:
  LvglManager() = default;
  ~LvglManager() = default;
};

#endif // M5CORE2_LVGL_DEMO_ESP_IDF_LVGL_MANAGER_HPP_