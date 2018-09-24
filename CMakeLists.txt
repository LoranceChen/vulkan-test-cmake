cmake_minimum_required(VERSION 3.10)
project(valkan_test)

set(CMAKE_CXX_STANDARD 11)


add_executable(valkan_test main.cpp)

target_include_directories(valkan_test
        PUBLIC
        /Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/include
        /usr/local/include
        )

#LINK_DIRECTORIES(
#        /Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/lib
#        /usr/local/lib
#        )
target_link_libraries(valkan_test
#        /Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/lib
#        /usr/local/lib
        /usr/local/lib/libglfw.3.3.dylib
        /Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/lib/libvulkan.1.1.82.dylib
        /Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/lib/libvulkan.1.dylib
#        libglfw.3.3.dylib
#        libvulkan.1.1.82.dylib
#        libvulkan.1.dylib
        )
