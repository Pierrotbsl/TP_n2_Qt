cmake_minimum_required(VERSION 3.7)
project(TP_n_2_Qt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP_n_2_Qt main.cpp SQLClientWindow.cpp SQLClientWindow.h ButtonsPanel.cpp ButtonsPanel.h ConfigurationDialog.cpp ConfigurationDialog.h LabeledTextField.cpp LabeledTextField.h MainWindow.cpp MainWindow.h Window.cpp Window.h)
target_link_libraries(TP_n_2_Qt Qt5::Widgets)




