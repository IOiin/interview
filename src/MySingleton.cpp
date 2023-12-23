//
// Created by Anduin L on 23/12/2023.
//
#include <mutex>

class MySingleton{
public:
    MySingleton(const MySingleton&) = delete;
    MySingleton& operator=(const MySingleton&) = delete;

    ~MySingleton() = default;

    static MySingleton* get_instance() {
      if (!instance) {
        std::lock_guard<std::mutex> lock(mutex);
        if(!instance) {
          instance = new MySingleton();
        }
      }
      return instance;
    }
private:
    MySingleton() {};

    static MySingleton* instance;
    static std::mutex mutex;
};

// 饿汉实现，类加载时候就创建唯一实例
// MySingleton* MySingleton::instance = new MySingleton();

// 懒汉实现模式
MySingleton* MySingleton::instance = nullptr;
std::mutex MySingleton::mutex;