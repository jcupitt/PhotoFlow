cmake_minimum_required(VERSION 2.8)

project(photoflow)

find_package(PkgConfig)

MESSAGE(STATUS "Check for LCMS2 availability...")
#FIND_PACKAGE(LCMS2)
pkg_check_modules(LCMS2 REQUIRED lcms2) 

find_package (TIFF REQUIRED)

#find_package (LibXML++ REQUIRED)
pkg_check_modules(LIBXML REQUIRED libxml++-2.6) 

pkg_check_modules(SIGC2 REQUIRED sigc++-2.0)

pkg_check_modules(VIPS REQUIRED vips)
pkg_check_modules(VIPSCC REQUIRED vipsCC)

#pkg_check_modules(GTKMM REQUIRED gtkmm) 
pkg_check_modules(GTKMM2 gtkmm-2.4) 
#pkg_check_modules(GTKMM3 gtkmm-3.0) 

  
add_subdirectory(src) 
