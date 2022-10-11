project(TestInstallation)
cmake_minimum_required(VERSION 3.5)

find_package(zlib 1.2.11  PATHS  "E:\\AAA_z\\zlib1211\\zlib_19.0.24215.1_install")

add_executable(mymathApp mymathApp.cc)
target_link_libraries(mymathApp zlib::zlib)
target_include_directories(mymathApp  PRIVATE  "E:\\AAA_z\\zlib1211\\zlib_19.0.24215.1_install/include")
